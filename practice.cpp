#include <iostream>
using namespace std;
class Solution
{
public:
	Solution()
	{
		cout << "Solution()" << endl;
	}
	int Sum_Solution(int n)
	{
		return n;
	}
};
int main()
{
	Solution S1;
	S1.Sum_Solution(10);
	Solution();
	return 0;
}