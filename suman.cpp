#include<iostream>
using namespace std;

int main()
{

    int a; 
    int b;
    int sum ;
    int div;
    int sub;
    int mul;
    int temp;
    
    cout<<"enter 1st no:";
  cin>>a;
    cout<<"enter 2nd no:";
  cin>>b;

  sum=a+b;
  cout<<"sum :"<<sum<<endl;
  

    sub=a-b;
    cout<<"sub :"<<sub<<endl;
   
    mul=a*b;
    cout<<"mul :"<<mul<<endl;

    div=a/b;
    cout<<"div :"<<div<<endl;

    temp=a;a=b;b=temp;
    cout<<"after swapping:\n";
    cout<<"a="<<a<<endl<<"b="<<b<<endl;

return 0;

}