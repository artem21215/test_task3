//
// Created by artem on 20.09.2021.
//

#include "calc_min_operations.h"
int calc_min_operations(int n, vector<int> &len_fragments) {
    int sum = 0;
    int need_connects = n - 1;
    for (int i = 0; i < n; ++i) {
        if (sum + len_fragments[i] <= need_connects - 1) {
            sum += len_fragments[i];
            --need_connects;
        }
    }
    return need_connects;
}