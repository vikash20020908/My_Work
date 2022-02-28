#include<iostream>
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
	
	cout<<"all array element reprint"<<endl;
	
	for (int i=0;i<n;i++)
	cout<<A[i]<<" ";
}

