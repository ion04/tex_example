node* ll_rotation(node* x) {
    node* y = x->left;
    x->left = y->right;
    y->right = x;
        
    update_height(x);
    update_height(y);
    return y;
}

node* lr_rotation(node* x) {
    node* y = x->left;
    node* z = y->right;
        
    x->left = z->right;
    y->right = z->left;
    z->left = y;
    z->right = x;
        
    update_height(x);
    update_height(y);
    update_height(z);
    return z;
}