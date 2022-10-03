/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */

class ListNode {
  val;
  next;
  constructor(val, next) {
    this.val = val === undefined ? 0 : val;
    this.next = next === undefined ? null : next;
  }
}

let linkdex_list = new ListNode(2, new ListNode(4, new ListNode(3)));
let linkdex_list2 = new ListNode(5, new ListNode(6, new ListNode(4)));

var addTwoNumbers = function (l1, l2) {
  let carry = 0;
  let l3;
  while (l1.next && l2.next) {
    let val = l1.val + l2.val;
    val += carry;
    carry = 0;
    if (val > 9) {
      carry += 10;
      val -= 10;
    }

    l3 = new ListNode(val);
    l3.next;
    l1 = l1.next;
    l2 = l2.next;
  }
  return l3;
};
let ans = addTwoNumbers(linkdex_list, linkdex_list2);
console.log('====================================');
console.log(ans);
console.log('====================================');
