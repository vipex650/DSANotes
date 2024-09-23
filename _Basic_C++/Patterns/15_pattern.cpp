#include <bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    for(int i=1;i<=n;i++){
        for(int a=n-1;a>=i;a--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<< "* ";
        }
        cout<<endl;
        }

        
    for(int i=n;i>=1;i--){
        for(int a=n-1;a>=i;a--){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<< "* ";
        }
        cout<<endl;
        }
}
int main(){
    int n;
    cin >> n;
    pattern(n);
    return 0;
}