#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;
    vector<int>v1(5,1);
    v.push_back(2);
    v.push_back(9); 
    v.push_back(8);
        v.push_back(5);
                v.push_back(3);

    cout<<"size of v: "<<v.size()<<endl;
    cout<<"capacity of v :"<<v.capacity()<<endl;
      cout<<"size of v1: "<<v1.size()<<endl;
    cout<<"capacity of v1 :"<<v1.capacity()<<endl;
}