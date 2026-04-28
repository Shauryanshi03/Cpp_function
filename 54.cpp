#include<iostream>
using namespace std;

bool iseven(){
    int a;
    cin>>a;
    
    if(a%2==0){
        return 1;
    }

    else{
        return 0;
    }
    }

    int main() {
        
       if(iseven()){
       cout<<"no is even"<<endl;
       }
      else{
       cout<<"no is odd"<<endl;
    }
    }