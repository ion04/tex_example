node* insert(node* x, node* new_node) {
    if (x == NULL) 
        return new_node;
    
    int cmp = strcmp(new_node->unit_code, x->unit_code);
        
    if (cmp < 0) 
        x->left = insert(x->left, new_node);
    else if (cmp > 0) 
        x->right = insert(x->right, new_node);
     else {
        *x = *new_node;  
        free(new_node);
        return x;
    }
        
    update_height(x);
    int balance = difference_heights(x);
        
    if (balance > 1 && strcmp(new_node->unit_code, x->left->unit_code) < 0) 
        return ll_rotation(x);

    if (balance < -1 && strcmp(new_node->unit_code, x->right->unit_code) > 0) 
            return rr_rotation(x);
        
    if (balance > 1 && strcmp(new_node->unit_code, x->left->unit_code) > 0) 
            return lr_rotation(x);
    
    if (balance < -1 && strcmp(new_node->unit_code, x->right->unit_code) < 0) 
            return rl_rotation(x);
    
    return x;
}