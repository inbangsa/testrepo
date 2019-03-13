#include "Calc.hpp"


Calc::Calc(){}
int Calc::addNumbers(int a, int b){
return a+b;
}
int Calc::subNumbers(int a,int b){
return a-b;
}
int Calc::mulNumbers(int a,int b){
return a*b;
}
int Calc::divNumbers(int a,int b){
return a/b;
}

int main(){
Calc calc;
cout << calc.addNumbers(2, 4) << endl;
return 0;
}

