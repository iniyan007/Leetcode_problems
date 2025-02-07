int removeDuplicates(int* nums, int n) {
    int i = 1, j = 1, c = 0;
    while(j<n){
        if(nums[j] != nums[i-1]){
            nums[i] = nums[j];
            i++;
            j++;
            c++;
        }
        else{
            j++;
        }
    }
    return c+1;
}