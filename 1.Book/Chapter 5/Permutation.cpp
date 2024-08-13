vector<vi> allPermutations;
vector<bool> choosen(3);
void Backtracking(vi &permutation, vi &nums)
{

   if (permutation.size() == nums.size())
   {
      allPermutations.push_back(permutation);
      return;
   }

   for (int i = 0; i < nums.size(); i++)
   {
      if (choosen[i])
         continue;

      choosen[i] = true;
      permutation.push_back(nums[i]);

      Backtracking(permutation, nums);

      permutation.pop_back();
      choosen[i] = false;
   }
}

void BuiltinFunction(vi &nums){
   do{
      allPermutations.push_back(nums);
   }while(next_permutation(nums.begin(),nums.end()));
}