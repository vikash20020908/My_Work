#include <iostream>
using namespace std;
int main ()
{
	
	cout<<"enter the sixe of array"<<endl;
	
	int n;
	cin>>n;
	int A[n];
	
	cout<<"enter the element of array"<<endl;
	
	for (int i=0;i<n;i++)
	{ 
	cin>>A[i];
	}
	int curr=0;
	for (int i=0;i<n;i++)
	{
		curr=0;
		for (int j=i;j<n;j++)
		{
			curr+=A[j];
			cout<<curr<<endl;
		}
	}
}
