#include<bits/stdc++.h>
using namespace std;
void num(int arr[],int n){
    arr[0]=100;
}
int main(){
    int n=5;
    int arr[n];
    arr[0]=50;
    num(arr,n);
    cout << arr[0];
    return 0;
}