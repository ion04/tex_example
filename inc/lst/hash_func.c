int _hash(const char* unit_code, int k) {
            unsigned long hash = 5381;  
            int c = 0;
            while ((c = *unit_code++) && c != '\0') {
                hash = ((hash << 5) + hash) + c;  
            }
            return hash % k;
}