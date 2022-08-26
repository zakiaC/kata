#include <stdio.h>
#include <stdlib.h>
/*
#define N 10
static size_t count = 0;

void iterativeFibonacci(int *resArray, int n)
{
for (int i = 0; i < n; i++) {
resArray[i] = i == 0 || i == 1 ? i : resArray[i-1] + resArray[i-2];
}
}

IDictionary<type, type> numberNames = new Dictionary<type, type>()
 */


int funCallCnt = 0;

int cache[100];
void resetCache(int cache)
{
	for(int i=0; i<100; i++)
		cache[i] = 0;
}

// n'th TERM OF FIBONACCI
int fib(int n)
{
	funCallCnt++;
	if(n == 1 || n==2)
		return 1;
	else
		return fib(n-1) + fib(n-2);
}

int fibMem(int n)
{
	funCallCnt++;

	if(cache[n] == 0)
	{
		if(n == 1 || n==2)
			cache[n] = 1;
		else
			cache[n] = fibMem(n-1) + fibMem(n-2);
	}

	return cache[n];
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 25, 30, 40};

	for(int i=0; i<14; i++)
	{
		// RECURSIVE SOLn
		funCallCnt=0;
		cout << arr[i] << " : " << fib(arr[i]) << " : " << funCallCnt;

		// NON-RECURSIVE SOLn
		funCallCnt=0;
		resetCache();
		cout<<" ___ "<<fibMem(arr[i])<<" : "<<funCallCnt<<endl;
	}
}

