# include <iostream>
using namespace std;
int main ()
{
    int a[10][10];
    int b[10][10];
    int x,y,i,j;
    cout<<"\n Enter the number of Row & coloum of matrx:";
    cin>>x>>y;
    cout<<" Enter the elements of matrix A:\n";
    for(i=0;i<x;i++)
    {
       for(j=0;j<y;j++)
       {   cout<<"\t\t";
           cin>>a[i][j];
       }
       cout<<"\n";
    }
    cout<<"\n Matrix A:\n";

    for(i=0;i<x;i++)
    {
       for(j=0;j<y;j++)
       {
           cout<<"\t"<<a[i][j];
       }
       cout<<"\n\n";
    }
    for(i=0;i<y;i++)
    {
       for(j=0;j<x;j++)
       {
           b[i][j]=a[j][i];
       }

    }
    cout<<"\n Transpose of matrix A:\n";
    for(i=0;i<y;i++)
    {
       for(j=0;j<x;j++)
       {
           cout<<"\t"<<b[i][j];
       }
       cout<<"\n\n";
    }
    return 0;

}
