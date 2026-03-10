node* find(node* x, const char* unit_code) {
    if(x == NULL)
        return NULL;

    int cmp = strcmp(unit_code, x->unit_code);
        
    if(cmp == 0)
        return x;
        
    if(cmp < 0)
        return find(x->left, unit_code);
    else
        return find(x->right, unit_code);
}