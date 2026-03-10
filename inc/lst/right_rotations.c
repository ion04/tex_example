node* rr_rotation(node* x) {
    node* y = x->right;
    x->right = y->left;
    y->left = x;
        
    update_height(x);
    update_height(y);
    return y;
}

node* rl_rotation(node* x) {
    node* y = x->right;
    node* z = y->left;
        
    x->right = z->left;
    y->left = z->right;
    z->left = x;
    z->right = y;
        
    update_height(x);
    update_height(y);
    update_height(z);
    return z;
}