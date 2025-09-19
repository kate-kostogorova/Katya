// Запись массива данных типа список на Java
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        ArrayList<Integer> myList = new ArrayList<>();
        myList.add(1);
        myList.add(2);
        myList.add(3);
        System.out.println(myList); // => [1, 2, 3]
    }
}

// Создание структуры данных типа стек на Java
public class MyStack<T> {
    private T[] stackArray;
    private int top;

    public MyStack(int capacity) {
        stackArray = (T[]) new Object[capacity];
        top = -1;
    }

    public void push(T item) {
        if (top == stackArray.length - 1) {
            throw new IllegalStateException("Stack overflow");
        }
        stackArray[++top] = item;
    }

    public T pop() {
        if (top == -1) {
