#include <iostream>
#include <vector>
#include <stack>
#include <sstream>
#include "TreeNode.h"
#include "BinaryTreePath.h"
#include "PathSum.h"

using namespace std;

void path_sum () {
    TreeNode root(1);

    root.right = new TreeNode(2);
    root.left = new TreeNode(3);

    PathSum pathSum;

    vector<vector<int>> result = pathSum.pathSum(&root, 4);

    for (const vector<int>& vec : result) {
        cout << '[';
        for (const int& i: vec) {
            cout << i << ',';
        }
        cout << "]\n";
    }
}

void binary_tree_path() {
    TreeNode root(1);

    root.right = new TreeNode(2);
    root.left = new TreeNode(3);

    BinaryTreePath binaryTreePath;

    vector<string> paths = binaryTreePath.binaryTreePaths(&root);
    for(const string &s : paths) // access by const reference
        std::cout << s << '\n';
    std::cout << '\n';
}

int main() {

    path_sum();

    cout << "Hello, World!" << endl;
    return 0;
}