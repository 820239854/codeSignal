#include <iostream>
#include <vector>
using namespace std;
 
int main(int argc, char const *argv[])
{
	cout << "Hello,I got here.";
	std::vector<int> v;
	int a=1;
	for (int i = 0; i < 10; ++i)
	{
		v.push_back(i);
	}
	return 0;
}