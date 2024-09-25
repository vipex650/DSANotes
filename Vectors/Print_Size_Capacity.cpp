#include<bits/stdc++.h>
using namespace std;
int main(){

    // vector topic 

    // vector intit
    vector<int>vec;
    // vector value push vec[0]=10,vec[1]=20;
    vec={10,20};
    // vec[2]=35;
    vec.push_back(35);
    cout<< vec.size() << endl;// print the size of the vector
    cout<< vec.capacity();// print the capacity of the vector
    return 0;
}