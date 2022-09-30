var romanToInt = function (s) {
  let data = { I: 1, V: 5, X: 10, L: 50, C: 100, D: 500, M: 1000 };
  let amounts = [];
  for (let i of s) {
    amounts.push(data[i]);
  }
  let ans = amounts[0];
  for (let i = 1; i < amounts.length; i++) {
    if (amounts[i] > amounts[i - 1]) {
      ans += amounts[i] - amounts[i - 1] * 2;
    } else {
      ans += amounts[i];
    }
  }
  return ans;
};

console.log('====================================');
console.log(romanToInt('MCMXCIV'));
console.log('====================================');
