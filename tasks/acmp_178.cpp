#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

int main(){

    int n;
    ifstream cin ("input.txt");
    ofstream cout("output.txt");
    cin >> n;
    vector <int> a(n);
    vector <int> b(n);    

    for(int i = 0; i < n; i++){
        cin >> a[i];        
    }

    for(int i = 0; i < n; i++){
        b[i] = a[i];        
    }

    sort(b.begin(), b.end());

    int num = b[0];
    int k = 1;
    int max = 0;
    int num_max = b[0];

    for(int i = 1; i < n; i++){
        if(b[i] != b[i - 1]){
            if(k > max ){
                max = k;
                num_max = num;
            }
            num = b[i];
            k = 1;
        }
        else{
            k++;
        }
    }

    if(k > max){
        max = k;
        num_max = num;
    }

    for(int i = 0; i < a.size(); i++){
        if(a[i] != num_max){
            cout << a[i] << " "; 
        }
    }
    
    for(int i = 0; i < max; i++){
        cout << num_max << " ";
    }

}

