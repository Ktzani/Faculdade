module Fibonacci where

main :: IO ()

{-
Aluno: Caio Monteiro de Oliveira; Matrícula: 20.1.4110.

1.A função de Fibonacci pode ser definida como:    

        0 se n = 0
F(n) =  1 se n = 1  
        F(n − 1) + F(n − 2) caso contrário.

Implemente uma função em Haskell para calcular F(n)
-}

fn :: Int -> Int
fn 0 = 0
fn 1 = 1
fn n = fn (n - 1) + fn (n - 2)


main = return ()