//
// Created by jason on 9/7/15.
//

#ifndef FIRSTPROJECT_PATHSUM_H
#define FIRSTPROJECT_PATHSUM_H

#include "TreeNode.h"
#include <vector>


class PathSum {
public:
    std::vector<std::vector<int>> pathSum(TreeNode* root, int sum);
private:
    void pathSumRecursive(TreeNode* current_node, int sum, std::vector<int>& current_path, std::vector<std::vector<int>>& result);
};




#endif //FIRSTPROJECT_PATHSUM_H
