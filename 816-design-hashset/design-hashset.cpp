class MyHashSet {
    unordered_set<int> myHashSet; 
public:
    MyHashSet() {
    }
    
    void add(int key) {
        myHashSet.insert(key);
    }
    
    void remove(int key) {
        myHashSet.erase(key);
    }
    
    bool contains(int key) {
        return myHashSet.count(key);
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */