#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w", stdout);
    #endif

    int rows,columns;
    cin>>rows>>columns;

    // ****
    // ****
    // ****
    // ****
    // ****
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < columns; j++)
    //     {
    //         /* code */
    //         cout<<"*";
    //     }
        
    //     cout<<endl;
    //     /* code */
    // }

    // **********
    // *        *
    // *        *
    // *        *
    // **********
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < columns; j++)
    //     {
    //         /* code */
    //         if (i==0 || i==rows-1 || j==0 || j==columns-1)
    //         {
    //             /* code */
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
        
    //     cout<<endl;
    //     /* code */
    // }

    // *****
    // ****
    // ***
    // **
    // *
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < rows-i; j++)
    //     {
    //         /* code */
    //         cout<<"*";
    //     }
        
    //     cout<<endl;
    //     /* code */
    // }
    //     *
    //    **
    //   ***
    //  ****
    // *****
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < rows; j++)
    //     {
    //         /* code */
    //         if (j<rows-i-1)
    //         {
    //             cout<<" ";
    //         }
    //         else{
    //             cout<<"*";
    //         }
            
    //     }
        
    //     cout<<endl;
    //     /* code */
    // }

    //     1
    //    22
    //   333
    //  4444
    // 55555
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < rows; j++)
    //     {
    //         /* code */
    //         if (j<rows-i-1)
    //         {
    //             cout<<" ";
    //         }
    //         else{
    //             cout<<i+1;
    //         }
            
    //     }
        
    //     cout<<endl;
    //     /* code */
    // }

    // 1 
    // 2 3 
    // 4 5 6 
    // 7 8 9 10 
    // 11 12 13 14 15 
    // int count = 1;
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         /* code */
    //         cout<<count<<" ";
    //         count++;
            
    //     }
        
    //     cout<<endl;
    //     /* code */
    // }

    // *      *
    // **    **
    // ***  ***
    // ********
    // ********
    // ***  ***
    // **    **
    // *      *
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < 2*rows; j++)
    //     {
    //         /* code */
    //         if (j>i && j<2*rows-i-1)
    //         {
    //             /* code */
    //             cout<<" ";
    //         }
    //         else{
    //             cout<<"*";
    //         }
            
    //     }
        
    //     cout<<endl;
    //     /* code */
    // }
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < 2*rows; j++)
    //     {
    //         /* code */
    //         if (j< rows-i || j>rows+i-1 )
    //         {
    //             /* code */
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
            
    //     }
        
    //     cout<<endl;
    //     /* code */
    // }
    // --------------------------------------------
    // for (int i = 1; i < rows + 1; i++)
    // {
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     int space = 2*rows - 2*i;
    //     for(int j=1;j<=space;j++){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    //     /* code */
    // }
    // for (int i = rows; i >=1; i--)
    // {
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     int space = 2*rows - 2*i;
    //     for(int j=1;j<=space;j++){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    //     /* code */
    // }
    
    
    return 0;
}