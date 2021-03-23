#include <iostream>
using namespace std;
class Solution 
{
public:
	int firstUniqChar(string s) 
	{
		//使用映射的方式统计次数
		int count[29] = { 0 };
		for (auto ch : s)
		{
			count[ch - 'a']++;
		}

		for (size_t i = 0; i < s.size(); ++i)
		{
			if (count[s[i] - 'a'] == 1)
				return i;
		}

		return -1;
	}
};
int main()
{
	return 0;
}