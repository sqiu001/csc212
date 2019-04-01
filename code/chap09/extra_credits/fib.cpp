#include <cassert>
#include <iostream>
using namespace std;
//used guide from stackoverflow and friend

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
    cout<<"this was ALSO written by call number " <<count<<endl;
}

int main(){
    int num;
    cout<<"enter number:";
    cin>>num;
    tree(num,0);
    return 0;
}
