#include <iostream>
using namespace std;
class Solution
{
public:
	bool IsChar(char ch)
	{
		if ((ch >= 'a' && ch <= 'z')
			|| (ch >= 'A' && ch <= 'Z'))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	string reverseOnlyLetters(string S)
	{
		int begin = 0;
		int end = S.size() - 1;
		while (begin < end)
		{
			while (begin < end && IsChar(S[begin]) == false)
			{
				begin++;
			}

			while (begin < end && IsChar(S[end]) == false)
			{
				--end;
			}

			swap(S[begin], S[end]);
			++begin;
			--end;
		}

		return S;
	}
};

int main()
{
	return 0;
}