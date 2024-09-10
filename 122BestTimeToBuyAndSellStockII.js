var maxProfit = function (prices) {
  let hold = Infinity;
  let sell = 0;
  for (let i of prices) {
    hold = Math.min(hold, i - sell);
    sell = Math.max(sell, i - hold);
  }

  return sell;
};

console.log(maxProfit([7, 1, 5, 3, 6, 4]));
