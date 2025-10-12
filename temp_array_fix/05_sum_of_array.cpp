//Name: Aarya Kumar
//Date: 12-10-25
//Problem: sum of array elements
#include <iostream>
#include <vector>
using namespace std;
void sumOfArray(vector<int> &arr,int n,int &sum){
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
}
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
    sumOfArray(arr,n,sum);
    cout<<"Sum of elements is: "<<sum<<endl;

    return 0;
}
