#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,4,4,3};
    for(int i=1;i<5;i++){
        if(arr[i]>=arr[i-1]){

        }
        else{
            cout <<"false";
            return 0;
        }
    }
    cout <<"true";
    return 0;
}