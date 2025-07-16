class RangeFreqQuery {
public:
    unordered_map<int, vector<int>> freq;
    RangeFreqQuery(vector<int>& arr) {
        for (int i = 0; i < arr.size(); i++) {
            freq[arr[i]].push_back(i);
        }
    }

    int query(int left, int right, int value) {
        if (freq.find(value) == freq.end())
            return 0;
        const vector<int>& position = freq[value];
        auto low = lower_bound(position.begin(), position.end(), left);
        auto high = upper_bound(position.begin(), position.end(), right);
        return high - low;
    }
};

/**
 * Your RangeFreqQuery object will be instantiated and called as such:
 * RangeFreqQuery* obj = new RangeFreqQuery(arr);
 * int param_1 = obj->query(left,right,value);
 */