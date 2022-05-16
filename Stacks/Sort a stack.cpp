/*
https://practice.geeksforgeeks.org/problems/sort-a-stack/1
*/

void SortedStack :: sort()
{
vector<int> vec;
while(!s.empty())
{
vec.push_back(s.top());
s.pop();
}
std::sort(vec.begin(), vec.end());
int n = vec.size();
for(int i = 0; i < n; i++)
s.push(vec[i]);
}
