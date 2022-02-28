# include <iostream>
using namespace std;
int main ()
{
	cout<<"enter the size of array"<<endl;
	
	int n;
	int first;
	int last;
	int mid;
	int k;
	cin>>n;
	int row[n];
	cout<<"enter the element"<<endl;
	for (int i=0;i<n;i++)
	cin>>row[i];
	cout<<"enter the element to be search"<<endl;
    
    cin>>k;
    for (int i=0;i<n;i++)
    first=0;
    last=n;
    mid=(first+last)/2;
     while (first<=last)
    {
        if (row[mid]<k)
        first=mid+1;
        else if (row[mid]==k)
        {
            cout<<"the element "<<k<<" found at location "<<mid;
            break;
        }
    else
    last=mid-1;
    mid=(first+last)/2;
    }
    if  (first>last)
    cout<<endl<<"the element "<<k<<" not found in array"<<endl;
    
    

    return 0;
    
	
	
	
}
