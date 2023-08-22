#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int sumOfFirstNNaturalNumbers(int n){
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        /* code */
        sum +=i;
    }
    return sum;
}   

int checkPythogoreanTriplet(int a, int b, int c){
    int x,y,z;
    x = max(a,max(b,c));
    if (x == a)
    {
        y = b;
        z = c;
        /* code */
    }
    else if (x == b)
    {
        y = a;
        z = c;
        /* code */
    }
    else{
        y = a;
        z = b;
    }
    if (pow(y,2) + pow(z,2) == pow(x,2))
    {
        /* code */
        return true;
    }
    
    return false;
}

int bin2dec(int a){
    int res = 0;
    int count = 0;
    while(a>0){
        res = res + (a%10)*pow(2,count);
        count++;
        a = a/10;
    }
    return res;
}
int dec2bin(int a){
    int res = 0;
    int x = 1;
    while(x*2<=a){
        x *=2;
    }
    while(a>0){
        res = 10*res + a/x;
        a -= x*(a/x);
        x /=2;
    }
    return res;
}
int oct2dec(int a){
    int res = 0;
    int count = 0;
    while(a>0){
        res = res + (a%10)*pow(8,count);
        count++;
        a = a/10;
    }
    return res;
}
int hex2dec(string a){
    int res = 0;
    int count = 0;
    for (int i = a.size()-1; i >= 0; i--)
    {
        /* code */
        if(a[i]>='0' && a[i]<='9'){
            res += (a[i]-'0')*pow(16,count);
        }
        if(a[i]>='A' && a[i]<='F'){
            res += (a[i]-'A' + 10)*pow(16,count);
        }

        count++;

    }
    return res;
}

int dec2oct(int a){
    int x = 1;
    while(x*8<=a){
        /* code */
        x*=8;
    }
    int res = 0;
    while(x>0){
        res = res*10 + a/x;
        a -= x*(a/x);
        x /=8;
    }
    return res;
}
int dec2hex(int a){
    int x = 1;
    while(x*16<=a){
        /* code */
        x*=16;
    }
    int res = 0;
    while(x>0){
        res = res*10 + a/x;
        a -= x*(a/x);
        x /=16;
    }
    return res;
}

int addBinary(int a, int b){
    int res = 0;
    int carry = 0;
    while(a>0 && b>0){
        if(a%2==0 && b%2==0){
            res = res*10 + carry;
            carry = 0;
        }
        else if((a%2==0 && b%2==1) || (a%2==1 && b%2==0)){
            if(carry==1){
                res = res*10 + 0;
                carry = 1;
            }
            else{
                res = res*10 + 1;
                carry = 0;
            }
        }
        else{
            res = res*10 + carry;
            carry = 1;
        }
        a /= 10;
        b /= 10;
    }
    while(a>0){
        if(carry==1){
            if(a%2==1){
                res = res*10 + 0;
                carry = 1;
            }
            else{
                res = res*10 + 1;
                carry = 0;
            }
        }
        else{
            res = res*10 + (a%2);
        }
        a /= 10;
    }
    while(b>0){
        if(carry==1){
            if(b%2==1){
                res = res*10 + 0;
                carry = 1;
            }
            else{
                res = res*10 + 1;
                carry = 0;
            }
        }
        else{
            res = res*10 + (b%2);
        }
        b /= 10;
    }
    if(carry==1){
        res = res*10 + 1;
    }
    return res;
}



int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt","w", stdout);
    // #endif

    // int n;
    // cin>>n;
    // cout<<sumOfFirstNNaturalNumbers(n);

    // int a,b,c;
    // cout<<checkPythogoreanTriplet(a,b,c);

    // int a;
    // cin>>a;
    // cout<<bin2dec(a);


    // int a;
    // cin>>a;
    // cout<<oct2dec(a);

    // string a;
    // cin>>a;
    // cout<<hex2dec(a);
    int a,b;
    cin>>a>>b;
    cout<<addBinary(a,b);

    // return 0;
}