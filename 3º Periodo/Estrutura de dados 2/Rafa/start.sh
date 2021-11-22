gcc arvoreb.c -c -Wall
gcc contimpri.c -c -Wall
gcc arvore_binaria.c -c -Wall
gcc principal.c -c -Wall
gcc principal.o arvoreb.o contimpri.o arvore_binaria.o -o play

./play 2 100 1 10
./play 2 100 1 55
./play 2 100 1 12
./play 2 100 1 88
./play 2 100 1 75
./play 2 100 1 35
./play 2 100 1 8
./play 2 100 1 2
./play 2 100 1 1
./play 2 100 1 100
