#include<bits/stdc++.h>
using namespace std;
void pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%2==0){
                if(j%2!=0)
                cout <<"0";
                else
                cout <<"1";
            }
            else{
                if(j%2==0)
                cout <<"0";
                else
                cout <<"1";
            }
        }
        cout <<endl;
    }
}
int main(){
    int n;
    cin >>n;
    pattern(n);
    return 0;
}