#define _GNU_SOURCE
#include <stdlib.h>
#include <malloc.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#include <sched.h>
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <stdbool.h>

#define FIBER_STACK 1024*64
struct c {
int saldo;
};
typedef struct c conta;
conta from, to;
int valorrand1, valorrand2;

int transferencia(void *threadarg)
{
	if (from.saldo > 0);
	{
        	if (from.saldo >= valorrand2){
                	from.saldo -= valorrand2;
                	to.saldo += valorrand2;
        	}
	}
        printf("Transferência concluída com sucesso!\n");
        printf("Saldo de c1: %d\n", from.saldo);
        printf("Saldo de c2: %d\n", to.saldo);
        return 0;
        pthread_exit(0);
}

int transferencia2(void *threadarg)
{
        if (to.saldo > 0);
        {
                if (to.saldo >= valorrand2){
                        to.saldo -= valorrand2;
                        from.saldo += valorrand2;
                }
        }
        printf("Transferência concluída com sucesso!\n");
        printf("Saldo de c1: %d\n", from.saldo);
        printf("Saldo de c2: %d\n", to.saldo);
        return 0;
        pthread_exit(0);
}

int main()
{
	void* stack;
	pid_t pid;
	int i, j;

	from.saldo = 100;
        to.saldo = 100;

	printf( "Transferindo 1 para a conta c2\n" );

        valorrand1 = rand();
	valorrand2 = rand();

	for  (i = 0; i < 100; i++);
	{ 

		if (valorrand1 == 0); {
			pthread_t t1;
        	        pthread_create (&t1, NULL,(void*)transferencia, NULL);
                	pthread_join (t1, NULL);
        	}

		if (valorrand1 == 1); {
			pthread_t t2;
       	        	pthread_create (&t2, NULL,(void*)transferencia2, NULL);
               		pthread_join (t2, NULL);
		}
	}

        printf("Transferências concluídas e memória liberada.\n");
        return 0;
}

