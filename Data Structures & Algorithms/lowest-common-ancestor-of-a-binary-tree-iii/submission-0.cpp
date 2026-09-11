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

        // Set used to store unique values
        set<Node*> pst; //  { 2 , 3 , 5 }
        set<Node*> qst; //  { 1 , 3 , 5 }
        Node* curr = p; 
        Node* q_curr = q;

       while(curr != NULL){
         pst.insert(curr);
         curr = curr->parent;
       }

        while(q_curr != NULL){
          // Hum p ke set me q ko find kar rahe hai   
          if(pst.find(q_curr) != pst.end()){
            return q_curr;;
           }
         qst.insert(q_curr);
         q_curr = q_curr->parent;
       
       }

    }

};