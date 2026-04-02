#include <unordered_map>
using namespace std;

class MyHashMap {
    unordered_map<int,int> umap;

public:
    MyHashMap() {
    }
    
    void put(int key, int value) {
        umap[key] = value;
    }
    
    int get(int key) {
        if (umap.find(key) != umap.end())
            return umap[key];
        return -1;
    }
    
    void remove(int key) {
        umap.erase(key);
    }
};