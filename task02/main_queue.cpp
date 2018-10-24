#include <stdio.h>

#define N 10

typedef struct  {
	int arr[N];
	int start;
	int end;
} Queue;

// Initialization
void init(Queue *queue) {
	queue->start = 0;
	queue->end = 0;
}

int inc(int pointer) {
	return (pointer + 1) % N;
	// if (pointer == N - 1) return 0;
	// else return pointer + 1;
}

bool isFull(Queue &queue) {
	return inc(queue.end) == queue.start;
}

bool isEmpty(Queue &queue) {
	return queue.start == queue.end;
}

// Adds element to queue
// Returns false if queue is full
bool enqueue(Queue &queue, int elem) {
	if (isFull(queue)) return false;
	else {
		queue.arr[queue.end] = elem;
		queue.end = inc(queue.end);
		return true;
	}
}

// Extracts element from queue
// Returns extracted element
// or -1 if queue is empty
int dequeue(Queue &queue) {
	if (isEmpty(queue)) return -1;
	else {
		int v = queue.arr[queue.start];
		queue.start = inc(queue.start);
		return v;
	}
}

int main() {
	Queue q;

	init(q);

	enqueue(q, 1);
	enqueue(q, 2);
	enqueue(q, 3);
	enqueue(q, 4);
	enqueue(q, 5);

	int n = dequeue(q);
	printf("%d", n); // 1

	printf("%d", dequeue(q)); // 2
	printf("%d", dequeue(q)); // 3
	printf("%d", dequeue(q)); // 4
	printf("%d", dequeue(q)); // 5
	printf("%d", dequeue(q)); // -1

	return 0;
}