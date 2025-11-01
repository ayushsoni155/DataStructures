// #include<iostream>
// using namespace std;
// // This program prints a Dimond pattern of numbers like below for a given n:
// // For n = 4
// //       *
// //     *   *
// //   *       *
// // *           *
// //   *       *
// //     *   *
// //       *
// // The pattern consists of n rows.
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     for(int i = 0; i < n; i++) {
//         for(int j = 1; j < n-i; j++) {
//             cout << "  "; 
//         }
//         for (int k=0; k<=i; k++)
//         {
//             if(k+1==1)cout<<"*";
//             else{
//                 for(int x=3;x<;x++)
//              cout<<" ";   
//             }
//         }
//         for (int l=i; l>=1; l--)
//         {
//             if(l==i)cout<<"*";
//         }
//         cout << endl;   
//      }
//     // for( int i = 0;i< n-1; i++)
//     // {
//     //     for (int j = 0;j<=i; j++)
//     //     {
//     //          cout << "  "; 
//     //     }
//     //     for( int k=0;k<n-i-1;k++)
//     //     {
//     //          cout<<k+1<<" ";
//     //     }
//     //     for (int l=n-i-2; l>=1; l--)
//     //     {
//     //        cout<<l<<" ";
//     //     }
//     //     cout << endl;   
//     // }
//     return 0;
// }