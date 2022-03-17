#include <iostream>
using namespace std ;

int main()
{
	cout<<"enter the size of array"<<endl;
	int n; 
	cin>>n;
	int A[n];
	cout<<"enter the element"<<endl;
	
	
	for (int i=0;i<n;i++)
		cin>>A[i];

	int ans=2;
	int pd= A[1]- A[0];
	int j=2;
	int curr=2;
	
	while(j<n)
	{
		if (pd==A[j]-A[j-1])
		{
			curr++;
		}
		else {
			pd=A[j]-A[j-1];
			curr=2;
		}
		ans=max(ans,curr);
		j++;
	}
	cout<<ans<<endl;
}




