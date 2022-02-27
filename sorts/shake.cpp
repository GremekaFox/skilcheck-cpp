#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main(){
    int n;
    ifstream cin("input.txt");
    cin >> n;
    vector <int> arr(n);

    for(int i = 0; i < n; i++){
        arr[i] = rand()%100;
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    int min = 0;
    int max = n - 1;

    while(min < max){
        for(int i = min; i <= max; i++){
            if(arr[i - 1] > arr[i]){
                swap(arr[i - 1] , arr[i]);
            }
        }
        max--;

        for(int i = max; i >= min; i--){
                if(arr[i - 1] > arr[i]){
                    swap(arr[i - 1] , arr[i]);
                }
            }
        min++;
    }

    cout << "\n";

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}