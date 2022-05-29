/*
https://practice.geeksforgeeks.org/problems/common-elements1132/1#
Time Complexity: O(n1 + n2 + n3) 
Space complexity: O(n1 + n2 + n3) 


*/     
void findCommon(int a[], int b[], int c[], int n1, int n2,
                int n3)
{
    // three sets to maintain frequency of elements
    unordered_set<int> uset, uset2, uset3;
    for (int i = 0; i < n1; i++) {
        uset.insert(a[i]);
    }
    for (int i = 0; i < n2; i++) {
        uset2.insert(b[i]);
    }
    // checking if elements of 3rd array are present in
    // first 2 sets
    for (int i = 0; i < n3; i++) {
        if (uset.find(c[i]) != uset.end()
            && uset2.find(c[i]) != uset.end()) {
            // using a 3rd set to prevent duplicates
            if (uset3.find(c[i]) == uset3.end())
                cout << c[i] << " ";
            uset3.insert(c[i]);
        }
    }
}
