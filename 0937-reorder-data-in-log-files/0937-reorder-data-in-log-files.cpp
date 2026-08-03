class Solution {
public:
    static bool cmp(const string &a, const string &b) {
        int posa = a.find(' ');
        int posb = b.find(' ');

        string ida = a.substr(0, posa);
        string idb = b.substr(0, posb);

        string ca = a.substr(posa + 1);
        string cb = b.substr(posb + 1);

        bool digitA = isdigit(ca[0]);
        bool digitB = isdigit(cb[0]);

        // Both are letter logs
        if (!digitA && !digitB) {
            if (ca == cb)
                return ida < idb;
            return ca < cb;
        }

        // Letter log comes before digit log
        if (!digitA && digitB)
            return true;

        if (digitA && !digitB)
            return false;

        // Both are digit logs
        return false;
    }

    vector<string> reorderLogFiles(vector<string>& logs) {
        stable_sort(logs.begin(), logs.end(), cmp);
        return logs;
    }
};