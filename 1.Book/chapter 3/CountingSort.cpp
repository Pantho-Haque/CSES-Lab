void Countingsort(vi &v)
{
    int max = *max_element(v.begin(), v.end());
    vi bookKeeping(max + 1, 0);

    for (auto &i : v)
    {
        bookKeeping[i] += 1;
    }

    v.clear();
    for (int i = 0; i <= max; i++)
    {
        for (int j = 0; j < bookKeeping[i]; j++)
        {
            v.push_back(i);
        }
    }
}