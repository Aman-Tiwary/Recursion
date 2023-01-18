#include<bits/stdc++.h>
using namespace std;



void print(int count){
    if(count==3){
        return;
    }
    cout<< count<<endl;
    count++;
    print(count);
}

int main()
{
    #ifndef ONLINE_JUDGEs
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    print(0);
    return 0;
}