int search(int* nums, int numsSize, int target) 
{
    int left = 0;
    int right = numsSize - 1;

    while (left <= right) 
    {
        int mid = (left+right)/ 2;  
        if (nums[mid] == target) 
        {
            return mid;
        }
        if (nums[left] <= nums[mid]) 
        {
            if (target >= nums[left] && target < nums[mid]) 
            {
                left=0;
                right = mid - 1;  
            } 
            else 
            {
                left = mid + 1;
                right=numsSize-1;  
            }
        } 
        else 
        {
           
            if (target > nums[mid] && target <= nums[right]) 
            {
                left = mid + 1;  
            } 
            else 
            {
                right = mid - 1;  
            }
        }
    }

    return -1;  
}
