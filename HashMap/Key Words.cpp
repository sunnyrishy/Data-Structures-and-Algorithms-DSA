Map : 

insert: Inserts a new key-value pair into the map.
erase: Removes a key-value pair from the map.
find: Searches for a key and returns an iterator to the found element.
lower_bound: Returns an iterator to the first element not less than the given key.
upper_bound: Returns an iterator to the first element greater than the given key.
equal_range: Returns a range of elements matching a given key.
count: Returns the number of elements with a specific key.

Unordered_Map : 

insert: Inserts a new key-value pair into the unordered map.
erase: Removes a key-value pair from the unordered map.
find: Searches for a key and returns an iterator to the found element.
count: Returns the number of elements with a specific key.


  Example : 

#include <iostream>
#include <map>
#include <unordered_map>

int main() {
    // Example with std::map
    std::map<int, int> mapExample;

    mapExample.insert({5, 50});
    mapExample.insert({2, 20});
    mapExample.insert({8, 80});
    mapExample.insert({1, 10});

    auto mapIter = mapExample.find(5);
    if (mapIter != mapExample.end()) {
        std::cout << "Found element with key 5: " << mapIter->second << std::endl;
    } else {
        std::cout << "Element with key 5 not found." << std::endl;
    }

    mapExample.erase(2);

    // Example with std::unordered_map
    std::unordered_map<int, int> unorderedMapExample;

    unorderedMapExample.insert({5, 50});
    unorderedMapExample.insert({2, 20});
    unorderedMapExample.insert({8, 80});
    unorderedMapExample.insert({1, 10});

    auto unorderedMapIter = unorderedMapExample.find(8);
    if (unorderedMapIter != unorderedMapExample.end()) {
        std::cout << "Found element with key 8: " << unorderedMapIter->second << std::endl;
    } else {
        std::cout << "Element with key 8 not found." << std::endl;
    }

    unorderedMapExample.erase(1);

    return 0;
}
