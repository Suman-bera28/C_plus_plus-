#include<iostream>
using namespace std;

int sum(int m,int n)
{
    int ans=m+n;
    return ans;
}
int mul(int m,int n)
{
    int ans=m*n;
    return ans;
}
void fun()
{
    cout<<"hello sunny";
}


int main()
{
    int a,b;
    cout<<"enter two no:";
    cin>>a>>b;
    cout<<sum(a,b);
cout<<endl;
    cout<<mul(a,b);
 cout<<endl;
fun();

}