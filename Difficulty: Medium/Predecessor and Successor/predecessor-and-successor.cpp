/* BST Node
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
   Node* getP(Node* root){
        Node* ans = NULL;
        while(root){
            ans = root;
            root = root->right;
        }
        return ans;
    }
    
    Node* getS(Node* root){
        Node* ans = NULL;
        while(root){
            ans = root;
            root = root->left;
        }
        return ans;
    }
    vector<Node*> findPreSuc(Node* root, int key) {
        // code here
        vector<Node*>res;
        Node* curr = root;
        Node* pred = NULL;
        Node* succ = NULL;
    
        while(curr){
            if(key > curr->data){
                pred = curr;
                curr = curr->right;
            }
            else if(key < curr->data){
                succ = curr;
                curr = curr->left;
            }
            else { // key == curr->data
                if(curr->left){
                    pred = getP(curr->left);
                }
                if(curr->right){
                    succ = getS(curr->right);
                }
                break; // <--- CRITICAL FIX: Exit the loop once key is found!
            }
        }
    
        res.push_back(pred);
        res.push_back(succ);
        
        return res;
        
    }

};

