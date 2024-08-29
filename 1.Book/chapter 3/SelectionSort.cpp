void SelectionSort(vi &v) {
    int n = v.size();
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (v[j] < v[minIdx]) {
                minIdx = j;
            }
        }
        swap(v[i], v[minIdx]);
    }
}