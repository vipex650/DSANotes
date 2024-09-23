#include<bits/stdc++.h>
using namespace std;
int main(){
    int y=4;
    for(int i=4;i>=1;i--){
        char z=65;
        int x=1;
        for(int j=1;j<=y;j++){
            if(x<i)
            cout <<" ";
            else{
                if(j<=4){
                    cout <<z;
                    z++;
                }
                else{
                    if(j==5){
                    z=z-2;
                    cout <<z;
                    }
                    else{
                        z--;
                        cout <<z;
                    }
                }
                
            }
            x++;
        }
        y++;
        cout <<endl;
    }
}