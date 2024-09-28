class MyCircularDeque {
private:
    int front, rear, size, capacity;
    int* arr;
    
public:
    // Constructor: Initialize deque with size k
    MyCircularDeque(int k) {
        front = -1;
        rear = -1;
        size = 0;
        capacity = k;
        arr = new int[k];
    }

    // Insert element at the front
    bool insertFront(int value) {
        if (isFull()) {
            return false;
        }
        if (front == -1) { // First insertion
            front = rear = 0;
        } else if (front == 0) {
            front = capacity - 1; // Wrap around to the end
        } else {
            front--;
        }
        arr[front] = value;
        size++;
        return true;
    }

    // Insert element at the rear
    bool insertLast(int value) {
        if (isFull()) {
            return false;
        }
        if (rear == -1) { // First insertion
            front = rear = 0;
        } else if (rear == capacity - 1) {
            rear = 0; // Wrap around to the start
        } else {
            rear++;
        }
        arr[rear] = value;
        size++;
        return true;
    }

    // Delete element from the front
    bool deleteFront() {
        if (isEmpty()) {
            return false;
        }
        if (front == rear) { // Only one element was present
            front = rear = -1;
        } else if (front == capacity - 1) {
            front = 0; // Wrap around to the start
        } else {
            front++;
        }
        size--;
        return true;
    }

    // Delete element from the rear
    bool deleteLast() {
        if (isEmpty()) {
            return false;
        }
        if (front == rear) { // Only one element was present
            front = rear = -1;
        } else if (rear == 0) {
            rear = capacity - 1; // Wrap around to the end
        } else {
            rear--;
        }
        size--;
        return true;
    }

    // Get the element at the front
    int getFront() {
        if (isEmpty()) {
            return -1;
        }
        return arr[front];
    }

    // Get the element at the rear
    int getRear() {
        if (isEmpty()) {
            return -1;
        }
        return arr[rear];
    }

    // Check if the deque is empty
    bool isEmpty() {
        return size == 0;
    }

    // Check if the deque is full
    bool isFull() {
        return size == capacity;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */
