#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={3,20,1,5,2};
    int n=arr[0];
    for(int i=0;i<5;i++){
       if(n<arr[i])
       n=arr[i];
    }
    cout << n;
    return 0;
}