module Perfeito where

main :: IO ()

achafatores :: Int -> [Int]
achafatores n = [x | x <- [1..n - 1], n `mod` x == 0]

ehperfeito :: Int -> Bool 
ehperfeito n 
    | sum(achafatores n) == n = True
    | otherwise = False 

listaPerfeito :: Int -> [Int]
listaPerfeito n = [x | x <- [1..n], ehperfeito x]

main = return ()