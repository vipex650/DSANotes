#include <bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    int x=(2*n-1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=x;j++){
            if(j>=i)
            cout << "*";
            else
            cout << " ";
        }
        x--;
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    pattern(n);
    return 0;
}