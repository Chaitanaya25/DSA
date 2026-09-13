/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
typedef pair<int,pair<int,int>> pint;
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        priority_queue<pint,vector<pint>,greater<pint>> pq;
        queue<pair<TreeNode*,pair<int,int>>> q;
        q.push({root,{0,0}});
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            TreeNode* node=it.first;
            int r=it.second.first;
            int c=it.second.second;
            pq.push({c,{r,node->val}});
            if(node->left!=NULL){
                q.push({node->left,{r+1,c-1}});
            }
            if(node->right!=NULL){
                q.push({node->right,{r+1,c+1}});
            }
        }
        vector<vector<int>> ans;
        int c2=INT_MAX;
        while(!pq.empty()){
            int c1=pq.top().first;
            int value=pq.top().second.second;
            pq.pop();
            if(c1!=c2){
                ans.push_back({});
                c2=c1;
            }
            ans.back().push_back(value);
        }
        return ans;
    }
};