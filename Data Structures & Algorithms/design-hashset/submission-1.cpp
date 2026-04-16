class MyHashSet {
    vector<int> v;
public:
    MyHashSet() {
        
    }
    
    void add(int key) {
        auto f = find(v.begin(),v.end(),key);
        if(f == v.end())
            v.push_back(key);
    }
    
    void remove(int key) {
        auto f = find(v.begin(),v.end(),key);
        if(f!=v.end())
            v.erase(f);
    }
    
    bool contains(int key) {
        auto f = find(v.begin(),v.end(),key);
        if(f!=v.end())
            return true;
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */