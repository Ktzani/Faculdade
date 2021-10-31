data App = App { name :: String, width :: Int , height :: Int }
deriving (Eq, Show)

data Layout = Vertical [Layout] | Horizontal [Layout] | Single App
deriving (Eq, Show)


minimizeAll :: Layout -> Layout
minimizeAll (Single (App n w h)) = (Single (App n 1 1))
minimizeAll Vertical xs = [x | x <- map minimizeAll xs]
minimizeAll Horizontal xs = [x | x <- map minimizeAll xs]
    
    
{- Por meio de list comphreension eu irei aplicar a mesma funçao minimeAll repetidas vezes na calda ate conseguirmos
   atingir o campo Single que seria como se fosse um caso base 
-}