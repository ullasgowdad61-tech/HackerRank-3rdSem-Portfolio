#include <bits/stdc++.h>
using namespace std;

vector<int> matchingStrings(vector<string> stringList, vector<string> queries) {
    unordered_map<string, int> frequency;

    for (const string& s : stringList) {
        frequency[s]++;
    }

    vector<int> result;

    for (const string& q : queries) {
        result.push_back(frequency[q]);
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    vector<string> stringList(n);

    for (int i = 0; i < n; i++) {
        cin >> stringList[i];
    }

    int q;
    cin >> q;

    vector<string> queries(q);

    for (int i = 0; i < q; i++) {
        cin >> queries[i];
    }

    vector<int> result = matchingStrings(stringList, queries);

    for (int value : result) {
        cout << value << endl;
    }

    return 0;
}
