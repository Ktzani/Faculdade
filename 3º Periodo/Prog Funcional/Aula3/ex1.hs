bools :: [Bool]
bools [True , False , True, False]


nums :: [[Int]]
nums [[1,2,3] , [4,5,6]]

add :: int -> int -> int -> int 
add x y z = som
    where 
        som = x + y + z

copy :: a -> (a, a)
copy x = (x + 1, x + 2)

apply :: (a -> b) -> a -> b
apply a b = a b

swap :: (a, b) -> (b, a) 
swap (x, y) = (y, x)
