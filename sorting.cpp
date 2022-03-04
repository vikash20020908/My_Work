#include <iostream>
using namespace std;
int main ()
{
	cout<<"enter the size of array"<<endl;
	
	int n;
	cin>>n;
	int A[n];
	
	cout<<"enter the element "<<endl;
	
	for (int i=0;i<n;i++)
	cin>>A[i];
	 
	 cout<<"sorted array"<<endl;
	
	int counter=1;
	while (counter<n){
		for (int i=0;i<n-counter;i++){
			if  (A[i]>A[i+1]){
				int temp=A[i];
				A[i]=A[i+1];
				A[i+1]=temp;
			}
		}
		counter++;
	}
	for (int i=0;i<n;i++)
	cout<<A[i]<<" ";
}



