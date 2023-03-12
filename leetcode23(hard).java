class Solution {

    private ListNode merge(ListNode node1, ListNode node2){

        ListNode res = new ListNode(-10001);
        ListNode lst = res;

        while(node1 != null && node2 != null){
            if(node1.val < node2.val){
                lst.next = node1;
                lst = lst.next;
                node1 = node1.next;
            }
            else if(node1.val == node2.val){
                lst.next = node2;
                lst = lst.next;
                node2 = node2.next;

                lst.next = node1;
                lst = lst.next;
                node1 = node1.next;
            }else{
                lst.next = node2;
                lst = lst.next;
                node2 = node2.next;
            }
        } 

        if(node1 == null){
            lst.next = node2;
        }
        else if(node2 == null) lst.next = node1; 

        return res.next;
    }

    public ListNode mergeKLists(ListNode[] lists) {
        ListNode res = new ListNode(-10001);

        for(int i = 0; i < lists.length; i ++){
            res = this.merge(res, lists[i]);
        }

        return res.next;
    }
}
