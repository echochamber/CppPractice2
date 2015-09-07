//
// Created by jason on 9/7/15.
//

#include "PathSum.h"
#include <stddef.h>

using namespace std;

vector<vector<int>> PathSum::pathSum(TreeNode *root, int sum) {

    vector<vector<int>> result;
    vector<int> current_path;

    pathSumRecursive(root, sum, current_path, result);

    return result;
}

void PathSum::pathSumRecursive(TreeNode* current_node, int sum, vector<int>& current_path, vector<vector<int>>& result) {
    if (current_node == NULL) {
        return;
    }

    current_path.push_back(current_node->val);
    if (current_node->left == NULL && current_node->right == NULL) {
        if (sum == current_node->val) {
            result.push_back(vector<int>(current_path));
        }
    } else {
        pathSumRecursive(current_node->left, sum - current_node->val, current_path, result);
        pathSumRecursive(current_node->right, sum - current_node->val, current_path, result);
    }

    current_path.pop_back();
}