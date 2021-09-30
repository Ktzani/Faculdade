#include "fib.h"
#include<stdio.h>
#include<stdlib.h>

long long int fibonacci(TADfib *f){

    if(f.i == 0){
        return 0;
        f.chamadasrecu ++
    }

    else if (f.i == 1){
        f.chamadasrecu ++
        return 1;
    }

    else {
        
        f.chamadasrecu = f.chamadasrecu + 2;
        return fibonacci(f.i - 1) + fibonacci(f.i - 2);

    }

}
