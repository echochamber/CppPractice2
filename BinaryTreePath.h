//
// Created by jason on 9/7/15.
//

#ifndef FIRSTPROJECT_BINARYTREEPATH_H
#define FIRSTPROJECT_BINARYTREEPATH_H

#include <vector>

class BinaryTreePath {
public:
    std::vector<std::string> binaryTreePaths(TreeNode* root);
private:
    void binaryTreeTraverse(std::vector<std::string>& paths, TreeNode* current_node, std::string current_path);
};


#endif //FIRSTPROJECT_BINARYTREEPATH_H
