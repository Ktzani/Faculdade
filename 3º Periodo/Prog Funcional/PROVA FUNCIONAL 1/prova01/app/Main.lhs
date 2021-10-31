Avaliação 1 de Programação Funcional
========================

ATENÇÃO
-------

* A interpretação dos enunciados faz parte
da avaliação.

* A avaliação deve ser resolvida INDIVIDUALMENTE.
Plágios não serão tolerados. TODAS as avaliações
em que algum tipo de plágio for detectado receberão
nota ZERO.

* Se você utilizar recursos disponíveis na internet
e que não fazem parte da bibliografia, você deverá
explicitamente citar a fonte apresentando o link
pertinente como um comentário em seu código.

* Todo código produzido por você deve ser acompanhado
por um texto explicando a estratégia usada para a
solução. Lembre-se: meramente parafrasear o código
não é considerado uma explicação!

* Não é permitido eliminar a diretiva de compilação -Wall
do cabeçalho desta avaliação.

* Caso julgue necessário, você poderá incluir bibliotecas
adicionais incluindo "imports" no cabeçalho deste
módulo.

* Seu código deve ser compilado sem erros e warnings
de compilação. A presença de erros acarretará em
uma penalidade de 20% para cada erro de compilação e
de 10% para cada warning. Esses valores serão descontados
sobre a nota final obtida pelo aluno.

* Todo o código a ser produzido por você está marcado
usando a função "undefined". Sua solução deverá
substituir a chamada a undefined por uma implementação
apropriada.

* Todas as questões desta avaliação possuem casos de
teste para ajudar no entendimento do resultado
esperado. Para execução dos casos de teste, basta
executar os seguintes comandos:

```
$> stack build
$> stack exec prova1-exe
```

* Sobre a entrega da solução:

1. A entrega da solução da avaliação deve ser feita
como um único arquivo .zip contendo todo o projeto
stack usado.

2. O arquivo .zip a ser entregue deve usar a seguinte
convenção de nome: MATRÍCULA.zip, em que matrícula é
a sua matrícula. Exemplo: Se sua matrícula for
20.1.2020 então o arquivo entregue deve ser
2012020.zip. A não observância ao critério de nome e
formato da solução receberá uma penalidade de 20%
sobre a nota obtida na avaliação.

3. O arquivo de solução deverá ser entregue usando a
atividade "Entrega da Avaliação 1" no Moodle dentro do
prazo estabelecido.

4. É de responsabilidade do aluno a entrega da solução
dentro deste prazo.

5. Sob NENHUMA hipótese serão aceitas soluções fora do
prazo ou entregues usando outra ferramenta que
não a plataforma Moodle.


Setup inicial
-------------

