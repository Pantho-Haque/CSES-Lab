
int binary(vi v, int toFind)
{
   int l = 0;
   int h = v.size() - 1;

   while (h - l > 1)
   {
      int mid = (h + l) / 2;

      if (v[mid] < toFind)
      {
         l = mid + 1;
      }
      else
      {
         h = mid;
      }
   }

   if (v[l] == toFind)
      return l;
   if (v[h] == toFind)
      return h;

   return -1;
}

int binaryB(vi v, int toFind)
{
   int l = 0, h = v.size() - 1;

   while (l < h)
   {
      int mid = (l + h) / 2;

      if (v[mid] == toFind)
         return mid;
      else if (v[mid] < toFind)
         l = mid + 1;
      else
         h = mid - 1;
   }
   if (l == h && toFind == v[l])
      return l;
   return -1;
}

int binaryJump(vi v, int toFind)
{
   int i = 0;
   int n = v.size() - 1;

   for (int b = n / 2; b >= 1; b /= 2)
   {
      while (i + b < n && v[i + b] <= toFind)
         i += b;
   }

   if (v[i] == toFind)
      return i;
   return -1;
}