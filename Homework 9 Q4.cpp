/*a program in C to find the largest element using Dynamic Memory Allocation*/

#include<iostream>
#include <stdlib.h>
using namespace std;
int main(){
	
	int *arrayPtr;
	int *num=new int;
	
	cout<<"Input total number of elements(1 to 100): ";
	cin>>*num;
	    
	arrayPtr=new int[*num];
	
	for(int i=0;i<*num;i++){
			cout<<"Number "<<i+1<<" :";
			cin>>*(arrayPtr+i);
		}
	for(int i=1;i<=*num;i++){
			if(*(arrayPtr)<*(arrayPtr+i)){
				*arrayPtr=*(arrayPtr+i);
			}
		}
		
    cout<<endl<<"Expected Output : "<<endl<<endl;
    cout<<"The Largest element is "<<*(arrayPtr);

	return 0;
}
