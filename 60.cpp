#include<iostream>
using namespace std;
int ap(int n){

    int ap=(3*n+7);

    return ap;
}

int main(){

    int n;
    cout<<"enter a no:"<<" ";
    cin>>n;
 
    int ans=ap(n);
    cout<<"answer is:"<<" "<<ans<<endl;
}