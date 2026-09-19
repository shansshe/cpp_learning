// easy
// You are climbing a staircase. It takes n steps to reach the top.
// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

// Example 1:
// Input: n = 2
// Output: 2
// Explanation: There are two ways to climb to the top.
// 1. 1 step + 1 step
// 2. 2 steps

// Example 2:
// Input: n = 3
// Output: 3
// Explanation: There are three ways to climb to the top.
// 1. 1 step + 1 step + 1 step
// 2. 1 step + 2 steps
// 3. 2 steps + 1 step

// Constraints:
// 1 <= n <= 45

// clang++ 70_climbing-stairs.cpp -o 70_climbing-stairs
// ./70_climbing-stairs
#include <iostream>
using namespace std;

// 1. Fibonacci
int stairs(int n) {
    if (n == 2) {
        return 2;
    }
    else if (n == 1) {
        return 1;
    }
    // f(n) = f(n-1) + f(n-2)
    else {
        return stairs(n - 1) + stairs(n - 2);
    }
}

int main() {
    int n;
    cout << "n:";
    cin >> n;
    cout << stairs(n) << "\n";
    return 0;
}

// 2. DP
