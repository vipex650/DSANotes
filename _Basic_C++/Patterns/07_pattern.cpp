#include <bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n;j++){
            if(j>=i)
            cout << "*";
            else
            cout << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    pattern(n);
    return 0;
}