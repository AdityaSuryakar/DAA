Skip to main content
Google Classroom
Classroom
SY DAA
  
Home
Calendar
Enrolled
To-do
S
SY AIML B
S
SY DAA
S
SY(AIML)2024-25 MDM
Semester II
S
SY AIML SEM-4
01AML252-ITBM
S
SY-2024-25-AIML-Div B-ANN
S
SY_MDM
O
Object Oriented Programming Lab
01AMP213
S
SY(AIML)-2024
NPTEL
S
SY
S
SY-AIML-DS Lab-Div B
S
SY(AIML)_2024-25
MDM
P
Programs [DSA]
O
OSY_SY_CSE(AIML)_B
01AML203
S
SY_Btech(B_Div)
Python Programming
S
SY-AIML-IAI-Div B-2024-25
F
FY-DIV G-2023-24
Archived classes
Settings
2025-Experiment No.2Assignment details
#include <stdio.h>
#include <math.h>

void merge(int arr[], int low, int mid, int high) 
{
    int n1, n2, i, j, k;
    n1 = mid - low + 1;
    n2 = high - mid;
    int l[n1 + 1];
    int r[n2 + 1];
    for (i = 0; i < n1; i++) 
	{
        l[i] = arr[low + i];
    }
    for (j = 0; j < n2; j++) 
	{
        r[j] = arr[mid + 1 + j];
    }
    l[n1] = INFINITY;
    r[n2] = INFINITY;
    i = 0;
    j = 0;
    for (k = low; k <= high; k++) 
	{
        if (l[i] <= r[j]) 
		{
            arr[k] = l[i];
            i++;
        } 
		else 
		{
            arr[k] = r[j];
            j++;
        }
    }
}
void merge_sort(int arr[], int low, int high) 
{
    int mid;
    if (low < high) 
	{
        mid = (low + high) / 2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main() 
{
    int size, i;
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements:\n");
    for (i = 0; i < size; i++) 
	{
        scanf("%d", &arr[i]);
    }
    merge_sort(arr, 0, size - 1);
    for (i = 0; i < size; i++) 
	{
        printf("%d ", arr[i]);
    }
    return 0;
}

DAA_Exp-2(23UAM132).c
Displaying DAA_Exp-2(23UAM132).c.
2025-Experiment No.2
Dhanashri Kulkarni
•
Feb 6 (Edited Feb 6)
100 points
Due Today
Upload Code of Experiment nO.2
Class comments
Your work
Turned in

DAA_Exp-2(23UAM132).c
C
Private comments
