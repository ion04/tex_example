typedef struct node {
    char unit_code[MAX_LEN_UNIT];     
    char material_code[MAX_LEN_MATERIAL];
    char measure[MAX_LEN_MEASURE];
    char production_id[MAX_LEN_PRODUCTION];
    char expected_consumption[MAX_LEN_E_CON];
    int height;                        
    struct node* left;
    struct node* right;
} node;

node* root = NULL;