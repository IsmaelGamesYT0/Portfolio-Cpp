#include <iostream>
#include <vector>

int binary_search(const std::vector<int>& a, int target) {
    int l = 0, r = (int)a.size() - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (a[mid] == target) return mid;
        if (a[mid] < target) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

int main() {
    std::vector<int> a = {1, 3, 5, 7, 9, 11, 13};
    int target = 9;

    int idx = binary_search(a, target);
    if (idx != -1) std::cout << "Found " << target << " at index " << idx << "\n";
    else std::cout << "Not found\n";
}
