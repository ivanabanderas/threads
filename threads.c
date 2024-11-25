#include <stdio.h>
#include <pthread.h>

void * printHello(void *arg){
    int hid = *((int *)arg);
    printf("Hola desde el hilo %d\n", hid);
    pthread_exit(NULL);
}

int main(){
    int NUM_THREADS = 20;
    pthread_t threadStatus[NUM_THREADS];
    int hids[NUM_THREADS];
    for(int i = 0; 1 < NUM_THREADS; i++){
        hids[i] = i;
        pthread_create(&threadStatus[i], NULL, printHello, (void *)&hids[i]);
    }
    pthread_exit(NULL);

}