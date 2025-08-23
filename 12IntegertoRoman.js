/**
 * @param {number} num
 * @return {string}
 */
var intToRoman = function (num) {
  const ONE = { 1: "I", 10: "X", 100: "C", 1000: "M" };
  const FIVE = { 1: "V", 10: "L", 100: "D" };
  const TEN = { 1: "X", 10: "C", 100: "M" };

  let roman = "";
  let multiplier = 1;

  while (num > 0) {
    const number = num % 10;
    num = Math.floor(num / 10);
    let str = "";

    if (number === 9) {
      str = ONE[multiplier] + TEN[multiplier];
    } else if (number >= 5) {
      str = FIVE[multiplier] + (ONE[multiplier] || "").repeat(number - 5);
    } else if (number == 4) {
      str = ONE[multiplier] + (FIVE[multiplier] || "");
    } else {
      str = (ONE[multiplier] || "").repeat(number);
    }

    multiplier *= 10;
    roman = str + roman;
  }
  return roman;
};

console.log(intToRoman(3749)); // "MMMDCCXLIX"
