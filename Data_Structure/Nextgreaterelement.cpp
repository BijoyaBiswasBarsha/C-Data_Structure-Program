# include<iostream>
# include<stack>
using namespace std;
int main()
{
    int i,x,k,j;
    int z[10];
    stack<int>MFQ;
    cout<<"Size of array:";
    cin>>x;
    cout<<"Enter the elements:\n";
    for(i=0; i<x; i++)
    {
        cin>>z[i];
        MFQ.push(z[i]);
    }
    cout<<"Now the next greater element for input is:\n";
    for(i=0; i<x; i++)
    {
       for(j=i+1; j<x; j++)
       {
        if(z[i]<z[j])
        {
            MFQ.push(z[j]);
            cout<<"For "<<z[i]<<" next greater is "<<z[j]<<"\n";
            break;
        }
    }
}
cout<<"For "<<z[x-1]<<"next greater is "<<-1<<endl;
return 0;
}
