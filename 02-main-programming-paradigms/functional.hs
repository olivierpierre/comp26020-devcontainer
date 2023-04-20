-- To compile and run on the Linux command line:
-- ghc listing10.hs
-- ./listing10

add_10 x = x + 10

twice f = f . f

main = do
    print $ twice (add_10) 7

