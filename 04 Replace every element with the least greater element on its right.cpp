/*

   https://practice.geeksforgeeks.org/problems/replace-every-element-with-the-least-greater-element-on-its-right/1

*/
/*

      struct Node
    {
        struct Node *left,*right;
        int data;
        Node(int v)
        {
            left = NULL;
            right = NULL;
            data = v;
        }
    };
    Node *insert(Node *root, Node* &check, int key)
    {
        if(root == NULL)
        {
            root  = new Node(key);
            return root;
        }
        if(key<root->data)
        {
            check  = root;
            root->left = insert(root->left, check, key);
        }
        else
        {
            root->right = insert(root->right, check, key);
        }
        return root;
    }
    vector<int> findLeastGreater(vector<int>& arr, int n) {
        Node *root = NULL;
        for(int i=n-1;i>=0;i--)
        {
            Node *keep = NULL;
            root = insert(root, keep, arr[i]);
            if(keep)
            arr[i] = keep->data;
            else arr[i] = -1;
        }
        return arr;
     }
*/