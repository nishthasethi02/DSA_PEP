/* 
    Tree -> It is a non - linear, hierarchical data structure consisting of nodes connected by edges
    Binary Tree -> A tree is a binary tree when every node has atmost 2 children

    Terminologies -
    1. Leaf -> A node with no children
    2. Internal Node -> a node which is not a leaf
    3. Siblings -> the children of same parent
    4. Length Path -> length of path is 1 less than the number of nodes on the path
    5. Ancestors and Descendents -> if there is a path from node A to node B, then A is called an ancestor of B and B is called descendent of A
    6. Subtree -> any node of a tree, with all of its descendents is a subtree
    7. Level -> the level of the node refers to its distance from the root, the root of the tree has generally level 0
    8. Height of a tree -> the maximum level in a tree determines its height, the height of a node in a tree is the length of the longest path 
    from that node to a leaf
    9. Depth of a tree -> the depth of a node is the number of nodes along the path from the root to that node

    Properties of Binary Tree
    1. If h = height of a binary tree, then 
       a -> maximum number of leaves = 2^h
       b -> maximum number of nodes = 2^(h + 1) - 1
    2. If a binary tree contains m nodes at level 1, it contains atmost 2m nodes at level l + 1
    3. Since a binary tree can contain atmost 1 node at level 0(root), it can contain atmost 2^l nodes at level l
    4. The total number of edges in a full binary tree with n nodes is n - 1

    Types 
    Full Binary Tree -> A tree of height h has all it leaves at level h, means all non leaf nodes of a FBT have two chidren,
                        and the leaf node have no children
    
    Complete Binary Tree -> all levels are filled except the last level and the last level should be filled from left to right

    A binary tree is balanced if for every node the height differene between its left & right surface is atmost 1

    Binary Search Tree
    -> A BST is a special type of tree where
        Every node has at most two children
        For every node ->
            All values in the LST are smaller
            All values in the RST are greater
        Both LST & RST are also BST
*/
