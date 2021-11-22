module Exercicio where

import System.Environment (getArgs)

contaLinhas :: String -> IO Int
contaLinhas file = do
  contents <- readFile file
  return (length $ lines contents)

contaPalavras :: String -> IO Int
contaPalavras file = do
    contents <- readFile file
    return (length $ words contents)
  
main :: IO ()
main = do
  args <- getArgs
  case length args of
    0 -> putStrLn "Nenhum arquivo detectado"
    _ -> let file = head args in do
            linhas <- contaLinhas file
            palavras <- contaPalavras file
            putStr $ "O numero de linhas do arquivo eh: " ++ show linhas ++ " e o numero de palavras eh: " ++ show palavras

--stack exec exercicio-exe -- ./app\input.txt