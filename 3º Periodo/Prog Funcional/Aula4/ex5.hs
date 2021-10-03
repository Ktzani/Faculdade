module RetiraFirsts where

main :: IO ()

dropList :: Int -> [a] 
dropList 0 xs = xs
dropList _ [] = []
dropList n (x:xs) = dropList (n-1) xs