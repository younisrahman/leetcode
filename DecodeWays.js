var numDecodings = function (s) {
  let dp = Array(s.length + 1).fill(0);
  dp[0] = 1;
  dp[1] = s[0] === '0' ? 0 : 1;

  for (let i = 2, n = s.length + 1; i < n; i++) {
    const twoDigit = Number(s.substring(i - 2, i));

    if (Number(s.substring(i - 1, i)) > 0) dp[i] += dp[i - 1];

    if (twoDigit > 9 && twoDigit < 27) dp[i] += dp[i - 2];
  }

  return dp.pop();
};

// 2,2,2,6
// 22,26
// 2,22,6
// 22,2,6
// 2,2,26

console.log('====================================');
console.log(numDecodings('2226'));
console.log('====================================');
