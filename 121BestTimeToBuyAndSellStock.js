/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function (prices) {
  let buyPrice = Infinity;
  let sellPrice = 0;
  let result = 0;
  for (let i of prices) {
    if (i < buyPrice) {
      buyPrice = i;
      sellPrice = i;
      if (sellPrice - buyPrice > result) result = sellPrice - buyPrice;
    }
    if (i > sellPrice) {
      sellPrice = i;
      if (sellPrice - buyPrice > result) result = sellPrice - buyPrice;
    }
  }

  return result;
};
