void shellSort(vector<int> &nums) {
    int n = nums.size();
    int gap ,i ,j;
    for( gap = n/2 ; gap > 0 ; gap /= 2) {
        for (i = gap ; i < n ; i++) {
            int num = nums[i];
            for (j = i - gap ; j >= 0 && nums[j] > num ; j-=gap) {
                nums[j + gap] = num[j];
            }
            nums[j + gap] = num;
        }
    }
}