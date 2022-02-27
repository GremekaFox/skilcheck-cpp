#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

int main(){

 int A[] = {1,2,3,4,5};
    int len = sizeof(A)/sizeof(int);
    for( int i=0; i<len; i++ ){
        for( int j=i; j<len; j++ ){   // Now A[i..j] is the subarray
            for( int k=i; k<=j; k++ )
                printf("%d ", A[k]);
            printf("\n");
        }
    }
    return 0;

    int n;
    ifstream cin ("input.txt");
    ofstream cout("output.txt");
    cin >> n;
    vector <int> a(n);
}
