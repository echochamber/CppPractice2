//
// Created by jason on 9/7/15.
//

#include <vector>
#include <iostream>

#include "TreeNode.h"
#include "BinaryTreePath.h"

using namespace std;

vector<string> BinaryTreePath::binaryTreePaths(TreeNode* root) {

    if (!root) {
        return vector<string>();
    }

    vector<string> paths;
    binaryTreeTraverse(paths, root, to_string(root->val));

    return paths;
}

void BinaryTreePath::binaryTreeTraverse(vector<string>& paths, TreeNode* current_node, string current_path) {
    if (!current_node->left && !current_node->right) {
        paths.push_back(current_path);
        return;
    }
    if (current_node->left) binaryTreeTraverse(paths, current_node->left, current_path + "->" + to_string(current_node->left->val));
    if (current_node->right) binaryTreeTraverse(paths, current_node->right, current_path + "->" + to_string(current_node->right->val));
}