> {-# OPTIONS_GHC -Wall #-}

> module Main where

> import Test.Tasty
> import Test.Tasty.HUnit
> import Data.Char(ord)

> main :: IO ()
> main = defaultMain tests

> tests :: TestTree
> tests
>   = testGroup "Unit tests"
>         [
>            question01Tests
>         ,  question02Tests
>         ,  question03Tests
>         ,  question04Tests
>         ,  question05Tests
>         ]


Questão 1. Escreva a função

> question01 :: [Integer] -> [Integer]
> question01 [] = [] 
> question01 (x : xs) 
>   |not (even x) =  x * x : question01 xs
>   |otherwise = x : question01 xs

> {- Por meio de uma recursão, fiz essa questão, onde, no caso base, quando retornar ou tiver como entrada 
>    uma lista vazia, retorna uma lista vazia.
> 
>    No caso recursivo, fazemos comparações com a cabeça e a calda da lista, a percorrendo, onde vou pegando por meio do 
>    not even (o even retorna verdadeiro se for par e assim o not even retorna verdadeiro se for impar) cada um dos 
>    dos elementos da lista que são ímpares e elevo ele ao quadrado. Caso não seja impar, apenas chamo recursivamente 
>    para funçao question01. Assim, construo uma lista com os numeros impares elevados ao quadrado e com os numeros pare
>    da mesma forma que eles ja estavam
> -}

que recebe uma lista de inteiros como entrada e
retorna como resultado uma lista de inteiros em que
todo número ímpar presente na lista é elevado ao quadrado.
Sua implementação deve atender os seguintes casos de teste.

> question01Tests :: TestTree
> question01Tests
>       = testGroup "Question 01 Tests"
>                    [
>                       testCase "Question 01 empty" $
>                           question01 [] @?= []
>                    ,  testCase "Question 01 all even" $
>                           question01 (map (* 2) [1..5]) @?= map (* 2) [1..5]
>                    ,  testCase "Question 01 some odd" $
>                           question01 [1..5] @?= [1,2,9,4,25]
>                    ]


Questão 2. Considere o seguinte tipo de dados:

> data Times = Zero | One | Two

Sua tarefa é implementar a função:

> question02 :: Times -> (a, a, a) -> (a, a, a)
> question02 Zero (x, y, z) = (x, y, z)
> question02 One (x, y, z)  = (z, x, y)
> question02 Two (x, y, z)  = (y, z, x)

> {- Como sao poucos casos, podemos fazer caso a caso rotacionando os valores das triplas um a um. Logo, 
>     faço o caso para os campos Zero, One e Two separados dessa forma
>  -} 

que a partir de um valor do tipo `Times` e uma tripla
de valores de tipo `a`, retorna uma tripla na qual os
valores foram rotacionados um número de vezes especificado
pelo tipo `Times.` Os casos de teste a seguir apresentam
exemplos desta função.

> question02Tests :: TestTree
> question02Tests
>       = testGroup "Question 02 Tests"
>                   [
>                      testCase "Swapping Zero times:" $
>                           question02 Zero ("a","b","c") @?= ("a","b","c")
>                   ,  testCase "Swapping One time:" $
>                           question02 One ("a", "b", "c") @?= ("c", "a", "b")
>                   ,  testCase "Swapping Two times:" $
>                           question02 Two ("a", "b", "c") @?= ("b", "c", "a")
>                   ]


Questão 03. Considere o seguinte tipo de dados que representa
dados de clientes de uma loja:

> type Name  = String
> type Phone = String
> type Email = String

> data Client = Client Name Phone Email deriving (Eq, Show)


Dizemos que a informação de um cliente é válida se:

a) O nome do cliente possui pelo menos 3 caracteres e é
formado exclusivamente por letras e espaços.

b) A informação de telefone é composta apenas por dígitos

c) A string de email deve conter o caractere `@` e ter tamanho
maior que 3.

Com base nessas informações, desenvolva a função:

> question03 :: Client -> Bool
> question03 (Client n p e) = 
>    if name3min n || nameNum n || telDig p || email3min e || emailNum e
>        then False  
>    else True

> name3min :: String -> Bool
> name3min n = (length n) <= 3 

> nameNum :: String -> Bool
> nameNum [] = False 
> nameNum (x : xs)
>    |(ord x == 32) || ((ord x >= 65) && (ord x <= 90)) || ((ord x >= 97) && (ord x <= 122)) = nameNum xs
>    |otherwise = True
>        -- Espaço         Letras minusculas em ASCII           Letras maiusculas em ASCII
        
> telDig :: String -> Bool
> telDig [] = False 
> telDig (x : xs)
>    | (ord x >= 48) && (ord x <= 57) = telDig xs
>    | otherwise = True

> email3min :: String -> Bool
> email3min e = (length e) <= 3

> emailNum :: String -> Bool
> emailNum [] = True
> emailNum (x : xs)
>    | x == '@' = False
>    | otherwise = emailNum xs

> {-  EXPLICAÇÃO: Para essa questão, para cada caso de INVALIDADE, fiz uma funçao auxiliar especifica que recebe
>    uma das strings que quero testar do Cliente (nome, telefone, email) para retornar True or False. Dessa maneira, 
>    a primeira função testa se a string nome tem mais que 3 caracteres , a segunda testa se só há espaços e 
>    letra minusculas e maisculas na string nome, a terceira testa se há apenas digitos na string telefone, a quarta 
>    testa se a string email tem mais que 3 caracteres e a ultima testa se a string email possui o @ em no meio da string
>
>    Logo, junto tudo isso e faço comparações, onde se qualquer uma dessa funções retornar VERDADEIRO (ou seja, 
>    usando comparaçoes com OU), que dizer que um os dados do Cliente é INVÁLIDO. Portanto, a função questao03 
>    retorna False. Se todas essa funções auxiliares retornarem FALSO, quer dizer que a informação do Cliente
>    é VÁLIDA 
>
>    Observação: Para verificação dos caracteres das strings usamos a tabela ASCII, como por exemplo, os valores de 65 a 90
>    correspodem as letras minusculas, de 97 a 122 correspondem as letras maiusculas, 32 corresponde ao espaço e 48 a
>    57 corresponde ao numeros de 0 a 9
>    -}

