#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        auto i = nums1.begin();
        auto j = nums2.begin();
        vector<double> final;
        while (i != nums1.end() && j != nums2.end())
        {
            if (*i >= *j)
            {
                final.push_back(*j);
                j++;
            }
            else
            {
                final.push_back(*i);
                i++;
            }
        }
        while (i != nums1.end())
        {
            final.push_back(*i);
            i++;
        }
        while (j != nums2.end())
        {
            final.push_back(*j);
            j++;
        }
        if (final.size() % 2 == 0)
        {
            return (final[(final.size() / 2) - 1] + final[(final.size() / 2)]) / 2;
        }
        else
        {
            return (final[((final.size() + 1) / 2) - 1]);
        }
    }
};

// class Sol2
// {
// public:
//     double median(vector<int> &nums1, vector<int> &nums2)
//     {
//         auto i = nums1.begin();
//         auto j = nums2.begin();
//         while (i != nums1.end() && j != nums2.end())
//         {
//             if (*i > *j)
//             {
//                 *i = *i + *j;
//                 *j = *i - *j;
//                 *i = *i - *j;
//                 *j++;
//             }
//             else
//             {
//                 i++;
//             }
//         }
//         if (i == nums1.end() && j != nums2.end())
//         {
//             i = nums2.begin();
//             while (j != nums2.end())
//             {
//                 if (*i > *j)
//                 {
//                     *i = *i + *j;
//                     *j = *i - *j;
//                     *i = *i - *j;
//                     *j++;
//                 }
//                 else
//                 {
//                     i++;
//                 }
//             }
//         }
//     }
// };
int main()
{
    vector<int> a = {1,1};
    vector<int> b = {2,2};
    Solution obj;
    cout << obj.findMedianSortedArrays(a, b);
}