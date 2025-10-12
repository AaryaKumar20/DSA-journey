//Name: Aarya Kumar
//Date: 12-10-25
//Problem: Reverse an array
#include <iostream>
#include <vector>
using namespace std;
void rev(vector<int> &arr,int n){
    int start = 0;
    int end = n-1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rev(arr,n);

    cout <<"Reversed array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
