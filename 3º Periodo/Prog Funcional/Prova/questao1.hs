question01 :: [Integer] -> [Integer]
question01 [] = [] 
question01 (x : xs) 
    | not even x =  x * x : question01 xs
    | otherwise = x : question01 xs 

-- Por meio de uma recursão, fiz essa questão, onde, no caso base, quando retornar ou tiver como entrada 
-- uma lista vazia, retorna uma lista vazia.
 
-- No caso recursivo, fazemos comparações com a cabeça e a calda da lista, a percorrendo, onde vou pegando por meio do 
-- not even (o even retorna verdadeiro se for par e assim o not even retorna verdadeiro se for impar) cada um dos 
-- dos elementos da lista que são ímpares e elevo ele ao quadrado. Caso não seja impar, apenas chamo recursivamente 
-- para funçao question01. Assim, construo uma lista com os numeros impares elevados ao quadrado e com os numeros pare
-- da mesma forma que eles ja estavam






    



