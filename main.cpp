#include <iostream>
#include "lib.h"
using namespace std;
int main(){
  int a = 0, i = 2;
  cin >> a;
  if(funzione(a, i) == 1){
      cout << "numero primo";
  }
  else{
      cout << "numero non primo";
  }
  return 0;
}
