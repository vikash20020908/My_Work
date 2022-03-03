
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
	
	for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if (row[j]<row[i]){
                int tape=row[j];
                row[j]=row[i];
                row[i]=tape;
            }
        }
    }
    {cout<<"shorted array elements"<<endl;}
    
    for (int i=0;i<n;i++){
    cout<<row[i]<<"  ";
    }
    cout<<endl;
    
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
            cout<<"the element "<<k<<" found at location "<<mid+1;
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
