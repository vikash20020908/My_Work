#include <iostream>
using namespace std;
int main ()
{
	cout<<"enter the size of array"<<endl;
	
	int n;
	cin>>n;
	int row[n];
	{
	cout<<"enter the element "<<endl;
    } 
	for(int i=0;i<n;i++)
	cin>>row[i];
    {
	cout<<"enter the element to be search "<<endl;
    }
	int k;
	cin>>k;
	bool flag=0;
	for (int i=0;i<n;i++)
	{
		if (k==row[i])
		{
			cout<<"element to be found at location "<<i<<endl;
			flag=1;
		}
	}
	if (flag==0)
	{
		cout<<"element not found"<<endl;
    }
    int larg;
    for (int i=1;i<n;i++)
    {
        if (larg<row[i])
        larg=row[i];
    }
    cout<<"\nlargest number is "<<larg;
    cout<<endl;
    int small;
    small=row[0];
     for (int i=1;i<n;i++)
    {
	if (small>row[i])
	small=row[i];
    }
	{
		cout<<"\nsmallest number is "<<small;
		cout<<endl;
	}
	int sum=0;
	for( int i=0; i<n; i++)
      sum = sum+row[i];
   cout<<"\nSum of all array elements = "<<sum;
   cout<<endl;
   
    int mul=1;
 for(int i=0; i<n; i++)
      mul = mul*row[i];
   cout<<"\nMultiplication Result of all Elements = "<<mul;
   cout<<endl;
    return 0;
}
