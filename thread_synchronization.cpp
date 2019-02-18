#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>
#include <unistd.h>

pthread_t tid[2];
int counter;
pthread_mutex_t lock;  //mutex



void *trythis(void *arg) {
	
	pthread_mutex_lock(&lock); // mutex

	unsigned long i = 0;
	counter += 1;
	printf("%d job has started/n",counter);

	for (i=0; i<0xffffffff; i++);
	printf(" %d job has finished!", counter);
	
	pthread_mutex_unlock(&lock); // mutex

	return NULL;

}


int main(void) {
	int i = 0;
	int error;


	if (pthread_mutex_init(&lock, NULL) != 0) {
		printf("/n Mutex init has failed/n");
		return 1;
	}
	
	while(i < 2) {
		error = pthread_create(&(tid[i]), NULL, &trythis, NULL);
		if (error != 0) { printf("Thread can't be created: %s", strerror(error)); }
		i++;
	}
	

	pthread_join(tid[0], NULL);
	pthread_join(tid[1], NULL);
	pthread_mutex_destroy(&lock);

	return 0;
}



// There is a problem executing the above code. As 2 thread are sharing their resources so values of tid[1] could access the same segment
// that is being accessed by the first segment. 
