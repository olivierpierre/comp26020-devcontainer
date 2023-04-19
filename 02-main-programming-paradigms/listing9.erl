% To compile and run on the Linux command line,
% (on debian-based systems such as mint):
% sudo apt install erlang
% erlc listing9.erl
% erl -noshell -s listing9 start -s init stop

-module(listing9).
-export([start/0, server/0, client/1]).

server() ->
    receive
        {From, {convert, TempC}} -> From ! {converted, 32 + TempC *9/5},
                            server();
        {stop} -> io:format("Stopping~n");
        Other -> io:format("Unknown: ~p~n", [Other]),
                 server()
    end.

client(ServerPID) ->
    TempC = rand:uniform(40),
    ServerPID ! {self(), {convert, TempC}},
    receive
        {converted, TempF} -> io:fwrite("~p deg. C is ~p deg. F~n.", [TempC, TempF]),
                           timer:sleep(100),
                           client(ServerPID);
        {stop} -> io:format("Stopping~n");
        Other -> io:format("Unknown: ~p~n", [Other])
    end.

start() ->
    Pid1 = spawn(listing9, server, []),
    spawn(listing9, client, [Pid1]),
    timer:sleep(3).
