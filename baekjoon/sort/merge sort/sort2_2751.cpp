#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void mergesort(vector<int>&, int, int);
void merge(vector<int>&, int, int, int);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 0;
    cin >> n;

    vector<int> A(n, 0);
    for (int i = 0; i < n; i++) cin >> A[i];

    mergesort(A, 0, n - 1);

    for (int i = 0; i < n; i++) cout << A[i] << '\n';

    return 0;
}

void mergesort(vector<int>& A, int start, int finish) {
    if (start < finish) {
        int median = (start + finish) / 2;

        mergesort(A, start, median);
        mergesort(A, median + 1, finish);
        merge(A, start, median, finish);
    }
}

void merge(vector<int>& A, int start, int median, int finish) {
    int D[finish - start + 1] = {0};

    int i = start;
    int j = median + 1;
    int k = 0;

    while (i <= median && j <= finish && k < finish - start + 1) {
        if (A[i] < A[j])
            D[k] = A[i++];
        else
            D[k] = A[j++];
        k += 1;
    }

    while (i <= median)
        D[k++] = A[i++];
    while (j <= finish)
        D[k++] = A[j++];

    for (int index = 0; index < k; ++index)
        A[start + index] = D[index];
}
