#include<iostream>
using namespace std;

//prime numbers between two numbers

// bool prime(int a){
//     for (int i = 2; i < sqrt(a); i++)
//     {
//         if (a%i==0){
//             return false;
//         }else{
//             return true;
//         }
//         /* code */
//     }
    
// }

// int main(){
//     #ifndef ONLINE_JUDGE
//         freopen("input.txt", "r", stdin);
//         freopen("output.txt","w", stdout);
//     #endif
//     int a,b;
//     cin>>a>>b;
//     if(a>b){
//         int temp;
//         temp = b;
//         b = a;
//         a = temp;
//     }
//     for (int i = a+1; i < b; i++)
//     {
//         if (prime(i))
//         {
//             /* code */
//             cout<<i<<endl;
//         }
        
//         /* code */
//     }
    

//     return 0;
// }

int factorial(int a){
    if (a>1)
    {
        /* code */
        return a * factorial(a-1);
    }
    else{
        return 1;
    }
}

int nCr(int n,int r){
    return factorial(n)/(factorial(n-r)*factorial(r));
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    //n! factorial
    // int n;
    // cin>>n;
    // cout<<factorial(n);

    //nCr
    // int n,r;
    // cin>>n>>r;
    // cout<<nCr(n,r);

    //fibonacci sequence
    // int a=0,b=1,c,n;
    // cin>>n;

    // cout<<a<<","<<b;
    // for(int i=0;i<n-2;i++){
    //     c = a+b;
    //     cout<<","<<c;
    //     a = b;
    //     b = c;
    // }

    //pascal triangle
    // int n;
    // cin>>n;
    // for (int i = 0; i < n; i++)        
    // {
    //     /* code */
    //     for (int j = 0; j <= i; j++)
    //     {
    //         /* code */
    //         cout<<nCr(i,j)<<" ";
    //     }
    //     cout<<endl;
    // }
    
    
    return 0;
}