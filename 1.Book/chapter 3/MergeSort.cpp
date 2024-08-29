void Merge(vi &v, int l, int mid, int r)
{
   auto it = v.begin();
   vi a(it + l, it + mid + 1);
   vi b(it + mid + 1, it + r + 1);

   int i = 0, j = 0, k = l;
   while (i < a.size() && j < b.size())
   {
      if (a[i] <= b[j])
         v[k++] = a[i++];
      else
         v[k++] = b[j++];
   }
   while (i < a.size())
      v[k++] = a[i++];
   while (j < b.size())
      v[k++] = b[j++];
}


void MergeSort(vi &v, int l, int r)
{
   if (l < r)
   {
      int mid = (l + r) / 2;

      MergeSort(v, l, mid);
      MergeSort(v, mid + 1, r);

      Merge(v, l, mid, r);
   }
}