// Enrollment no: 92500527175
// 2. Write a program to perform following operations on Binary search tree :
// a. insert delete
// b. height of the tree
// c. total no. of nodes in the tree

#include <stdio.h>
#include <stdlib.h>

//structure of node
struct Node {
    int data;
    struct Node *left, *right;
};

//Create a Node
struct Node* createNode(int data) {
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
};

//Insert a Node
struct Node* insert(struct Node* root ,int data) {
    if (root==NULL) return createNode(data);
    if (data<root->data)
        root->left=insert(root->left,data);
    else if (data>root->data)
        root->right=insert(root->right,data);
    return root;
};

//Find the smallest Node
struct Node* minValueNode(struct Node* node) {
    struct Node* current=node;
    while (current->left!=NULL)
        current=current->left;
    return current;
};

//Delete a Node
struct Node* deleteNode(struct Node* root,int data) {
    if (root==NULL) return root;
    if (data<root->data)
        root->left=deleteNode(root->left,data);
    else if (data>root->data)
        root->right=deleteNode(root->right,data);
    else {
        //Node has no left child
        if(root->left==NULL) {
            struct Node* temp=root->right;
            free(root);
            return temp;
        }
        //Node has no right child
        else if(root->right==NULL) {
            struct Node* temp =root->left;
            free(root);
            return temp;
        }
        //Node has two children
        struct Node* temp=minValueNode(root->right);
        root->data=temp->data;
        root->right=deleteNode(root->right,temp->data);
    }
    return root;
}

//Find height of tree
int height(struct Node* root) {
    if(root==NULL) return 0;
    int leftHeight=height(root->left);
    int rightHeight=height(root->right);
    if(leftHeight > rightHeight)
        return leftHeight+1;
    else
        return rightHeight+1;
}

//Count total number of nodes
int countNodes(struct Node* root) {
    if(root==NULL) return 0;
    return 1 + countNodes(root->left)+countNodes(root->right);
}

//Inorder traversal
void inorder(struct Node* root) {
    if(root!=NULL) {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

//Main function
int main() {
    struct Node* root=NULL;
    int choice,value;
    while(1) {
        printf("\n\n---Binary Search Tree---");
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Height");
        printf("\n4. Total nodes");
        printf("\n5. Display(Inorder)");
        printf("\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                root= insert(root,value);
                break;
            case 2:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                root= deleteNode(root,value);
                break;
            case 3:
                printf("Height of the tree = %d",height(root));
                break;
            case 4:
                printf("Total no. of nodes = %d",countNodes(root));
                break;
            case 5:
                printf("Inorder: ");
                inorder(root);
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice..");
        }
    }
    return 0;
}
