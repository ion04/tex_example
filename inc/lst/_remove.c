int _remove(data table[], int k, int index) {
    int i = 0;
    while(index + i < k - 1) {
        data tmp = table[index + i];
        table[index+i] = table[index + i + 1];
        table[index + i + 1] = tmp;
        i++;
    }
    return k-1; 
}