#define MAX_LEN_UNIT 5
#define MAX_LEN_MATERIAL 8
#define MAX_LEN_MEASURE 12 
#define MAX_LEN_PRODUCTION 8
#define MAX_LEN_E_CON 4
#define k 2000

typedef struct {
    char unit_code[MAX_LEN_UNIT];
    char material_code[MAX_LEN_MATERIAL];
    char measure[MAX_LEN_MEASURE];
    char production_id[MAX_LEN_PRODUCTION];
    char expected_consumption[MAX_LEN_E_CON];
    } data;

data table[k];