#include <cassert>
#include <iostream>
#include <iomanip>
using namespace std;

void fib(int n){
    if(n<=0){
        return;
    }
    else{
        cout<<"\t";
        fib(n-1);
    }
}

void tree(int n, int count){
    if(n==0){
        return;
    }
    fib(count+1);
    cout<<"this was written by call number "<<count<<endl;
    tree(n-1, count+1);
    fib(count);
    cout<<"this was ALSO written by call number " <<count<<endl;
    
}

int main(){
    int num;
    cout<<"enter number:";
    cin>>num;
    tree(num,1);
    return 0;
}
