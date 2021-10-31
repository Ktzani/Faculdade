data Times = Zero | One | Two

question02 :: Times -> (a, a, a) -> (a, a, a)
question02 Zero (x, y, z) = (x, y, z)
question02 One (x, y, z)  = (z, x, y)
question02 Two (x, y, z)  = (y, z, x)

-- Como sao poucos casos, podemos fazer caso a caso rotacionando os valores das triplas um a um. Logo, 
-- faço o caso para os campos Zero, One e Two separados e de forma 