#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void kusok_govna(vector <int> &ar, int left, int right) {

    int temp = ar[(right + left) / 2]; 
    int l = left;
    int r = right;
    while (l <= r) {
        while (ar[l] < temp)
            l++;
        while (ar[r] > temp)
            r--;
        if (l <= r){
            int tmp = ar[l];
            ar[l] = ar[r];
            ar[r] = tmp;
            l++;
            r--;
        }
    }
    if (left < r)
        kusok_govna (ar, left, r);
    
    if (right > l)  
        kusok_govna (ar, l, right); 
}   

int main(){

    int n ;
    ifstream cin("input.txt");
    cin >> n;

    vector <int> arr(n);

    for(int i = 0; i < n ; i++){
        arr[i] = rand()%100;
    }

    kusok_govna(arr, 0, n -1);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}