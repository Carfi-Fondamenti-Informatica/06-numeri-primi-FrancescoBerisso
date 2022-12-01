#include "lib.h"
bool n_primo(int a, int i){
    if(a % i == 0){
        if(a == i){
            return true;
        }
        else{
            return false;
        }
    }
    n_primo(a, i + 1);
}
