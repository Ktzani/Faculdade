type Name = String
type Phone = String
type Email = String
data Client = Client Name Phone Email deriving (Eq, Show)

question03 :: Client -> Bool
question03 (Client n p e) = 
    if name3min n || nameNum n || telDig p || email3min e || emailNum e
        then False  
    
    else True


name3min :: String -> Bool
name3min n = (length n) < 3 

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
email3min e = (length e) < 3

emailNum :: String -> Bool
emailNum [] = True
emailNum (x : xs)
    | x /= "@" = emailNum xs 
    | otherwise = False

{-  EXPLICAÇÃO: Para essa questão, para cada caso de INVALIDADE, fiz uma funçao auxiliar especifica que recebe
    uma das strings que quero testar do Cliente (nome, telefone, email) para retornar True or False. Dessa maneira, 
    a primeira função testa se a string nome tem mais que 3 caracteres , a segunda testa se só há espaços e 
    letra minusculas e maisculas na string nome, a terceira testa se há apenas digitos na string telefone, a quarta 
    testa se a string email tem mais que 3 caracteres e a ultima testa se a string email possui o @ em no meio da string

    Logo, junto tudo isso e faço comparações, onde se qualquer uma dessa funções retornar VERDADEIRO (ou seja, 
    usando comparaçoes com OU), que dizer que um os dados do Cliente é INVÁLIDO. Portanto, a função questao03 
    retorna False. Se todas essa funções auxiliares retornarem FALSO, quer dizer que a informação do Cliente
    é VÁLIDA 

    Obs: Para verificação dos caracteres das strings usamos a tabela ASCII, como por exemplo, os valores de 65 a 90
    correspodem as letras minusculas, de 97 a 122 correspondem as letras maiusculas, 32 corresponde ao espaço e 48 a
    57 corresponde ao numeros de 0 a 9
     -}



{- else if nameNum n 
        then question03 n p e = False 

    else if telDig p 
        then question03 n p e = False
    
    else if email3min e
        then question03 n p e = False

    else if emailNum e
        then question03 n p e = False
-}

