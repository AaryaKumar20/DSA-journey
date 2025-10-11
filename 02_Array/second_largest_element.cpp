//Name: Aarya kumar
//Date: 11-10-25
//Problem: find the second largest number


#include <iostream>
using namespace std;
int main(){
    int len=6;
    int arr[6]={1,5,7,9,4,0};
    int largest=arr[0];
    int slargest=INT_MIN;

    for(int i=0;i<len;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest){
            slargest=arr[i];
        }
    }

    if(slargest == INT_MIN){
        cout << "No second largest element exists" << endl;
    } else {
        cout << "Second largest element is: " << slargest << endl;
    }
    return 0;
}
