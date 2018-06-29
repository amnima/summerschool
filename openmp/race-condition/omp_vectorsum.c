#include <time.h>

#define NX 102400

int main(void)
{
    long vecA[NX];
    long sum, psum, sumex;
    int i;
    clock_t start_clock;

    /* Initialization of the vectors */
    for (i = 0; i < NX; i++) {
        vecA[i] = (long) i + 1;
    }

    sumex = (long) NX * (NX + 1) / ((long) 2);
    printf("Arithmetic sum formula (exact):                  %ld\n",
           sumex);

    sum = 0.0;
    for (i = 0; i < NX; i++) {
        sum += vecA[i];
    }
    printf("Sum for serial computation: %ld\n", sum);


    sum = 0.0;
    /* TODO: Parallelize computation */
    //#pragma omp parallel for default(shared) private(i)
    //#pragma omp parallel for shared(vecA,sum,psum,sumex) private(i) reduction(+:sum)


#pragma omp parallel shared(vecA,sum,sumex) private(psum,i)
{
    psum = 0.0;
    start_clock = clock();
#pragma omp for
    for (i = 0; i < NX; i++) {
        psum += vecA[i];
    }
#pragma omp critical(par_sum)
    sum +=psum;
}

    printf("sum for parallel computation: %ld \n", sum);
    /* Determine the CPU time used for the iteration */
    printf("Iteration took %.3f seconds.\n", (double)(clock() - start_clock) /
           (double)CLOCKS_PER_SEC);

    return 0;
}

