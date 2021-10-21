#include<iostream>
using namespace std;
//function to search element
int linearSearch(int a[],int n,int key){
    for(int i=0;i<n;i++){
        if(a[i]==key){          //main code
            return i;
        }
    }
    return-1;
}
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
//declaring variable key
    int key;
    cin>>key;
   //output 
    cout<<linearSearch(a,n,key)<<endl;

    return 0;
}