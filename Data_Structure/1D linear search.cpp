# include<iostream>
using namespace std;
int main ()
{
    cout<<"Enter size of array"<<endl;
    int siz;
    cin>>siz;
    int arr[siz],key,i,j;
    cout<<"\nEnter elements\n";
    for(j=0;j<siz;j++)
    {
    cin>>arr[j];
    }
    cout<<"\nThe elements\n";
for(int j=0;j<siz;j++)
{
    cout<<arr[j]<<endl;
}
cout<<"\nEnter key to search array";
cin>>key;
for(j=0;j<siz;j++)
{
    if(key==arr[j])
    {
        j!=siz;
        break;
    }
}

if(j!=siz)
{
  cout<<"\nkey found at index :"<<j+1<<endl;
}
else{
     cout<<"\nkey not found in array :"<<endl;
}

return 0;
}
