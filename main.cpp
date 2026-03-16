#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cout << "Enter number of friends: ";
    cin >> n;

    vector<string> names(n);
    unordered_map<string, double> paid;

    cout << "Enter names:\n";
    for(int i = 0; i < n; i++) {
        cin >> names[i];
    }

    double total = 0;

    cout << "Enter amount paid by each:\n";
    for(int i = 0; i < n; i++) {
        double amount;
        cin >> amount;
        paid[names[i]] = amount;
        total += amount;
    }

    double equal_share = total / n;

    vector<pair<string, double>> creditors, debtors;

    for(int i = 0; i < n; i++) {
        double balance = paid[names[i]] - equal_share;

        if(balance > 0) {
            creditors.push_back({names[i], balance});
        }
        else if(balance < 0) {
            debtors.push_back({names[i], -balance});
        }
    }

    sort(creditors.begin(), creditors.end(),
        [](auto &a, auto &b){ return a.second > b.second; });

    sort(debtors.begin(), debtors.end(),
        [](auto &a, auto &b){ return a.second > b.second; });

    cout << "\nTransactions:\n";

    int i = 0, j = 0;

    while(i < debtors.size() && j < creditors.size()) {

        double amount = min(debtors[i].second, creditors[j].second);

        cout << debtors[i].first << " pays "
             << creditors[j].first << " : "
             << amount << endl;

        debtors[i].second -= amount;
        creditors[j].second -= amount;

        if(debtors[i].second == 0) i++;
        if(creditors[j].second == 0) j++;
    }

    return 0;
}
