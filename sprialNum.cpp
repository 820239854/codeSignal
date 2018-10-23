#include <iostream>
#include <vector>
#include <string>
using namespace std;

int i=1;

vector<vector<int>> spiral(vector<vector<int>>& ret,int layer) 
{
	int sz = ret.size();
	if(layer > (sz+1)/2) return ret;
	for(int j=layer-1; j<(sz-layer); ++j) ret[layer-1][j] = i++;
	for(int j=layer-1; j<(sz-layer); ++j) ret[j][sz-layer] = i++;
	for(int j=sz-layer;j>(layer-1); --j)  ret[sz-layer-1][j] = i++;
	for(int j=sz-layer;j>(layer-1); --j)  ret[j][layer-1] = i++;
	spiral(ret, layer+1);
    return ret;
}

std::vector<std::vector<int>> spiralNumbers(int n) 
{
	vector<vector<int>> ret(n, vector<int>(n,0));
	spiral(ret, 1);
    return ret;
}

int main(int argc, char const *argv[])
{
	std::vector<std::vector<int>> v = spiralNumbers(5);
	return 0;
}











