class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& a, vector<int>& b) {
        vector<int> v;
        for (int i = 0; i < a.size(); i++) {
            int num = -1;
            int p = 0;
            for (int j = 0; j < b.size(); j++) {
                if (p == 0) {
                    if (a[i] == b[j])
                        p++;
                    continue;
                }
                if (b[j] > a[i]) {
                    num = b[j];
                    break;
                }
            }
            v.push_back(num);
        }
        return v;
    }
};