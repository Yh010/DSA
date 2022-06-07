int solve(string s) {
    unordered_map<char, int> fre;
    int res = 0;
    for (int r = 0, l = 0; r < s.size(); r++) {
        fre[s[r]]++;

        // while (invalid substring ;)
        while (fre.size() > 2) {
            // I have too many elements in the window!
            // need to pop out!
            fre[s[l]]--;
            if (fre[s[l]] == 0) fre.erase(s[l]);
            l++;
        }
        res = max(res, r - l + 1);
        // it is always a valid substring after the while loop!
    }
    return res;
}