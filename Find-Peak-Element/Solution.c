int findPeakElement(int* nums, int numsSize) {
    int low=0,high=numsSize-1,mid;

    while(low<high)
    {
        mid=low+(high-low)/2;
        if(nums[mid]>nums[mid+1])
        high=mid;
        else
        low=mid+1;
    }
    return low;
}
