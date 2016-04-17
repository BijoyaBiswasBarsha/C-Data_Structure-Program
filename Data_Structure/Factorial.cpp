# include <iostream>
using namespace std;
int factorial(int n)
{
   if(n!=1)
  return n*factorial(n-1);
}
int main ()
{
    int n;
    cout<<"Enter a non-negative number to calculate factorial:";
    cin>>n;
    cout<<"\nFactorial of "<<n<<" is="<<factorial(n)<<"\n";
    return 0;
}
