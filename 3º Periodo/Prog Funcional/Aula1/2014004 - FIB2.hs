module FibonacciLinear where

main :: IO ()

fibLinear :: Int -> Int
fibLinear n = fib' n 0 1
  where
    fib' 0 f _ = f
    fib' 1 _ g = g
    fib' n f g = fib' (n - 1) g (f + g)

main = return ()