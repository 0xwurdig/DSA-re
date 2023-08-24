#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int firstRepeatingElement(int arr[], int n){
    int _arr[1000000] = {0};
    for (int i = 0; i < n; i++)
    {
        /* code */
        _arr[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(_arr[arr[i]]>1) return arr[i];
    }
    return -1;
}

void sumOfContinuousSubArray(int arr[], int n, int sum){
    int init = 0;
    int i = -1;
    while (sum!=0)
    {
        if(sum<0){
            while (sum<0)
            {
                sum += arr[init];
                init+=1;
                cout<<init<<endl;
            }
        }
        else{
            i++; 
            sum -= arr[i];
        }
        // cout<<sum<<endl;
    }
    cout<<init<<i;
    
}


void smallestPositiveInteger(int arr[],int n){
    int _arr[1000000] = {0};
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(arr[i]>=0){
            _arr[arr[i]]++;
        }
    }
    for (int i = 0; i < 1000000; i++)
    {
        /* code */
        if(_arr[i]==0) {
            cout<<i<<endl;
            break;
        }
    }
}

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif

    int n, sum;
    cin>>n>>sum;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    smallestPositiveInteger(arr,n);
    // int key;
    // cin>>key;
    
    return 0;
}