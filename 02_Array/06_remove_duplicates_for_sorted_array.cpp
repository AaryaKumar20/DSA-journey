//Name: Aarya Kumar
//Date: 12-10-25
//Problem: remove duplicates for sorted array
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"Enter number of elements: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    cout <<"Array after removing duplicates: ";
    for(int k=0;k<=i;k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;
    return 0;
}
