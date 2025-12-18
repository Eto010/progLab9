#include <stdio.h>
int[] SortQuick(int[] arr)
{
    if(arr.Length < 2) { return arr;}

    int support = arr[0];

    int[] left = SortQuick(arr.Where(x => x < support).ToArray());
    int[] right = SortQuick(arr.Where(x => x > support).ToArray());
    int[] center = arr.Where(x => x == support).ToArray();

    return left.Concat(center).Concat(right).ToArray();
}