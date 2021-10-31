data Error = NameLengthError | NameCharactersError | PhoneError | EmailSizeError | EmailCharError 

deriving (Eq, Show)

data Validation = Ok | Failure [Error] deriving (Eq, Show)

question04 :: Client -> Validation
question04 x = question04' x 0
    where 
        question04' (Client n p e) ac =
            if name3min n && ac == 0
                then question04' (Client n p e) ac = Failure (NameLengthError) ++ question04' (Client n p e) (ac + 1)

            else if nameNum n && ac <= 1
                then question04' (Client n p e) ac = Failure (NameCharactersError) ++ question04' (Client n p e) (ac + 2)

            else if telDig p && ac <= 3
                then question04' (Client n p e) ac = Failure (PhoneError) ++ question04' (Client n p e) (ac + 4)

            else if email3min e && ac <= 7
                then question04' (Client n p e) ac = Failure(EmailSizeError) ++ question04' (Client n p e) (ac + 8)
    
            else if emailNum
                then question04' (Client n p e) ac = Failure(EmailCharError)
 
            else if ac == 0
                then question04' _ ac = OK


{-EXPLICAÇÃO: Apesar de ser uma maneira mais confusa, foi a unica que consegui encontrar testando varios casos com 
              acumulador ate encontrar os valores certos no papel (indo caso por caso) para que a lista 
              ficasse com os erros corretos, sem repeti-los e sem pula-los. 
              
              Portanto, a partir desse acumulador (que funcionou como um "contador"), fui testando diversas
              condiçoes junto com as funções auxiliares criadas anteriormente e assim consegui evitar de ter 
              itens repetidos ou pula-los e criar uma lista de Failure sem problemas 

              OBSERVAÇÃO: Para o uso desse acumulador, foi necesarrio criar um funçao dentro da funçao question04
              chamada de question04' e nela que eu criei o acumulador e o inicializei como 0
-}



{- name3min :: String -> Bool
name3min n = (lenght n) < 3 

nameNum :: String -> Bool
nameNum [] = False 
nameNum (x : xs)
      -- Espaço         Letras minusculas em ASCII           Letras maiusculas em ASCII
    |(ord x == 32) || ((ord x >= 65) && (ord x <= 90)) || ((ord x >= 97) && (ord x <= 122)) = nameNum xs
    |otherwise = True

telDig :: String -> Bool
telDig [] = False 
telDig (x : xs)
    | (ord x >= 48) && (ord x <= 57) = telDig xs
    | otherwise = True

email3min :: String -> Bool
email3min e = (lenght e) < 3

emailNum :: String -> Bool
emailNum [] = True
emailNum (x : xs)
    | x /= "@" = emailNum xs 
    | otherwise = False 
-}
