#include “tbb/task_scheduler_init.h”
// Підключення необхідних заголовних файлів
using namespace tbb;

const int N = 100000;
float a[N];
float b[N];
void SortExample()
{
	for (int i = 0; i < N; i++)
	{
		a[i] = sin((double)i);
		b[i] = cos((double)i);
	}
	parallel_sort(a, a + N);
	parallel_sort(b, b + N, std::greater<float>());
}
int main()
{
	task_scheduler_init init;
	// Обчислення
	return 0;
}