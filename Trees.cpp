#include <iostream>
#include <vector>
#include <string>
using namespace std;

class TreeNode {
public:
    string name;                     // Node name (object name)
    vector<TreeNode*> children;      // List of children

    TreeNode(string n) : name(n) {}

    // Add a child node
    void addChild(TreeNode* child) {
        children.push_back(child);
    }
};

// Recursive DFS print with indentation
void printTree(TreeNode* node, int depth = 0) {
    // Print indentation for hierarchy
    for (int i = 0; i < depth; i++) {
        
        cout << "  ";
    }
    cout << "- " << node->name << endl;

    // Print all children
    for (TreeNode* child : node->children) {
        printTree(child, depth + 1);
    }
}

int main() {
    // Create root node
    TreeNode* root = new TreeNode("Village");

    // Create children
    TreeNode* house1 = new TreeNode("House 1");
    TreeNode* house2 = new TreeNode("House 2");

    // Add children to root
    root->addChild(house1);
    root->addChild(house2);

    // Add grandchildren
    TreeNode* room1 = new TreeNode("Room A");
    TreeNode* room2 = new TreeNode("Room B");
    house1->addChild(room1);
    house1->addChild(room2);

    TreeNode* object1 = new TreeNode("Chair");
    TreeNode* object2 = new TreeNode("Table");
    room1->addChild(object1);
    room1->addChild(object2);

    // Print the entire tree
    printTree(root);

    return 0;
}