que verifica se a informação de cliente é ou não válida de
acordo com as regras mencionadas anteriormente.

Sua implementação deve considerar os seguintes casos de teste.

> question03Tests :: TestTree
> question03Tests
>       = testGroup "Question 03 Tests"
>                   [
>                      testCase "Valid client" $
>                        question03 (Client "Marcos" "123456789" "marcos@bla.com") @?= True
>                   ,  testCase "Invalid name - size" $
>                        question03 (Client "Mr" "123456789" "marcos@bla.com") @?= False
>                   ,  testCase "Invalid name - not all letters" $
>                        question03 (Client "Mr22" "123456789" "marcos@bla.com") @?= False
>                   ,  testCase "Invalid phone" $
>                        question03 (Client "Marcos" "ab23" "marcos@bla.com") @?= False
>                   ,  testCase "Invalid email - size" $
>                        question03 (Client "Marcos" "123456789" "m@") @?= False
>                   ,  testCase "Invalid email - lacking @" $
>                        question03 (Client "Marcos" "123456789" "marcobla.com") @?= False
>                   ]

Questão 04. Um inconveniente da solução apresentada no exercício 03 é que a função não
apresenta uma explicação do motivo da validação falhar. Uma alternativa para isso é
criar um tipo de dados para representar as possíveis falhas de validação.

> data Error = NameLengthError       -- invalid size
>            | NameCharactersError   -- name with non-letters and space characters
>            | PhoneError            -- phone with non numeric chars.
>            | EmailSizeError        -- invalid size
>            | EmailCharError        -- lacking `@`
>            deriving (Eq, Show)


Usando a representação de erros de validação, podemos definir um tipo para representar
a validação:

> data Validation = Ok
>                 | Failure [Error] deriving (Eq, Show)

O construtor `Ok` representa que a validação executou com sucesso e o construtor `Failure`
representa uma falha de validação e armazena uma lista dos erros encontrados.

Com base no apresentado, implemente a função.

