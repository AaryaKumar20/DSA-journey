//Name: Aarya Kumar
//Date: 11-10-25
//Problem: Find if the array is sorted or not;
#include <iostream>
using namespace std;
int main(){
    int len=6;
    int arr[6]= {1,6,8,9,6,4};
    int flag=1;
    for(int i=1; i<len; i++){
        if(arr[i] < arr[i-1]){
            flag=0;
            break;
        }
    }
    if(!flag) cout<<"Array is not sorted"<<endl;
    else cout<<"Array is sorted"<<endl;
    return 0;
}
