#include<iostream>
using namespace std;
//main function
int main(){
//declaring a variable n
    int n;
    cin>>n;
//input an array of n size
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //declaring a variable current 
    int sum;
    //main code
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum+=a[j];
            cout<<a[j]<<" ";   //output
        }
    }

    return 0;
}