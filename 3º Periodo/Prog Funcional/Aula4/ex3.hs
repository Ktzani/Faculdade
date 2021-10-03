module OR where

main :: IO ()

indexOf :: [Int] -> Int -> Int -> a

indexOf (x:xs) y n
    | [] = -1
    | x == y = n
    | otherwise = indexOf(xs y n + 1)
    