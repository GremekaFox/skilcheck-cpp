#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

int main(){

    int n ;
    cin >> n;
    vector <int> arr[n];
    int s ;

    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
        s += arr[i] ;
    }


    s = s/ n;
    cout << s;

    for(int i = 0 ; i < n ; i++){
        cout << arr[i];
    }
}