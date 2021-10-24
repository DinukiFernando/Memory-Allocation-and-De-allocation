///*C++ statements to input a value for d_var (i.e., a value that d_var points to) from the 
//console and then display it*/
//
//#include<iostream>
//#include <stdlib.h>
//using namespace std;
//int main(){
//	
//	double *d_var;
//	double *d_array;
//	
//	
//	d_var=new double;
//	d_array=new double[10];
//	
//	cout<<"Enter the number: ";
//	cin>>*d_var;
//	cout<<"Value is "<<*d_var;
//	
//	return 0;
//}
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main()
{
	double *d_var,*d_array;

	d_var = new double;
	d_array=new double[10];
	cout<<"Input a value"<<endl;
	cin>>*d_var;
	cout<<*d_var;
	
}

