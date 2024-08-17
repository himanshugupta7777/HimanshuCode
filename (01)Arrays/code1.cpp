//largest element in an array
class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int max = arr[0];  // Initialize max with the first element
        for(int i = 1; i < n; i++) {  // Start loop from the second element
            if(arr[i] > max) {
                max = arr[i];  // Update max if the current element is greater
            }
        }
        return max;
    }
};
//second largest element in an array
class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        int largest=arr[0];
        int secondlargest=-1;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]>largest){
                largest=arr[i];
            }
            
        }
        for(int j=0;j<n;j++){
            if(arr[j]>secondlargest && arr[j]!=largest){
                secondlargest=arr[j];
            }
        }
        return secondlargest;
    }
};
// check if array is sorted or rotated
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            temp[(i + k) % nums.size()] = nums[i];
        }
        nums = temp;
    }

    vector<int> sorted(vector<int>& nums) {
        vector<int> sorted_nums = nums; // Create a copy of nums
        sort(sorted_nums.begin(), sorted_nums.end());
        return sorted_nums;
    }

    bool check(vector<int>& nums) {
        vector<int> sorted_nums = sorted(nums); // Get the sorted version of the original array

        for (int k = 0; k < nums.size(); k++) {
            vector<int> rotated_nums = nums; // Create a copy of nums to rotate
            rotate(rotated_nums, k); // Rotate the copy
            if (rotated_nums == sorted_nums) { // Check if the rotated copy is sorted
                return true;
            }
        }

        return false;
    }
};

//remove duplicates
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i - 1]){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};
//left rotate array by k places
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int n=nums.size();
       vector<int> temp(n);
        for(int i=0;i<n;i++){
           temp[(i+k)%n]=nums[i];
        }
        for(int i=0;i<n;i++){
            nums[i]=temp[i];
        }
    }
};
//move zeroes to end
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int nonzero=0;
       for(int j=0;j<nums.size();j++){
        if(nums[j]!=0){
            swap(nums[j],nums[nonzero]);
            nonzero++;
        }
       }
    }
};
