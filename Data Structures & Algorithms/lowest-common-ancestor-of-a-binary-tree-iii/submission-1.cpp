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

        Node* left = p; 
        Node* right = q;
        int pDepth=0;
        int qDepth=0;

     // Pahle p ,q ka depth find karo
      while(left != NULL){
        pDepth++;
        left = left->parent;
      }  

      while(right != NULL){
        qDepth++;
        right = right->parent;
      }  
 
 
 // Chuki p,q ka depth null ho gaya tha to ise fir se reset karo
       left = p;
       right = q;


     // deeper node ko upar lao
       while(pDepth > qDepth){
          left=left->parent;
          pDepth--;
       }
       while(qDepth>pDepth){
         right=right->parent;
         qDepth--;
       }

        while(left != right){
          left=left->parent;
          right=right->parent;  
        }
        return right;   // or return left;

    }

};