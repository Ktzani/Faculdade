# ifndef fib_h
# define fib_h

typedef struct{
  int i; 

  long long int result;

  long long int chamadasrecu;

} TADfib;

long long int fibonacci(int i, TADfib *f);

# endif
