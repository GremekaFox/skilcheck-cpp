#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main(){

    long long w;
    long long  h;

    ifstream cin ("input.txt");
    ofstream cout("output.txt");

    cin >> w;
    cin >> h;

    long long res;
    long long w_1;
    long long  h_1;

    for (int i = 1; i <= w; i++) {
        w_1 = w_1 + i;
    }
    for (int i = 1; i <= h ; i++) {
        h_1 = h_1 + i;  
    } 

    cout << (h_1 * w_1);

}