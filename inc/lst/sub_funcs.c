int height(node* x) {
    return x ? x->height : -1;
}

int difference_heights(node* x) {
    return x ? height(x->left) - height(x->right) : 0;
}

void update_height(node* x) {
    int h_left = height(x->left);
    int h_right = height(x->right);
    x->height = (h_left > h_right ? h_left : h_right) + 1;
}