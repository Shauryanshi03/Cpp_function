#include<iostream>
using namespace std;
 int fib(int n){

    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    int a=0;
    int b=1;
    int next;

    for(int i=2;i<=n;i++){
        next=a+b;

        a=b;
        b=next;

    }
         return b;
        
    }
        

 int main(){
      
    int n;
    cout<<"enter the number of terms"<<endl;
    cin>>n;

    int ans=fib(n-1);
    cout<<"the"<<" " <<n<<
    "the"<<" "<< "term is:"<<ans<<endl;
 }