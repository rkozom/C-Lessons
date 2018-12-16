#include <stdio.h>

typedef struct distance {
	unsigned int kms;
	unsigned int meters;
} Distance;

Distance add_distance(Distance* d1, Distance* d2)
{
	Distance sum;
	sum.meters = d1->meters + d2->meters;
	sum.kms = d1->kms + d2->kms;
	while (sum.meters >= 1000)
	{
		sum.meters = sum.meters % 1000;
		sum.kms += 1;
	}
	return sum;
}

Distance subtract_distance(Distance* d1, Distance* d2)
{
	Distance sub;
	if (d1->kms > d2->kms) {
		sub.meters = d1->meters - d2->meters;
		sub.kms = d1->kms - d2->kms;
	}
	else {
		sub.meters = d2->meters - d1->meters;
		sub.kms = d2->kms - d1->kms;
	}

	if (sub.meters < 0) {
		sub.kms = sub.kms - 1;
		sub.meters = sub.meters + 1000;
	}
	return sub;
}

int main()
{
	Distance d1 = {5, 300};
	Distance d2 = {3, 200};
	
	Distance sum = add_distance(&d1, &d2);
	Distance diff = subtract_distance(&d1, &d2);
	
	printf("Sum = %d km %d m\n", sum.kms, sum.meters);
	printf("Diff = %d km %d m\n", diff.kms, diff.meters);
}
