/**
 * @param {number[]} nums1
 * @param {number} m
 * @param {number[]} nums2
 * @param {number} n
 * @return {void} Do not return anything, modify nums1 in-place instead.
 */
var merge = function (nums1, m, nums2, n) {
  let point1 = m - 1;
  let point2 = n - 1;
  let arrayEnd = m + n - 1;

  while (point1 >= 0 && point2 >= 0) {
    if (nums1[point1] > nums2[point2]) {
      nums1[arrayEnd] = nums1[point1];
      point1--;
    } else {
      nums1[arrayEnd] = nums2[point2];
      point2--;
    }
    arrayEnd--;
  }

  while (point2 >= 0) {
    nums1[arrayEnd] = nums2[point2];
    point2--;
    arrayEnd--;
  }
};
