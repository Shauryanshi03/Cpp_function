#include<iostream>
using namespace std;

int countsetbits(int n){
    int count=0;
    while(n!=0){
        if(n&1==1)
        count++;
        n=n>>1;
    }
    return count;
}

int setbit(int a,int b){
    return countsetbits(a)+countsetbits(b);

}

int main(){

    int a,b;
    cout<<"enter two numbers :"<<" ";
    cin>>a>>b;

    int ans=setbit(a,b);
    cout<<"the no of setbits are : "<<ans;
}