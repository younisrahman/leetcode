var longestCommonPrefix = function (strs) {
  let prefix = strs.reduce((prev, next) => {
    let i = 0;
    while (prev[i] && next[i] && prev[i] === next[i]) {
      i++;
    }
    return prev.slice(0, i);
  });
  return prefix;
};

console.log('====================================');
console.log(longestCommonPrefix(['flower', 'flow', 'flight']));
console.log('====================================');
