/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* parent;
};
*/

class Solution {
public:
    Node* lowestCommonAncestor(Node* p, Node * q) {
     
     Node* left  = p;
     Node* right  = q;
     int pHeight=0,qHeight=0;

     while(left != right){
      left = (left == NULL)  ? q  : left->parent;
      right = (right == NULL)  ? p  : right->parent;
     }

     return left; 

    }

};