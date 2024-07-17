class Solution {
public:
//time complexity again O(N) hahahaha
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> seen;
        int index = 0;
        for(int ele : nums){
            if(seen.find(ele)==seen.end()){
                seen.insert(ele);
                nums[index++] = ele;

            }
        }
        return index;  //sidha index return krdo bass
    }
};
