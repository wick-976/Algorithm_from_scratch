# Kadane's Algorithm

## Problem

Our objective is to find the maximum subarray sum.

A subarray is a continuous part of an array. We cannot skip elements.

Example:

[-1, 2, 4, -3, 5, 2, -5, 2]

The maximum subarray is:

[2, 4, -3, 5, 2]

Maximum sum = 10

## Code

cpp
int best = 0;
int sum = 0;

for (int k = 0; k < n; k++)
{
    sum = max(array[k], sum + array[k]);
    best = max(best, sum);
}

cout << best << "\n";
My Understanding

The key idea is to move through the array from left to right.

At every element, we have two choices:

Start fresh from the current element.
Add the current element to the previous subarray.

We choose whichever gives the larger sum.

For the array:

[-1, 2, 4, -3, 5, 2, -5, 2]

First take -1.

Since the previous sum is 0:

sum = max(-1, 0 + (-1))
sum = -1

Now take 2:

sum = max(2, -1 + 2)
sum = 2

Here, starting fresh from 2 is better, so -1 is excluded.

Now take 4:

sum = max(4, 2 + 4)
sum = 6

Now take -3:

sum = max(-3, 6 + (-3))
sum = 3

Now take 5:

sum = max(5, 3 + 5)
sum = 8

Now take 2:

sum = max(2, 8 + 2)
sum = 10

Now take -5:

sum = max(-5, 10 + (-5))
sum = 5

Now take 2:

sum = max(2, 5 + 2)
sum = 7

The largest value we found during the process was 10.

So the maximum subarray sum is 10.

The Main Idea

At every position:

Start fresh from the current element, or
Continue the previous subarray.
sum = max(array[k], sum + array[k]);

The variable sum stores the maximum subarray sum that ends at the current position.

The variable best stores the maximum sum found anywhere so far.

best = max(best, sum);
All Negative Numbers

Consider:

[-3, -2, -5]

If the problem requires us to choose at least one element, we should initialize:

int sum = 0;
int best = nums[0];

Initially:

best = -3

At -3:

sum = max(-3, 0 + (-3))
sum = -3

best = max(-3, -3)
best = -3

At -2:

sum = max(-2, -3 + (-2))
sum = max(-2, -5)
sum = -2

best = max(-3, -2)
best = -2

At -5:

sum = max(-5, -2 + (-5))
sum = max(-5, -7)
sum = -5

best = max(-2, -5)
best = -2

Final answer = -2

Complexity

Time Complexity: O(n)

Space Complexity: O(1)

