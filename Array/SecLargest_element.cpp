#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={3,20,1,50,50};
    int max,min;
    if(arr[0]<arr[1]){
        min=arr[0];
        max=arr[1];
    }
    else{
        min=arr[1];
        max=arr[0];
    }
    for(int i=3;i<5;i++){
        if(min<arr[i] && arr[i]!=max){
            if(arr[i]>max){
                min=max;
                max=arr[i];
            }
            else
                min=arr[i];
        }
    }
    cout << min;
    return 0;
}