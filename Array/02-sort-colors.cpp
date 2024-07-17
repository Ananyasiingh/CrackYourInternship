class Solution {
public:
    void sortColors(vector<int>& nums) {
        //problem based on dutch national flag algo.
        //time complexity is O(N)
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;

        while(mid <= high){
            switch(nums[mid]){

            case 0: 
                swap(nums[low++], nums[mid++]);
                break;
            
            case 1:
                mid++;
                break;

            case 2: 
                swap(nums[mid], nums[high--]);
                break;
            }
        }
    }
};
