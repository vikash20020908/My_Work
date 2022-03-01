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
	 
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (A[j]<A[i]){
				int temp=A[j];
				A[j]=A[i];
				A[i]=temp;
				
			}
		}
	} 
	for (int i=0;i<n;i++)
	cout<<A[i]<<" ";
}
