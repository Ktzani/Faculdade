module Firsts where

main :: IO ()

takeList :: Int-> [a] -> [a]
takeList 0 _ = []
takeList _ [] = []
takeList n (x:xs) = x : takeList (n-1) xs