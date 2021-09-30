import GHC.List (length)

module TamanhoLista where

main :: IO () 

length :: [a] -> Int
length xs = sum [1 | _ <- xs]   

casamento :: [a] -> Bool
casamento [] = True
casamento [_] = True
casamento [_ , _] = True
casamento _ = False

outraforma :: [a] -> Bool
outraforma y = length y <= 2

