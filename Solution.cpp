class Solution {
public:
	int maxArea(vector<int>& height) {
		int i = 0;
		int j = height.size();
		j = j - 1;
		// cout << j;
		int ans = 0;
		while (i < j) {
			if (height[i] < height[j]) {
				int temp;
				temp = ((j - i) * height[i]);
				// cout << temp << endl;
				if (temp >= ans) {
					ans = temp;
				}
				i++;
			}
			else {
				int temp = (j - i) * height[j];
				// cout << temp << endl;
				if (temp >= ans) {
					ans = temp;
				}
				j--;
			}
		}
		return ans;
	}
};