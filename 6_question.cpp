#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int singleDigit[]={0,3,3,5,4,4,3,5,5,4};
    int doubleDigit[]={0,6,6,8,8,7,7,9,8,8};
    int tens[]={0,3,6,6,5,5,5,7,6,6,7};
    int singleDigitSum=0,doubleDigitSum=0;
    for(int i=1;i<=9;i++){
        singleDigitSum+=singleDigit[i];
    }
    for(int i=1;i<=9;i++){
        doubleDigitSum+=doubleDigit[i];
    }
    int sum=0,hundredSum=0;
    for(int i=3;i<=10;i++){
       sum=sum+(singleDigitSum*singleDigit[i-1])+tens[i];
    }
    hundredSum=sum+singleDigitSum+doubleDigitSum;
    int thousandSum=hundredSum;
    for(int i=1;i<=9;i++){
        thousandSum+=(singleDigit[i]*(hundredSum+3));
    }
    thousandSum-=13;//removing extra letters of nine hundred and hundred;
    cout<<thousandSum<<endl;
}