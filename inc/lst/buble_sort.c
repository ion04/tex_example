void buble_sort(data table[], int k) {
    int permutations = -1;
        while (permutations != 0) {
            permutations = 0;
            int i = 0;
            while (i < k-1) {
                if(strcmp(table[i].unit_code, table[i+1].unit_code) > 0){
                    data tmp = table[i];
                    table[i] = table[i+1];
                    table[i+1] = tmp;
                    permutations = 1;
                }
            ++i; 
            }
        }
}