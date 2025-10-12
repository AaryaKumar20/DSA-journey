//Name: Aarya Kumar
//Date: 11-10-25
//Problem: Find the largest number in array
#include <iostream>
using namespace std;

void largest(int arr[],int len){
    int maximum=arr[0];
    for(int i=1;i<len;i++){
        if(arr[i]>maximum){
            maximum=arr[i];
        }
    }
    cout<<"The largest element is: "<<maximum<<endl;
}
int main(){
    int len=6;
    int arr[6]={1,4,6,8,9,5};
    largest(arr,len);
    return 0;
}
