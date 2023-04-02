#include <stdio.h>


int main(){
    int x, q, n;

    q = 2;
    
    for (x = 0; x < 100; x++){
        n = x * q;
        printf("n = %d\n", n);
    }
    return (0);
}
