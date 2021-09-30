module Inteiros where

main :: IO ()

somaquadrado :: Int -> Int -> Int

somaquadrado x y = (x * x) + (y * y)
 
maiores :: Int -> Int -> Int -> Int

maiores a b c = do

    if a > b && a > c && b > c
        then somaquadrado a b
    
    else if a > b && a > c && c > b
        then somaquadrado a c 
    
    else somaquadrado b c
        

main = return ()