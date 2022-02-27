#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main(){
    int n;
    ifstream cin ("input.txt");
    ofstream cout("output.txt");
    cin >> n;
    vector <string> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int m;
    cin >> m;
    vector <string> b(m);
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }

    sort(b.begin(), b.end());


    vector <bool> used(m);
    vector <string> c;
    vector <string> d;


    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(b[i] == a[j]){
                c.push_back(b[i]);
                used[i] = true;
            }
        }
        if(!used[i]) {
            d.push_back(b[i]);
        }
    }


    cout << "Friends: ";
    for(int i = 0; i < n; i++) {
        if(i < n -1){
            cout << a[i] << ", ";
        }
        else{
            cout << a[i];
        }
    } 


    cout << "\nMutual Friends: ";
    for(int i = 0; i < c.size(); i++) {
        if(i < c.size() - 1){
            cout << c[i] << ", ";
        }
        else{
            cout << c[i];
        }
    } 



    cout << "\nAlso Friend of: ";
    for(int i = 0; i < d.size(); i++) {
        if(i < d.size() - 1){
            cout << d[i] << ", ";
        }
        else{
            cout << d[i];
        }
    } 

}

