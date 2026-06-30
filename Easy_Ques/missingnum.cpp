#include<iostream>

#include<unordered_set>
using namespace std;

int missingNumber(int arr[], int n){
    unordered_set<int> s;

    for(int i=0; i<n; i++){
        s.insert(arr[i]);
    }

    for(int i=1; i<=n; i++){
        if(s.find(i) == s.end()){
            return i;
        }
    }

    return -1;
}int main(){
    int arr[] = {1,2,3,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout << missingNumber(arr, n) << endl;  
    
}
