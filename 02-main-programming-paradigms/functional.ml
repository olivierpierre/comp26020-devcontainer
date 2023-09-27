(* To compile and run on the Linux command line:
 * ocamlc graphics.cma functional.ml -o functional-ocaml
 * ./functional-ocaml
 *)
open Graphics;;

open_graph " 800x600";;
let width, height = 800, 600
let pi = 4. *. atan 1.;;

let endpoint x y angle length =
    x +. length *. cos angle,
    y +. length *. sin angle;;

let drawLine x y angle length width =
    let x_end, y_end = endpoint x y angle length in
    set_line_width (truncate width);
    moveto (truncate x) (truncate y);
    lineto (truncate x_end) (truncate y_end);;

let rec drawRec x y angle length width =
    if length > 0. then
        let endx, endy = endpoint x y angle length in
        drawLine x y angle length width;
        drawRec endx endy (angle +. pi *. 0.133) (length -. 4.) (width *. 0.75);
        drawRec endx endy (angle +. pi *. -0.166) (length -. 4.) (width *. 0.75);;

moveto 400 200;;
drawRec 400. 200. (pi *. 0.5) 50.0 4.;;

read_line();;

