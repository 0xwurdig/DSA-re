#include<iostream>
#include<bits/stdc++.h>

using namespace std;


void maxTillI(int arr[], int n){
    int max_int = INT_MIN;
    for(int i=0;i<n;i++){
        max_int = max(max_int,arr[i]);
        cout<<max_int<<endl;
    }
    // return 0;
}

void sumOfAllSubArrays(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
        for (int j = i+1; j < n; j++)
        {
            /* code */
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                /* code */
                sum += arr[k];
            }
            cout<<sum<<endl;
        }
        /* code */
    }
}


void arithmeticArrays(int arr[], int n){
    int current = 0;
    int max_len = 0;
    for (int i = current; i < n; i++)
    {
        int diff = arr[i+1]-arr[i];
        int j = i+1;
        while (j<n && arr[j]-arr[j-1]==diff)
        {
            /* code */  
            j++;
        }
        max_len = max(max_len,j-i);
        /* code */
    }
    cout<<max_len<<endl;             
}

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    // maxTillI(arr,n);
    arithmeticArrays(arr,n);
    // int key;
    // cin>>key;
    
    return 0;
}