-- To compile and run on the Linux command line:
-- ghc functional.hs
-- ./functional

add_10 x = x + 10

twice f = f . f

main = do
    print $ twice (add_10) 7

