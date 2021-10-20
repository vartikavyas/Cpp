#include<iostream>
using namespace std;
//main function
int main(){
//declaring variable n
int n;
cin>>n;
//input an array of n size
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
//declaring a variable min
int min=a[0];
for(int i=0;i<n;i++){    //main code 
    if(min>a[i])        
    min=a[i];
}
//output
cout<<min;

return 0;

}