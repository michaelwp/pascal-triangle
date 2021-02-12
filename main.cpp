//
// Created by michael putong on 11/02/21.
//

#include <iostream>
#include <vector>

using namespace std;

void pascalTriangle(int l, int n, vector<int> p);

int main() {
    vector<int> p;

    p = {1};

    pascalTriangle(0, 5, p);
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





//int binomialCoeff(int n, int k);
//
//void printPascal(int n)
//{
//    for (int line = 0; line < n; line++)
//    {
//        for (int i = 0; i <= line; i++)
//            printf("%d ",binomialCoeff(line, i));
//        printf("\n");
//    }
//}
//
//int binomialCoeff(int n, int k)
//{
//    int res = 1;
//    if (k > n - k)
//        k = n - k;
//
//    for (int i = 0; i < k; ++i)
//    {
//        res *= (n - i);
//        res /= (i + 1);
//    }
//
//    return res;
//}
//
//int main()
//{
//    int n = 7;
//    printPascal(n);
//    return 0;
//}

