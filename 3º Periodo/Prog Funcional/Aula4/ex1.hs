module Minlista  where

main :: IO ()

minList :: [Int] -> Int

minList [x] = x
minList (x:y:xs)
    |x < y = minList (x: xs)
    |otherwise = minList (y : xs)

main = return ()


