#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}
struct Stack {
    struct Node* top;
};
void initializeStack(struct Stack* stack) {
    stack->top = NULL;
}
int isEmpty(struct Stack* stack) {
    return stack->top == NULL;
}
void push(struct Stack* stack, int value) {
    struct Node* newNode = createNode(value);
    newNode->next = stack->top;
    stack->top = newNode;
    printf("%d pushed to the stack\n", value);
}
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        exit(EXIT_FAILURE);
    }
    struct Node* temp = stack->top;
    int poppedValue = temp->data;
    stack->top = temp->next;
    free(temp);
    return poppedValue;
}
void displayStack(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return;
    }
    struct Node* current = stack->top;
    printf("Stack elements: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}
int main() {
    struct Stack stack;
    initializeStack(&stack);
    int choice, value;
    do {
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the value to push: ");
                scanf("%d", &value);
                push(&stack, value);
                break;
            case 2:
                printf("Popped element: %d\n", pop(&stack));
                break;
            case 3:
                displayStack(&stack);
                break;
            case 4:
                printf("Exiting program\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 4);
    return 0;
}