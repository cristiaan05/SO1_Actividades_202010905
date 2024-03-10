# Preguntas
<u>a)¿Cuántos procesos únicos son creados?</u>
    Se crean 3 procesos únicos en total.

<u>b)¿Cuántos hilos únicos son creados?</u>
    Se crea 1 hilo único en el proceso hijo.

# Código fuente
    ```#include <stdio.h>
    #include <stdlib.h>
    #include <pthread.h>
    #include <unistd.h>


    void *thread_function(void *arg) {
    printf("Hilo creado en el proceso hijo\n");
    return NULL;
    }

    int main() {
    pid_t pid;

    pid = fork();
    if (pid == 0) { /* proceso hijo */
        fork();
        pthread_t tid;
        pthread_create(&tid, NULL, thread_function, NULL);
        pthread_join(tid, NULL);
    }

    return 0;
    }```
