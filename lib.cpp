#include "lib.h"
int n_primo(int a, int i){
    if(a % i == 0){
        if(a == i){
            return 1;
        }
        else{
            return 0;
        }
    }
    else{
        n_primo(a, i + 1);
    }
}
