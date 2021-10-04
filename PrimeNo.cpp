#include<iostream>
using namespace std;
int prime_no(int );
int prime_no(int a)
{
    int N=a;
    if(N<=1)
        {
            cout<<N<<" is not prime no";
            exit(0);
        }
    for(int i=2;i<N;i++)
    {
      
        
        if(N%i==0)
        {
            cout<<N<<" is not prime no";
            exit(0);
        }
    }
return a;
}
int main()
{
    int c;
    cout<<"Enter a no";
    cin>>c;
    cout<<prime_no(c)<<" is prime no";
    return 0;
}