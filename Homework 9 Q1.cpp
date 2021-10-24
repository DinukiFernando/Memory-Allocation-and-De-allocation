/*Declare two (type double) pointer variables named d_var and d_array. Write C++ 
statements to dynamically create a double-precision floating-point variable and store its 
address in d_var. Also dynamically create an array of 10 double-precision floating-point 
values and store its address in d_array*/


#include<iostream>
#include <stdlib.h>
using namespace std;
int main(){
	
	double *d_var;
	double *d_array;
	
	*d_var=NULL;
	*d_array=NULL;
	
	d_var=new double;
	d_array=new double[10];
	
	return 0;
}