> question04 :: Client -> Validation
> question04 (Client n p e) = 
>           if not(name3min n) && not(nameNum n) && not(telDig p) && not(email3min e) && not(emailNum e)then Ok
>           else Failure(question04' (Client n p e) 0)
    
> question04' :: Client -> Int -> [Error]
> question04' (Client n p e) ac = 
>     if ((name3min n) && (ac == 0))
>         then [NameLengthError] ++ question04' (Client n p e) (ac + 1)
>     else if ((nameNum n) && (ac <= 1))
>         then [NameCharactersError] ++ question04' (Client n p e) (ac + 2)
>     else if ((telDig p) && (ac <= 3))
>         then [PhoneError] ++ question04' (Client n p e) (ac + 4)
>     else if ((email3min e) && (ac <= 7))
>        then [EmailSizeError] ++ question04' (Client n p e) (ac + 8)
>     else if (emailNum e)
>         then [EmailCharError]
>     else []

que realiza a validação de clientes, como apresentado na questão 03, e retorna um valor do
tipo `Validation`. Sua implementação deve atender os seguintes casos de teste.

> {-EXPLICAÇÃO: Apesar de ser uma maneira mais confusa, foi a unica que consegui encontrar testando varios casos com 
>              acumulador ate encontrar os valores certos no papel (indo caso por caso) para que a lista 
>              ficasse com os erros corretos, sem repeti-los e sem pula-los. 
>              
>              Portanto, a partir desse acumulador (que funcionou como um "contador"), fui testando diversas
>              condiçoes junto com as funções auxiliares criadas anteriormente na questao 3 e assim consegui evitar 
>              de ter itens repetidos ou pula-los e criar uma lista de Failure sem problemas 
>
>              OBSERVAÇÃO: Para o uso desse acumulador, foi necesarrio criar um funçao chamada 
>              de question04' e nela que eu criei o acumulador e o inicializei como 0
>
>              Assim, caso todas as funçoes da questao 3 sejam verdadeiras (visto que ela validam que é verdadeiro 
>              quando há erro), eu retorno a validação Ok, caso contrario, eu irei retornar quais 
>              os erros em uma lista     
> -}

> question04Tests :: TestTree
> question04Tests
>       = testGroup "Question 04 Tests"
>                   [
>                      testCase "Valid client" $
>                        question04 (Client "Marcos" "123456789" "marcos@bla.com") @?= Ok
>                   ,  testCase "Invalid name - size" $
>                        question04 (Client "Mr" "123456789" "marcos@bla.com") @?= Failure [NameLengthError]
>                   ,  testCase "Invalid name - not all letters" $
>                        question04 (Client "Mr22" "123456789" "marcos@bla.com") @?= Failure [NameCharactersError]
>                   ,  testCase "Invalid phone" $
>                        question04 (Client "Marcos" "ab23" "marcos@bla.com") @?= Failure [PhoneError]
>                   ,  testCase "Invalid email - size" $
>                        question04 (Client "Marcos" "123456789" "m@") @?= Failure [EmailSizeError]
>                   ,  testCase "Invalid email - lacking @" $
>                        question04 (Client "Marcos" "123456789" "marcobla.com") @?= Failure [EmailCharError]
>                   ,  testCase "Combining errors" $
>                        question04 (Client "Mr" "aa" "b@") @?= Failure [NameLengthError, PhoneError, EmailSizeError]
>                   ]


Questão 05. Considere o seguinte tipo de dados que representa a configuração de uma
aplicação em um sistema gerenciador de janelas:

> data App
>       = App { name :: String  -- application name
>             , width :: Int    -- window width
>             , height :: Int   -- window height
>             }
>         deriving (Eq, Show)


Aplicações são organizadas de acordo com um layout:

> data Layout = Vertical [Layout]
>             | Horizontal [Layout]
>             | Single App
>             deriving (Eq, Show)

Neste gerenciador de janelas simples, aplicações são organizadas de maneira vertical
(construtor `Vertical`), horizontal (construtor `Horizontal`) ou uma janela simples.

Seu objetivo é implementar a função:

> minimizeAll :: Layout -> Layout
> minimizeAll (Single (App nome _ _)) = (Single (App nome 1 1))
> minimizeAll (Vertical xs) = Vertical(map minimizeAll xs)
> minimizeAll (Horizontal xs) = Horizontal(map minimizeAll xs)

> {- Iremos usar a funçao superior map para irmos aplicando a função minimizeAll para todos os elementos pertencetes
>     ou a lista de Vertical OU a lista de Horizontal ate conseguirmos atingir o campo Single (a janela simples)
>     que é nosso caso base que minimizará a nossa tela e assim faremos um conjunto de lista de listas com uma ou mais ja-
>     nelas minimizadas com os valores de altura e comprimentos iguais a 1
> -}

que minimiza todas as janelas do estado do gerenciador de janelas. Uma janela é
minimizada fazendo com que sua altura (height) e comprimento (width) sejam iguais a 1.

Sua implementação deve atender os seguintes casos de teste.

> question05Tests :: TestTree
> question05Tests
>       = testGroup "Question 05 Tests"
>                   [
>                       testCase "Minimize Single" $
>                         minimizeAll (Single (App "test" 110 200)) @?= Single (App "test" 1 1)
>                   ,   testCase "Minimize Vertical" $
>                         minimizeAll (Vertical [ Single (App "test" 110 200)
>                                               , Horizontal [Single (App "foo" 300 100)]])
>                               @?= Vertical [ Single (App "test" 1 1)
>                                            , Horizontal [Single (App "foo" 1 1)]]
>                   ,   testCase "Minimize Horizontal" $
>                         minimizeAll (Horizontal [ Single (App "test" 110 200)
>                                                 ,   Vertical [Single (App "foo" 300 100)]])
>                               @?= Horizontal [ Single (App "test" 1 1)
>                                              , Vertical [Single (App "foo" 1 1)]]
>                   ]
