// introduction to trees
// they are naturally hierarchical: a collection of entities called nodes linked together to simulate an hierarchy
// we can only travel from node A to B in one direction: that's what hierarchy means after all
// trees are a recursive data structure, the definition of one root with n childs defines a sub-tree which also contains a type of root
// N nodes has n-1 edges 
// Depth of x = length of the path from root to x, the lenght is calculated in edges basically
// Height of x = x being the root of a tree or tree, its the longest path to a leaf (the furthermost leaf), being that a leaf will have 0 height
// the height from the root of the tree to the last leaf is the total height of the tree
// the most common tree is the tree that any node can have 3 children max, also called the BINARY TREE


struct Node {   // a node must store data and pointers to the leftmost and rightmost nodes; 
	int data;
	Node* left;
	Node* right; 
};

// Strict binary trees: all nodes have either 2 or 0 children
// Complete binary trees: all levels except possibly the last are completely filled and all nodes are as left as possible

// Depth and level are synonyms
// max number of nodes at level i = 2 ^ i 

// Perfect Binary Tree = all levels are completely filled with a max number of nodes, so the number of nodes will be:
// n = 2 ^ (i + 1) - 1   ---- this -1 is to discount for the root which is basically alone in its level otherwise it will be counted as 2 

// to calculete the maxinum height of a given binary tree:  h = log(number of nodes + 1 ) base 2 - 1


// the goal for efficiency in BigO is to keep the binary tree with less height as possible, thus the Balanced Binary Tree:

// difference of height between left and right subtree height is no more than k (mostly 1) 

// height of an empty tree = -1 , as the height of an 1 node tree = 0 
