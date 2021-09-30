module FibonacciLinear where

main :: IO ()

{-
Aluno: Caio Monteiro de Oliveira; Matrícula: 20.1.4110.

2. A função de Fibonacci, implementada de acordo com a
definição anterior, realiza um número exponencial de chamadas
recursivas. Implemente uma função que calcule F(n) fazendo
um número linear de chamadas recursivas.
-}


fn :: Int -> Int
fn n = fib 0 1 n
  where
    fib x y 0 = x
    fib x y 1 = y
    fib x y n = fib y (x + y) (n - 1)

main = return ()