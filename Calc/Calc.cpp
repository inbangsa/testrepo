#include "Calc.hpp"


Calc::Calc(){
cout << "Constructor is called " << endl ;
}
 template <typename T>
T Calc::addition(T a,T b){
return a+b;
}
 template <typename T>
T Calc::substract(T a,T b){
return a-b;
}
 template <typename T>
T Calc::multiply(T a,T b){
return a*b;
}
 template <typename T>
T Calc::divide(T a,T b){
return a/b;
}

int main(){
Calc calc;
cout << calc.addition<int>(2, 4) << endl;
getchar();
return 0;
}

