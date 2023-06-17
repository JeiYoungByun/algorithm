#include <iostream>
#include <vector>

using namespace std;

int Median(vector<int>&, int, int);
void Qsort(vector<int>&, int, int);
void Swap(int&, int&);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> A(n, 0);

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    Qsort(A, 0, n - 1);

    cout << A[k - 1] << endl;

    return 0;
}

void Swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int Median(vector<int>& A, int l, int r) {
    int m = (l + r) / 2;

    if (A[l] > A[m]) Swap(A[l], A[m]);
    if (A[l] > A[r]) Swap(A[l], A[r]);
    if (A[m] > A[r]) Swap(A[m], A[r]);

    Swap(A[m], A[r - 1]);

    return A[r - 1];
}

void Qsort(vector<int>& A, int l, int r) {
    while (l < r) {
        int pivot = Median(A, l, r);
        int i = l, j = r - 1;

        while (true) {
            while (i < r && A[++i] < pivot);
            while (j > l && A[--j] > pivot);
            if (i < j) Swap(A[i], A[j]);
            else break;
        }

        if (i < r - 1) Swap(A[i], A[r - 1]);

        // Recur for the smaller subarray, and adjust the bounds of the larger subarray.
        if (i - l < r - i) {
            Qsort(A, l, i - 1);
            l = i + 1;
        } else {
            Qsort(A, i + 1, r);
            r = i - 1;
        }
    }
}


