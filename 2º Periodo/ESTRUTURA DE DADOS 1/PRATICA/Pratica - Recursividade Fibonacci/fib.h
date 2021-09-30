# ifndef fib_h
# define fib_h

typedef struct{
  int i; 

  long long int result;

  int chamadasrecu;

} TADfib;

long long int fibonacci(TADfib *f);

# endif
