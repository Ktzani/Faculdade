module INT where

main :: IO ()

{-
Aluno: Caio Monteiro de Oliveira; Matrícula: 20.1.4110.

1. Implemente uma função que, a partir de 3 números inteiros,
retorne a soma dos quadrados dos dois maiores números.
-}

s :: Int -> Int -> Int
s x y = (x * x) + (y * y)

m :: Int -> Int -> Int -> Int
m x y z = do
    if x > y                                          
        then if y > z
            then s x y  
        else if x > z 
            then s x z
        else s z x                                                
    else if y > z                                       
        then if x > z 
            then s y x  
        else s y z       
    else s z y   

main = return ()