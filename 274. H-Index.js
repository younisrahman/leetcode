/**
 * @param {number[]} citations
 * @return {number}
 */
var hIndex = function (citations) {
  citations.sort((a, b) => b - a);

  console.log(citations);
  console.log(citations.length);

  let len = citations.length;

  var ans = 0;
  // 6 5 4 3 2 1
  for (let i = 0; i < len; i++) {
    if (citations[i] >= i + 1) ans++;
  }

  return ans;
};
