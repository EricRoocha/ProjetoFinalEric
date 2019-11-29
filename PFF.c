#define _GNU_SOURCE
#include <stdlib.h>
#include <malloc.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#include <sched.h>
#include <stdio.h>
#include <pthread.h>
#define FIBER_STACK 1024*64
struct c {
int saldo;
};
typedef struct c conta;
conta from, to;
int valor, valor2;

int transferencia(void *threadarg)
{
        if (from.saldo > 0);
        {
                if (from.saldo >= valor){
                        from.saldo -= valor;
                        to.saldo += valor;
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
                if (to.saldo >= valor){
                        to.saldo -= valor;
                        from.saldo += valor;
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
        int i, x, rotacao;
        from.saldo = 100;
        to.saldo = 100;

        printf( "Transferindo 1 para a conta c2\n" );

        for (i = 0; i < 50; i++) {
                valor = ( " %d ", rand() % 5) +1;

                pthread_t t1;
                pthread_create (&t1, NULL,(void*)transferencia, NULL);
                pthread_join (t1, NULL);
        }

        for (x = 0; x < 50; x++) {
		valor2 = ( "%d ", rand() % 5) +1;
                pthread_t t2;
                pthread_create (&t2, NULL,(void*)transferencia2, NULL);
                pthread_join (t2, NULL);
        }
        printf("Transferências concluídas e memória liberada.\n");
        return 0;
}

