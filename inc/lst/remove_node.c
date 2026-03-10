node* find_min(node* x) {
    while (x->left != NULL)
        x = x->left;
    return x;
}

node* remove(node* x, const char* unit_code) {
    if (x == NULL)
        return NULL;

    int cmp = strcmp(unit_code, x->unit_code);
        
    if (cmp < 0) 
        x->left = remove(x->left, unit_code);
    else if (cmp > 0) 
        x->right = remove(x->right, unit_code);
    else {
        if (x->left == NULL || x->right == NULL) {
            node* temp = x->left ? x->left : x->right;
            if (temp == NULL) {
                free(x);
                return NULL;
            } else {
                *x = *temp;
                free(temp);
            }
        }else {
            node* min_right = find_min(x->right);
                strcpy(x->unit_code, min_right->unit_code);
                strcpy(x->material_code, min_right->material_code);
                strcpy(x->measure, min_right->measure);
                strcpy(x->production_id, min_right->production_id);
                strcpy(x->expected_consumption, min_right->expected_consumption);
                x->height = min_right->height;
                x->right = remove(x->right, min_right->unit_code);
            }
        }
        
    if (x == NULL)
        return NULL;
        
    update_height(x);
    int balance = difference_heights(x);
        
    if (balance > 1 && difference_heights(x->left) >= 0) 
        return ll_rotation(x);
        
    if (balance > 1 && difference_heights(x->left) < 0) 
        return lr_rotation(x);
        
    if (balance < -1 && difference_heights(x->right) <= 0) 
        return rr_rotation(x);
        
    if (balance < -1 && difference_heights(x->right) > 0) 
        return rl_rotation(x);
        
    return x;
}