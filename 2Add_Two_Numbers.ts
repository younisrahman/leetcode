//   Definition for singly-linked list.
class ListNode {
  val: number;
  next: ListNode | null;
  constructor(val?: number, next?: ListNode | null) {
    this.val = val === undefined ? 0 : val;
    this.next = next === undefined ? null : next;
  }
}

let linkdex_list = new ListNode(
  1,
  new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5))))
);

while (linkdex_list) {
  console.log('====================================');
  console.log(linkdex_list.val);
  console.log('====================================');
  if (linkdex_list.next) {
    linkdex_list = linkdex_list.next;
  } else {
    break;
  }
}
