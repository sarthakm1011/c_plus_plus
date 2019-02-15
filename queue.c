/* 
 *
 * Author: Sarthak Manchanda
 * Date: 15th Feb 2019;
 * 
 * Queue Implemenentation
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int INT_MIN=0;

// A structure to represent a queue
struct Queue
{
	int front, rear, size;
	unsigned capacity;
	int* array;
};


// function to create a queue of given capacity 
// intialising the size as 0
struct Queue* createQueue(unsigned capacity) 
{
	struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
	queue->capacity = capacity;
	queue->front = queue->size = 0;
	queue->rear = capacity -1; // important for enqueue
	queue->array = (int*)malloc(queue->capacity * sizeof(int));
	return queue;
}


int isFull(struct Queue* queue) { return (queue->size == queue->capacity); }

int isEmpty(struct Queue* q) { return (q->size == 0);}

void enqueue(struct Queue* q, int item)
{
	if (isFull(q)) {return;}
	q->rear = (q->rear+1) % (q->capacity);
	q->array[q->rear] = item;
	q->size += 1;
	printf("%d enqueued to q\n", item);
}


int dequeue(struct Queue* q)
{
	if (isEmpty(q)){return INT_MIN;}
	int item = q->array[q->front];
	q->front = (q->front+1)%(q->capacity);
	q->size = q->size - 1;
	return item;
}

int front(struct Queue* q)
{
	if(isEmpty(q)){return INT_MIN;}
	return q->array[q->front];
}

int rear(struct Queue* q)
{
	if(isEmpty(q)){return INT_MIN;}
	return q->array[q->rear];
}

int main() {
	struct Queue* queue = createQueue(1000);
	enqueue(queue, 10); 
    	enqueue(queue, 20); 
    	enqueue(queue, 30); 
    	enqueue(queue, 40); 
  
    	printf("%d dequeued from queue\n\n", dequeue(queue)); 
  
    	printf("Front item is %d\n", front(queue)); 
    	printf("Rear item is %d\n", rear(queue));

	return 0;

}
