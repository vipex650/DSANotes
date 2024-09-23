#include <bits/stdc++.h>
using namespace std;
void pattern(int n)
{
      int x=0;
    for(int i=n;i>=1;i--){
    
        for(int j=1;j<=(n+x);j++){
            if(j>=i)
            cout << "*";
            else
            cout << " ";
        }
        x++;
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    pattern(n);
    return 0;
}