#include<iostream>
using namespace std;
int main()

{

    int num;
    cout<<"enter the num: ";
    cin>>num;
    int mul=1,ans=0,rem;

    while(num>0)
    {

       rem=num%10;
        num=num/10;
        ans=mul*rem+ans;
        mul=mul*2;
    }

    cout<<ans<<endl;
}