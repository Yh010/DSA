/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
int solve(LLNode* node, int k) {
    LLNode* tmp = node;
    int i = 0;

    while (tmp != NULL) {
        if (i > k) {
            node = node->next;
        }
        i++;
        tmp = tmp->next;
    }
    return node->val;
}