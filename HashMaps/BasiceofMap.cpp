#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main() {

    // Creation
    unordered_map<string, int> m;

    // Insertion

    // Method 1
    pair<string, int> p = make_pair("babbar", 3);
    m.insert(p);

    // Method 2
    pair<string, int> q("love", 2);
    m.insert(q);

    // Method 3
    m["mera"] = 1;

    // Accessing elements
    cout << m["mera"] << endl;
    cout << m.at("babbar") << endl;

    // Check before using at()
    if (m.count("unknownKey")) {
        cout << m.at("unknownKey") << endl;
    } else {
        cout << "Key not found" << endl;
    }

    // Size
    cout << "Size: " << m.size() << endl;

    // Check presence
    cout << "love present: " << m.count("love") << endl;

    // Erase
    m.erase("love");
    cout << "Size after erase: " << m.size() << endl;

    // Iterator
    unordered_map<string, int>::iterator it = m.begin();

    while (it != m.end()) {
        cout << it->first << " " << it->second << endl;
        it++;
    }

    return 0;
}