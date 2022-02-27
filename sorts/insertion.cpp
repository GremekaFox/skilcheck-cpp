#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main(){
    srand(time(0));
    int n; 
    ifstream cin("input.txt");
    cin >> n;
    vector <int> arr(n);


    for(int i = 0; i < n; i++){
        arr[i] = rand()%100;
    }

    for(int i = 0; i < n - 1; i++){
        int temp = i + 1;
        int m = arr[temp];
        for(int j = temp; j > 0 ; j--){
            if(m < arr[j - 1]){
                arr[j] = arr[j - 1];
                temp = j - 1;
            }
        }
        arr[temp] = m;
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
