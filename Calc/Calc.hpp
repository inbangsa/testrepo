#ifndef CALC_HPP_
#define CALC_HPP_

#include <iostream>

using namespace std;
class Calc{
	    public:
               Calc();
	       template <typename T>
               T addition(T, T);
	       template <typename T>
               T substract(T, T);
	       template <typename T>
               T multiply(T, T);
	       template <typename T>
               T divide(T, T);

};

#endif
