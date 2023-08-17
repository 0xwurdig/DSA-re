#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w", stdout);
    #endif

    int rows,columns;
    cin>>rows>>columns;
// 1
// 01
// 101
// 0101
// 10101
//     for(int i=1;i<=rows;i++){
//         for(int j=0;j<i;j++){
//             if((j+i)%2!=0){
//                 cout<<"1";
//             }
//             else{
//                 cout<<"0";
//             }
//         }
//         cout<<endl;
//     }

//      * * * * * 
//     * * * * * 
//    * * * * * 
//   * * * * * 
//  * * * * * 
    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<rows-i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<rows;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
//      1 
//     1 2 
//    1 2 3 
//   1 2 3 4 
//  1 2 3 4 5 
    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<rows-i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<=i;j++){
    //         cout<<j+1<<" ";
    //     }
    //     cout<<endl;
    // }
//         1 
//       2 1 2 
//     3 2 1 2 3 
//   4 3 2 1 2 3 4 
// 5 4 3 2 1 2 3 4 5 
    // for(int i=1;i<=rows;i++){
    //     for(int j=1;j<=rows-i;j++){
    //         cout<<"  ";
    //     }
    //     for(int j=i;j>1;j--){
    //         cout<<j<<" ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

//    *
//   ***
//  *****
// *******
// *******
//  *****
//   ***
//    *
    
    // for(int i=1;i<=rows;i++){
    //     for(int j=1;j<=rows-i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=2*i-1;j++){
    //         cout<<"*";
    //     }
    //     // for(int j=1;j<i;j++){
    //     //     cout<<j<<" ";
    //     // }
    //     cout<<endl;
    // }
    // for(int i=rows;i>=1;i--){
    //     for(int j=1;j<=rows-i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=2*i-1;j++){
    //         cout<<"*";
    //     }
    //     // for(int j=1;j<i;j++){
    //     //     cout<<j<<" ";
    //     // }
    //     cout<<endl;
    // }
//   *   *   *   *   * 
//  * * * * * * * * * *
// *   *   *   *   * 
    // for(int i=1;i<=3;i++){
    //     for(int j=1;j<=rows;j++){
    //         if ((j+i)%4==0 || (j%4==0 && i==2))
    //         {
    //             cout<<"*";
    //             /* code */
    //         }else{
    //             cout<<" ";
    //         }
            
    //     }
    //     // for(int j=1;j<i;j++){
    //     //     cout<<j<<" ";
    //     // }
    //     cout<<endl;
    // }


    return 0;
}