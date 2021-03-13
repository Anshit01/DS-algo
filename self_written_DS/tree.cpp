/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define int long long
#define f(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define inputArray(arr) f(i, 0, arr.size()) cin >> arr[i]
#define printArray(arr) f(i, 0, arr.size()) cout << arr[i] << ' '; cout << endl
#define endl '\n'
typedef long long ll;
const int mod = 1e9+7;
using namespace std;

class Tree {
    struct Node {
        int val;
        Node* left;
        Node* right;

        Node(int n) {
            val = n;
            left = NULL;
            right = NULL;
        }
    };

    Node* root;
    // int size_;

    void insert_rec(int val, Node* node){
        if(val == node->val){
            return;
        }else if(val < node->val){
            if(node->left == NULL){
                node->left = new Node(val);
                return;
            }else{
                insert_rec(val, node->left);
            }
        }else{
            if(node->right == NULL){
                node->right = new Node(val);
                return;
            }else{
                insert_rec(val, node->right);
            }
        }
    }

    void print_rec(Node* node){
        if(node == NULL){
            return;
        }
        print_rec(node->left);
        cout << node->val << ' ';
        print_rec(node->right);
    }

public:
    Tree() {
        root = NULL;
    }

    void insert(int val){
        if(root == NULL){
            root = new Node(val);
        }else{
            insert_rec(val, root);
        }
    }

    bool search(int val){
        Node* node = root;
        while(node){
            if(node->val == val){
                return true;
            }else if(val < node->val){
                node = node->left;
            }else{
                node = node->right;
            }
        }
        return false;
    }

    void print() {
        print_rec(root);
        cout << endl;
    }
};

void solve() {
    Tree tree;
    tree.insert(5);
    tree.insert(4);
    tree.insert(7);
    tree.print();
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while(T--){
        solve();
        // if(solve())
        // 	cout << "YES" << endl;
        // else
        // 	cout << "NO" << endl;
    }
    return 0;
}
