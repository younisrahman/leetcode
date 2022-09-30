function trap(height) {
  let n = height.length;
  let left = new Array(n);
  left[0] = height[0];
  let right = new Array(n);
  right[n - 1] = height[n - 1];
  let ans = 0;
  for (let i = 1; i < n; i++) {
    left[i] = Math.max(height[i], left[i - 1]);
  }
  for (let i = n - 2; i >= 0; i--) {
    right[i] = Math.max(height[i], right[i + 1]);
  }

  for (let i = 0; i < n; i++) {
    ans += Math.min(right[i], left[i]) - height[i];
  }
  return ans;
}

let arr = [0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1];
console.log('====================================');
console.log(trap(arr));
console.log('====================================');
