# include<iostream>
# include<stack>
using namespace std;
int main()
{
    string x;
    int i,siz;
    stack<string>MFS;
    cout<<"Enter size:";
    cin>>siz;
     cout<<"Enter elements:\n";
    for(i=0;i<siz;i++)
    {
        cin>>x;
         MFS.push(x);
    }
    cout<<endl<<"Now the elements:\n";
    for(i=0;i<siz;i++)
    {
        cout<<endl<<MFS.top();
        MFS.pop();
    }
    return 0;
}
