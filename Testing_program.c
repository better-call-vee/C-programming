#include <stdio.h>
#include <limits.h>

int main()
{
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        int n;  // Number of elements in the array
        scanf("%d", &n);

        int a[n];  // Array of integers
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        // Initialize maximum and minimum values
        long long max_product = INT_MIN;
        long long min_product = INT_MAX;
        long long max_sum = INT_MIN;
        long long min_sum = INT_MAX;

        // Find the maximum and minimum elements in the array
        int max_elem = INT_MIN;
        int min_elem = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > max_elem) max_elem = a[i];
            if (a[i] < min_elem) min_elem = a[i];
        }

        // Update maximum and minimum product and sum using the maximum and minimum elements
        max_product = (long long)max_elem * max_elem;
        min_product = (long long)min_elem * min_elem;
        max_sum = (long long)max_elem + max_elem;
        min_sum = (long long)min_elem + min_elem;

        // Loop through all pairs of elements in the array, excluding the maximum and minimum elements
        for (int i = 0; i < n; i++)
        {
            if (a[i] == max_elem || a[i] == min_elem) continue;
            for (int j = i+1; j < n; j++)
            {
                if (a[j] == max_elem || a[j] == min_elem) continue;

                // Update maximum and minimum product
                long long product = (long long)a[i] * a[j];
                if (product > max_product) max_product = product;
                if (product < min_product) min_product = product;

                // Update maximum and minimum sum
                long long sum = (long long)a[i] + a[j];
                if (sum > max_sum) max_sum = sum;
                if (sum < min_sum) min_sum = sum;
            }
        }


        printf("%d %d %d %d\n", max_product, min_product, max_sum, min_sum);
    }
    return 0;
}
