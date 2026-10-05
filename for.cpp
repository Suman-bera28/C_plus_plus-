#include<iostream>
using namespace std;
int main()
{
// int n,i;
// cout<<"enter a no:";
// cin>>n;
// for(i=1;i<=10;i=i+1)
// {
//     cout<<n<<"*"<<i<<"="<<n*i<<endl;
// }



//prime no:
int n,i;
cout<<"enter the number:";
cin>>n;

if(n<2)
{
    cout<<"not prime";
    return 0;
}
else
{
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"not prime";
            return 0;
        }
        
    }
    cout<<"prime number";
    return 0;
}




}