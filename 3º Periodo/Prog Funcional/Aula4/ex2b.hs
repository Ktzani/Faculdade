module OR where

main :: IO ()

or :: [Bool] -> Bool

or [True] = True
or [False] = False
or (x:y:xs)
    | x == false && y == false = or (false:xs)
    | x == true && y == _ = or (true:xs)
    |otherwise or (true:xs)