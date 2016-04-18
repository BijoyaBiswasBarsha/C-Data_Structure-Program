# include<iostream>
# include<queue>
using namespace std;
int main()
{
    string x;
    int i,siz;
    queue<string>MFQ;
    cout<<"Enter size:";
    cin>>siz;
     cout<<"Enter elements:\n";
    for(i=0;i<siz;i++)
    {
        cin>>x;
         MFQ.push(x);
    }
    cout<<endl<<"Now the elements:\n";
    for(i=0;i<siz;i++)
    {
        cout<<endl<<MFQ.front();
        MFQ.pop();
    }
    return 0;
}

