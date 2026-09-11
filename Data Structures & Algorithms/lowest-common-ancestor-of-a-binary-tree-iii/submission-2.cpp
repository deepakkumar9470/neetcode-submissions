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


     // 1. Find height/depth of p,q
     while(left!=NULL){
        pHeight = pHeight+1;
        left = left->parent;
     }
     while(right!=NULL){
        qHeight = qHeight+1;
        right = right->parent;
     }

     //Chuki p,q ka  null ho gaya tha to ise fir se reset karo
        left  = p;
        right  = q;

      // deeper node ko upar lao
       while(pHeight > qHeight){
          left=left->parent;
          pHeight--;
       }
       while(qHeight>pHeight){
         right=right->parent;
         qHeight--;
       }

     while(left != right){
       left = left->parent;
       right = right->parent; 
     }

     return right; // or return left

    }

};