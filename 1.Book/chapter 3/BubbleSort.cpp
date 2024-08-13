void bubblesort(vi &v)
{
    int n = v.size();

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (v[j] > v[i])
                swap(v[j], v[i]);
        }
    }
}