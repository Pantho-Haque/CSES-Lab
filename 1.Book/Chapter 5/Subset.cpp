void Backtracking(vector<vector<int>> &allsubs, vector<int> &subset, int i, vector<int> &nums)
{
    if (i == nums.size())
    {
        allsubs.push_back(subset);
        return;
    }

    search(subset, i + 1, nums);

    subset.push_back(nums[i]);
    search(subset, i + 1, nums);
    subset.pop_back();
}


void BitMan(vector<vector<int>> &allsubs, vector<int> &subset, vector<int> &nums)
{
    for (int i = 0; i < (1 << nums.size()); i++)
    {

        for (int j = 0; j < nums.size(); j++)
        {
            if (i & (1 << j))
            {   
                // i represents the birary secquences from 0 - 2^n 
                // Check if the j-th element is included in the i-th subset
                subset.push_back(nums[j]);
            }
        }
        allsubs.push_back(subset);
        subset.clear();
    }
}