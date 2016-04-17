#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int i,x,k,j;
    string z;
    queue<string>MFQ;
    cout<<"Number:";
    cin>>x;
    cout<<"Enter the elements:\n";
    for(i=0; i<x; i++)
    {
        cin>>z;
        MFQ.push(z);
    }
    cout<<"Enter the value:";
    cin>>k;
    cout<<"Alive Value:\n";
    while(MFQ.size()!=1)
    {
        for(i=0; i<k-1; i++)
        {
            MFQ.push(MFQ.front());
            MFQ.pop();
        }
        MFQ.pop();
    }

    cout<<MFQ.front();
    return 0;

}


