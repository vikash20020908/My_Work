#include<stdio.h>
#include<conio.h>

int main()
{
	int n; 
	cin>>n;
	int A[n];
	
	for (int i=0;i<n;i++)
	{
		cin>>A[i]
	}
	int ans=2;
	int pd=A[i]-A[0];
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




