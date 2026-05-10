/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public boolean isEvenOddTree(TreeNode root) {
        Queue<TreeNode> q = new ArrayDeque<>();
        int l = 0;

        q.add(root);
        int n = 1;
        while (!q.isEmpty()) {
            int max = Integer.MIN_VALUE;
            for (int i = 0; i < n; i++) {
                TreeNode h = q.peek();
                q.poll();

                if((h.val + l) % 2 == 0) return false;
                int v = h.val * (l%2==0 ? 1:-1);
                // System.out.print(v + " ");
                if(max >= v) return false;
                max = v;
                
                if(h.left != null)
                    q.add(h.left);
                if(h.right != null)
                    q.add(h.right);
            }
            l++;
            // System.out.println("    "+l);
            n = q.size();
        }
        return true;
    }
}