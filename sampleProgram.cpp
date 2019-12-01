#include <iostream>
using namespace std;

int main(){
    
    long n, temp, arr[100000], max = 0, counter = 0;

    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    for(int i = 1; i <= n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    for(int i = 1; i <= n; i++){
        if(max == arr[i]){
            counter++;
        }
    }
    cout << counter;
    
    return 0;
}

