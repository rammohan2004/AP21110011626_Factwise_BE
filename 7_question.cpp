#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maxValue(vector<int>v,int k,int count,int front,int back,int sum){
    if(count==k){
        return sum;
    }
    if(v[front]==v[back]){
        return max(maxValue(v,k,count+1,front+1,back,sum+v[front]),maxValue(v,k,count+1,front,back-1,sum+v[back]));
    }
    else if(v[front]>v[back]){
        return maxValue(v,k,count+1,front+1,back,sum+v[front]);
    }
    else{
        return maxValue(v,k,count+1,front,back-1,sum+v[back]);
    }
}
int main(){
    int n,k;
    cout<<"Enter cardPoints array size: ";
    cin>>n;
    cout<<"Enter cardPoints array: "<<endl;
    vector<int>v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"Enter k value: ";
    cin>>k;
    int ans=maxValue(v,k,0,0,n-1,0);
    cout<<ans<<endl;

}