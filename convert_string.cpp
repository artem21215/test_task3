#include "convert_string.h"

vector<int> convert_to_int_array(string input) {
    replace(input.begin(), input.end(), ',', ' ');

    istringstream stringReader{input};

    vector<int> result;

    int number;
    while (stringReader >> number) {
        result.push_back(number);
    }

    return result;
}