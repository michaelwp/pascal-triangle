//
// Created by michael putong on 11/02/21.
//

#include <iostream>
#include <vector>

using namespace std;

void pascalTriangle(int l, int n, vector<int> p);

int main() {
    vector<int> p;
    int l, n;

    p = {1}; // init result in array;
    l = 0; // loop start number
    n = 5; // how many result needed

    pascalTriangle(l, n, p);
    return 0;
}

void pascalTriangle(int l, int n, vector<int> p) {
    vector<int> arr;
    arr = {0};

    if (l >= n) {
        return;
    }

    for (int i=0; i < p.size(); i++) {
        int r = p[i] + p[i+1];
        cout << r << " ";
        arr.push_back(r);
    }

    cout << endl;
    pascalTriangle(l+1, n, arr);
}

