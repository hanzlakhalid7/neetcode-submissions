class MyHashMap {
    vector<int> k;
    vector<int> v;
public:
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        auto f = find(k.begin(),k.end(),key);
        if(f != k.end())
            v[f-k.begin()] = value;
        else {
            k.push_back(key);
            v.push_back(value);
        }
    }
    
    int get(int key) {
        auto f = find(k.begin(),k.end(),key);
        if(f != k.end())
            return v[f-k.begin()];
        return -1;
    }
    
    void remove(int key) {
        auto f = find(k.begin(),k.end(),key);
        if(f != k.end()){
            v.erase(v.begin()+(f-k.begin()));
            k.erase(k.begin()+(f-k.begin()));
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */