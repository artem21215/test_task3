#include "convert_string.h"
#include "calc_min_operations.h"
int main() {
    string s;
    getline(cin, s);
    vector<int> len_fragments = convert_to_int_array(s);
    int n = len_fragments.size();
    sort(len_fragments.begin(), len_fragments.end());
    int min_operations = calc_min_operations(n, len_fragments);
    cout << min_operations << endl;
    return 0;
}
