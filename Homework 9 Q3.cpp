/*C++ statements to initialize the 10 double values in the dynamically allocated array to 
1.0. Now write C++ statements to de-allocate the memory (i.e. using the delete operator) 
pointed by d_var and d_array*/


#include <stdlib.h>
#include<iostream>
using namespace std;

int main(){
	double *d_var,*d_array;

	d_var = new double;
	d_array=new double[10];
//	cout<<"Input a value"<<endl;
//	cin>>*d_var;
//	cout<<*d_var<<endl;

	for(int i=0;i<10;i++){
		d_array[i]=1.0;
		cout<<*d_array<<" ";
	}
	
	delete d_var;
	delete[] d_array;
	d_var=NULL;
	d_array=NULL;
	
	return 0;
}

