#include <iostream>
#include <vector>
using namespace std;

class Test {
    static int count;
    int id;
public:
    Test(int id) {
        count++;
        cout << count << ' ';
        if (count == id)
            throw id;
    }
    ~Test() {}
};

int Test::count = 0;

int main() {
    int n, m = 0;
    cin >> n >> m;
    vector<Test>testArray; // Using STL vector, declare testArray

        try {
            for (int i = 0; i < n; ++i)    {
                testArray.push_back(Test(m));
            }
        }
        catch(int i) // Write the catch clause
        {
            cout << "Caught " << i << endl;
        }
        return 0;
    }
