module And where

main :: IO ()

and :: [Bool] -> Bool

and [True] = True
and [False] = False
and (x:y:xs)
    | x == false && y == _ = and (false:xs)
    | x == true && y == false = and (false:xs)
    |otherwise and (true:xs)



