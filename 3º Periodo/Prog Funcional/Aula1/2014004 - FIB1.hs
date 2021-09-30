module Fibonacci where

main :: IO ()

fibonacci :: Int -> Int 
fibonacci 0 = 0
fibonacci 1 = 1
fibonacci n = calcfibonacci (n - 1) + calcfibonacci (n - 2)

main = return()