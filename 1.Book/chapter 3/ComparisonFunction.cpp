bool sortWithLongStringFirst(string a, string b)
{
   if (a.size() > b.size())
      return true;
   return false;
}

// sort
sort(v.begin(), v.end());

// reverse sort
sort(v.rbegin(), v.rend());

// sort with a comparotor function
sort(v.begin(), v.end(), sortWithLongStringFirst);
