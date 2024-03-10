#include <stdio.h>
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
}
