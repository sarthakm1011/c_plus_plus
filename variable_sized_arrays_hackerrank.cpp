#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main_vector() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    int q;

    cin >> n >> q;

    vector<vector<int>> a(n);
    
    for (int i=0; i<n; i++) {
        int k;
        cin >> k; // get length of the vector a[i]
        a[i].resize(k);
        for (int j=0; j<k; j++) {
            cin >> a[i][j];
        }
    }

    for (int i=0; i<q; i++) {
        int a1,b1;
        cin >> a1 >> b1;
        cout << a[a1][b1] << endl;
    }
    // for(int j=0; j<n; j++) {
    //     cin >> s;
    //     vector<int> vect(j, s);
    //     for(vectro<int>::size_type i = 0; i < s; i++) {
    //         cin >> a[i];
    //     }
    // }
        
    return 0;
}


int main_pointer() {
    int n, q;
    cin >> n >> q;
    //int** a = new int*[n](); // static memory allocation
    int** b =(int**)malloc(n*sizeof(int)); //dynamic memory allocation

    for (int i=0; i<n; i++) {
        int k;
        cin >> k;

        int* i_arr = new int[k]();
        int* temp_i_arr = (int*)malloc(k*sizeof(int)); // dynamoc memory allocation

        // create the subarray
        for(int j=0; j<k; j++) {
            //cin >> i_arr[j]; // static
            cin >> temp_i_arr[j]; //dynamic
        }

        //a[i] = i_arr; // storing the subarray in a // static
        a[i] = temp_i_arr; // dynamic
    }

    for(int i=0; i<q; i++) {
        int a4, a5;
        cin >> a4 >> a5;
        cout << a[a4][a5] << endl;
    }

    for(int i=0; i<n; i++) {
        delete[] a[i];
    }
    delete[] a;

    return 0;
}



int main() {
    //main_vector();
    main_pointer();
}


