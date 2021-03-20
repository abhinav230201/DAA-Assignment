#include<bits/stdc++.h>
using namespace std;
int trailingZeroes(int n){ 
    int cnt = 0; 
    while (n > 0) { 
        n /= 5; 
        cnt += n; 
    } 
    return cnt; 
} 
int main(){
    int n;
    cin>>n;
    int lo=1,hi=5*n;
    int a=-1;
    while(hi>=lo){
        int mid=(hi+lo)/2;
        if(trailingZeroes(mid)>=n){
            a=mid;
            hi=mid-1;
        }
        else
            lo=mid+1;
    }
    if(trailingZeroes(a)==n){
        cout<<"The numbers whose factorial has "<<n<<" trailing zeroes are : ";
        for(int i=a;i<a+5;i++)
            cout<<i<<' ';
    }
    else{
        cout<<"No such number exists whose factorial has "<<n<<" trailing zeroes";
    }
}
