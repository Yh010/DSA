class Solution {
public:
    int findInMountainArray(int target, MountainArray &arr) {
        unordered_map<int, int> mp;
		int n = arr.length();
		auto get = [&](int i) {
			if (mp.count(i) > 0) return mp[i];
			return mp[i] = arr.get(i);
		};
		int pk = -1, lo = 0, hi = n - 1;
		while (lo < hi) {
			int mid = lo + (hi - lo) / 2;
			int a0 = get(mid - 1), a1 = get(mid), a2 = get(mid + 1);
			if (a0 < a1 && a1 > a2) {
				pk = mid;
				break;
			}
			if (a0 < a1 && a1 < a2) lo = mid;
			else hi = mid;
		}
        
		lo = 0, hi = pk;
		while (lo < hi) {
			int mid = lo + (hi - lo) / 2;
			int x = get(mid);
			if (x == target) return mid;
			if (x < target) lo = mid + 1;
			else hi = mid;
		}
        
		lo = pk, hi = n - 1;
		while (lo < hi) {
			int mid = lo + (hi - lo) / 2;
			int x = get(mid);
			if (x == target) return mid;
			if (x > target) lo = mid + 1;
			else hi = mid - 1;
		}
		return get(lo) == target ? lo: -1;
    }
};