#include<iostream>
using namespace std;

int main(){

    int n=897;
    int x;
    int rev=0;
    while(n>0)
    {
        x=n%10;
        rev=rev*10+x;
        n/=10;
    }
    cout<<rev;
    return 0;
}