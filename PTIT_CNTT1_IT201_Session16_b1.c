#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct Node* next;
}Node;


typedef struct {
    Node* front;
    Node* rear;
}Queue;
Queue* createQueue() {
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    queue->front = NULL;
    queue->rear = NULL;
    return queue;
}

int main() {
    Queue* queue = createQueue();
    if (queue->front == NULL && queue->rear == NULL) {
        printf("hang doi da duoc khoi tao rong\n");
    }
    return 0;
}
