#include <stdio.h>
	void main()	{
    	int array1[50], array2[50], array3[100], m, n, i, j, k = 0;
    	printf("\nEnter size of array Array 1: ");
    	scanf("%d", &m);
    	printf("\nEnter sorted elements of array 1: \n");
    	for (i = 0; i < m; i++)//i=0,1,2,3
    	{
        		scanf("%d", &array1[i]);
    	}
    	printf("\nEnter size of array 2: ");
    	scanf("%d", &n);
    	printf("\nEnter sorted elements of array 2: \n");
    	for (j = 0; j < n; j++) {
        		scanf("%d", &array2[j]);
    	}
    	i = 0;
    	j = 0; 
    	while (i < m && j < n) {
        	if (array1[i] < array2[j]) {
            	array3[k] = array1[i];
            	i++;
        	}
        	else {
            	array3[k] = array2[j];
            	j++;
        	}
        		k++;
    	}
    	if (i >= m) {
        	while (j < n) {
            	array3[k] = array2[j];
            	j++;
            	k++;
        	}
    	}
    	if (j >= n) {
        	while (i < m)
        	{
            	array3[k] = array1[i];
            	i++;
            	k++;
        	}
    	}
    	printf("\nAfter merging: \n");
    	for (k = 0; k < m + n; k++)
    	{
        		printf("\t%d", array3[k]);
    	}
	}
