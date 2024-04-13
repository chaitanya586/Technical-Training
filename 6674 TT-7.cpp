#include <iostream>

using namespace std;

long repeatedString(string s, long n) {
   
    long count_a_in_s = 0;
    for (char ch : s) {
        if (ch == 'a') {
            count_a_in_s++;
        }
    }

    long complete_repeats = n / s.length();

    // Calculate the remaining characters after complete repeats
    long remaining_chars = n % s.length();

   
    long count_a_in_remaining = 0;
    for (int i = 0; i < remaining_chars; i++) {
        if (s[i] == 'a') {
            count_a_in_remaining++;
        }
    }

  
    long total_count_a = (complete_repeats * count_a_in_s) + count_a_in_remaining;

    return total_count_a;
}

int main() {
    // Input values
    string s = "aba";
    long n = 10;


    long result = repeatedString(s, n);

    // Output the result
    cout << "Frequency of 'a' in the substring: " << result << endl;

    return 0;
}
