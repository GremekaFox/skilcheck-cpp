#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main(){
    int n ;
    ifstream cin ("input.txt");
    cin >> n;
    vector <int> arr(n);
    
    for(int i = 0; i < n; i++){
        arr[i] = rand()%100;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 1; j++){
            if(arr[j] > arr[j + 1]){
                int max = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = max;
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}