#include<iostream>
using namespace std;
int main()
{
    // int n, row,col;
    // cout<<"input the number";
    // cin>>n;
    // for(row=1;row<=n;row++)
    // {
    //     for(col=1;col<=n-row;col++)
    //     {
    //         cout<<"  ";
        // }
    //     for(col=1;col<=row;col++)
    //     {
    //         cout<<"*  ";
    //     }
    //     cout<<endl;
    // }





    // int row,col;
    // int n;
    // cout<<"input a no: ";
    // cin>>n;
    // for(row=1;row<=n;row++)
    // {
    //     for(col=1;col<=n-row;col++)
    //     {
    //         cout<<"  ";
    //     }
    //     for(col=1;col<=row;col++)
    //     {
    //         cout<<row<<" ";
    //     }
    //      cout<<endl;
    // }
   


    

//     int row,col;
//     for(row=1;row<=5;row++)
//     {
//         for(col=1;col<=5-row;col++)
//         {
//             cout<<" ";
//         }
//         for(col=1;col<=row;col++)
//         {
//             cout<<col;
//         }
//             cout<<endl;

//     }
    



//     1
//    12
//   123
//  1234
// 12345





// int row,col;
// for(row=1;row<=5;row++)
// {
//   for(  col=1;col<=5-row;col++)
//   {
//     cout<<" ";
//   }
//   for(char name='A';name<='A'+row-1;name++)
//   {
//     cout<<name<<"";
//   }
//   cout<<endl;
// }

//     A
//    AB
//   ABC
//  ABCD
// ABCDE

  



int row,col;
for(row=1;row<=5;row++)
{
    for(col=1;col<=5-row;col++)
    {
        cout<<" ";
    }
    for(col=row;col>=1;col--)
    {
        cout<<col;
    }
    cout<<endl;
}

//     1
//    21
//   321
//  4321
// 54321



}
