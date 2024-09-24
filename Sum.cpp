#include <iostream>
#include <vector>

int calculateSum(const std::vector<int>& numbers) {
    int sum = 0;
    for (int num : numbers) {
        sum += num;
    }
    return sum;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int sum = calculateSum(numbers);
    std::cout << "The sum of the numbers is: " << sum << std::endl;
    return 0;
}



#include <iostream>

bool isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return true;
            } else {
                return false;
            }
        } else {
            return true;
        }
    } else {
        return false;
    }
}

