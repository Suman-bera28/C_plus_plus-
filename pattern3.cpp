#include<iostream>
using namespace std;
int main()
{
//   int row,col;
//   for(row=1;row<=5;row++)  
//   {
//     for(col=1;col<=5-row;col++)
//     {
//         cout<<" ";
//     }
//     for(col=1;col<=2*row-1;col++)
//     {
//         cout<<"*";
//     }
//     cout<<endl;
//   }
//     *
//    ***
//   *****
//  *******
// *********



// int row,col;
// for(row=1;row<=5;row++)
// {
//     for(col=1;col<=5-row;col++)
//     {
//         cout<<" ";
//     }
//     for(col=1;col<=row;col++)
//     {
//         cout<<col;
//     }
//     for(col=row-1;col>=1;col--)
//     {
//         cout<<col;
//     }
//     cout<<endl;
// }
//     1
//    121
//   12321
//  1234321
// 123454321




// int row,col,n;
// cout<<"enter the input";
// cin>>n;
// for(row=n;row>=1;row--)
// {
//     for(col=1;col<=n-row;col++)
//     {
//         cout<<"  ";
//     }
//     for(col=1;col<=2*row-1;col++)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
// }
// * * * * * * * * * * * 
//   * * * * * * * * *
//     * * * * * * *
//       * * * * *
//         * * *
//           *


// int row,col,n;
// cout<<"enter the input :";
// cin>>n;
// for(row=n;row>=1;row--)
// {
//     for(col=1;col<=row;col++)
//     cout<<"* ";


// for(col=1;col<=2*n-2*row;col++)
//     cout<<"  ";


//     for(col=1;col<=row;col++)
//     cout<<"* ";

//     cout<<endl;
// }


// for(row=1;row>=n;row++)
// {
//     for(col=1;col<=row;col++)
//     cout<<"* ";


// for(col=1;col<=2*n-2*row;col++)
//     cout<<"  ";


//     for(col=1;col<=row;col++)
//     cout<<"* ";

//     cout<<endl;
// }



int row,col;
int n;
cout<<"enter the input:";
cin>>n;

    for(row=1;row<=n;row++)
{
for(col=1;col<=row;col++)
cout<<"* ";

for(col=1;col<=2*n-2*row;col++)

for(col=1;col<=row;col++)
cout<<"* ";


cout<<endl;
}
}