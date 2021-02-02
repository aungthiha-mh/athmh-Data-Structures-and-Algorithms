#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};

class BinarySearchTree{
    public:
        BinarySearchTree(){
            printf("Binary Search Tree Started !\n\n");
        }

        Node *createNewNode(Node *root , int data){
            Node *newNode = new Node;
            newNode->data = data;
            newNode->left = newNode->right = NULL;
            return newNode;
        }

        bool isUtilBST(Node *root , int min_val , int max_val){
            if(root == NULL) return true;
            else if(root->data < max_val && root->data > min_val && isUtilBST(root->left , min_val , root->data) && isUtilBST(root->right , root->data , max_val)) return true;
            else return false;
        }

        bool isBinaryTree(Node *root){
            return isUtilBST(root , INT32_MIN , INT32_MAX);
        }

        Node *insertNode(Node *root , int data){
            if(root == NULL){
                root = createNewNode(root,data);
            }
            else if(data < root->data){
                root->left = insertNode(root->left , data);
            }
            else if(data > root->data){
                root->right = insertNode(root->right , data);
            }
            return root;
        }

        bool searchNode(Node *root , int data){
            if(root == NULL) return false;
            else if(data < root->data) return searchNode(root->left , data);
            else if(data > root->data) return searchNode(root->right , data);
            else{
                return true;
            }
        }

        int findHeightTree(Node *root){
            if(root == NULL) return -1;
            else{
                return max(findHeightTree(root->left) , findHeightTree(root->right))+1;
            }

            // Alternate above codes 
            // if(root == NULL){
            //     return 0;
            // }
            // int left = findHeightOfTree(root->left);
            // int right = findHeightOfTree(root->right);
            // int h;
            // if(left>right){
            //     h = 1+left;
            // }
            // else{
            //     h = 1+right;
            // }
            // return h;
                }

        int findMinByIteration(Node *root){
            Node *current = root;
            if(current == NULL) return NULL;
            while(current->left != NULL){
                current = current->left;
            }
            return current->data;
        }

        int findMaxByIteration(Node *root){
            Node *current = root;
            if(current == NULL) return NULL;
            while(current->right != NULL){
                current = current->right;
            }
            return current->data;
        }

        int findMinByRecursion(Node *root){
            if(root == NULL) return NULL;
            else if(root->left == NULL) return root->data;
            return findMinByRecursion(root->left);
        }

        int findMaxByRecursion(Node *root){
            if(root == NULL) return NULL;
            else if(root->right == NULL) return root->data;
            return findMaxByRecursion(root->right);
        }

        void preOrderNodes(Node *root){
            if(root == NULL) return;
            printf("%d " , root->data);
            preOrderNodes(root->left);
            preOrderNodes(root->right);
        }

        void inOrderNodes(Node *root){
            if(root == NULL) return;
            inOrderNodes(root->left);
            printf("%d " , root->data);
            inOrderNodes(root->right);
        }

        void postOrderNodes(Node *root){
            if(root == NULL) return;
            postOrderNodes(root->left);
            postOrderNodes(root->right);
            printf("%d " , root->data);
        }

        Node *findMin(Node *root){
            
            while(root->left != NULL) root = root->left;
            return root;
        }

        Node *deleteNode(Node *root , int data){
            if(root == NULL) return root;
            else if(data < root->data) root->left = deleteNode(root->left,data);
            else if(data > root->data) root->right = deleteNode(root->right,data);
            else{
                // Has No Child
                if(root->left == NULL && root->right == NULL){
                    delete root;
                    root = NULL;
                }
                // Has One Child
                else if(root->left == NULL){
                    Node *temp = root;
                    root = root->right;
                    delete  temp;
                }
                else if(root->right == NULL){
                    Node *temp = root;
                    root = root->left;
                    delete  temp;
                }
                else{
                    Node *temp = findMin(root->right);
                    root->data = temp->data;
                    root->right = deleteNode(root->right,temp->data);
                }
            }
            return root;
        }

        Node *findCurrentNode(Node *root ,int data){
            if(root == NULL) return NULL;
            else if(data < root->data) return findCurrentNode(root->left , data);
            else if(data > root->data) return findCurrentNode(root->right,data);
            else{
                return root;
            }
        }

        Node* findMinNode(Node* root) {
        if(root == NULL) return NULL;
        while(root->left != NULL)
            root = root->left;
        return root;
        }

        Node *successInorderNode(Node *root , int data){
            Node *current = findCurrentNode(root , data);
            if(current == NULL) return NULL;
            else if(current->right != NULL){
                // A Node has right subtree
                return findMinNode(current->right);
            }
            else{
                // A Node has no right subtree
                Node *successor = NULL;
                Node *ancestor = root;
                while(ancestor != current){
                    if(current->data < ancestor->data){
                        successor = ancestor;
                        ancestor = ancestor->left;
                    }
                    else{
                        ancestor = ancestor->right;
                    }
                }
                return successor;
            }
        }
};

int main(){
    Node *root = NULL;

    BinarySearchTree bst;

    root = bst.insertNode(root , 30);
    root = bst.insertNode(root , 40);
    root = bst.insertNode(root , 20);
    root = bst.insertNode(root , 15);
    root = bst.insertNode(root , 25);
    root = bst.insertNode(root , 35);
    root = bst.insertNode(root , 45);
    root = bst.insertNode(root , 29);
    root = bst.insertNode(root , 27);

    printf("\nIs it binary search tree ?\n");
    if(bst.isBinaryTree(root)){
        printf("Yes It is true !\n");
    }
    else{
        printf("Yes It is not true !\n\n");
    }

    printf("\n");
    printf("Pre-Order Nodes are : ");
    bst.preOrderNodes(root);
    printf("\n");

    printf("In-Order Nodes are : ");
    bst.inOrderNodes(root);
    printf("\n");

    printf("Post-Order Nodes are : ");
    bst.postOrderNodes(root);
    printf("\n");

    printf("\n");
    int height_of_tree = bst.findHeightTree(root);
    printf("Height of a tree is %d\n" , height_of_tree);
    printf("\n");

    int min_value_iteration = bst.findMinByIteration(root);
    printf("Min Value by Iteration is %d\n" , min_value_iteration);

    int max_value_iteration = bst.findMaxByIteration(root);
    printf("Max Value by Iteration is %d\n" , max_value_iteration);

    int min_value_recursive = bst.findMinByRecursion(root);
    printf("Min Value by Recursion is %d\n" , min_value_recursive);

    int max_value_recursive = bst.findMaxByRecursion(root);
    printf("Max Value by Recursion is %d\n" , max_value_recursive);
    printf("\n");

    bool check = bst.searchNode(root,40);
    if(check == true) printf("Found !\n");
    else printf("\nNot Found !\n");

    root = bst.deleteNode(root,45);
    printf("In-Order Nodes after deletion are :");
    bst.inOrderNodes(root);
    printf("\n");

    Node* successor = bst.successInorderNode(root,25);
	printf("\nIf a data node has right subtree \n");
    printf("Successor of %d is %d",25,successor->data);

    successor = bst.successInorderNode(root,35);                        // Cant't put data value = 45 because it is deleted above
    printf("\nIf a data node has no right subtree \n");
    printf("Successor of %d is %d\n",35,successor->data);
}