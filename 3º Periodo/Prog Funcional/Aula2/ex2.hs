module Primo where

main :: IO () 

divisores :: Int -> [Int]
divisores n = [x | x <- [1..n], n `mod` x == 0]

primes :: Int -> Bool
primes n 
    | divisores n == [1, n];
    | otherwise = False

intervaloPrimos :: Int -> [Int]
intervaloPrimos n = [x | x <- [1..n], primes x]

main = return ()


