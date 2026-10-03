/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int i;
    *returnSize = numsSize * 2;
 int* ans = (int*)malloc(sizeof(int) * (*returnSize));
    for(i = 0; i < numsSize; i++) {
        ans[i] = nums[i];
        ans[i + numsSize] = nums[i];
    }
    return ans;
}