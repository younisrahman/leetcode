//   Definition for singly-linked list.
class ListNode {
  val: number;
  next: ListNode | null;
  constructor(val?: number, next?: ListNode | null) {
    this.val = val === undefined ? 0 : val;
    this.next = next === undefined ? null : next;
  }
}

let linkdex_list = new ListNode(2, new ListNode(4, new ListNode(3)));
let linkdex_list2 = new ListNode(5, new ListNode(6, new ListNode(4)));

var size = 0;
var size2 = 0;
while (linkdex_list) {
  size++;
  if (linkdex_list.next) {
    linkdex_list = linkdex_list.next;
  } else {
    break;
  }
}
while (linkdex_list2) {
  size2++;
  if (linkdex_list2.next) {
    linkdex_list2 = linkdex_list2.next;
  } else {
    break;
  }
}

let loopLength: number = Math.max(size, size2);
