module Ehmaior where

main :: IO () 

maior :: Int -> Int -> Int -> Int
maior a b c 
    |a > b && a > c = a 
    |b > a && b > c = b 
    |otherwise = c

main = return ()