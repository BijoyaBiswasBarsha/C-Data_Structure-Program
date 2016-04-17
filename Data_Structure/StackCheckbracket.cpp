# include<iostream>
# include <stack>
using namespace std;
int main ()
{
    stack<char>MFS;
    int i;
    string s;
    cout<<"Enter String:";
    getline(cin,s);
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
        {
            MFS.push(s[i]);
        }
        else if(MFS.size()==0)
        {
            cout<<"Invalid Input";
            break;
        }
        else
            MFS.pop();
    }
    if(i==s.size())
    {
        if(MFS.size()>0)
        {
            cout<<"Invalid";
        }
        else
            cout<<"Valid";
    }
    return 0;
}
