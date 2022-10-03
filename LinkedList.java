import java.util.Scanner;

class Node {

  int data;
  Node ptr;

  Node() {}

  Node(int x) {
    data = x;
    ptr = null;
  }
}

public class LinkedList {

  static Scanner sc = new Scanner(System.in);
  static Node start = null;

  public static void main(String[] args) {
    int c = 1;

    while (c > 0 && c < 3) {
      System.out.println("1. Insertion after Node\n2. Display \n");
      System.out.print(">");
      c = sc.nextInt();

      switch (c) {
        case 1:
          insertion();
          break;
        case 2:
          display();
          break;
      }
    }
  }

  static void insertion() {
    System.out.println("Enter data: ");
    int item = sc.nextInt();
    Node new_node = new Node(item);

    Node prev = null;
    Node curr = start;

    while (curr != null && curr.data <= item) {
      prev = curr;
      curr = curr.ptr;
    }

    if (prev == null) {
      new_node.ptr = start;
      start = new_node;
    } else {
      new_node.ptr = prev.ptr;
      prev.ptr = new_node;
    }
  }

  static void display() {
    Node temp = start;
    System.out.println("Elements are: ");
    while (temp != null) {
      System.out.print(temp.data);
      if (temp.ptr != null) {
        System.out.print(" -> ");
      }
      temp = temp.ptr;
    }
    System.out.println();
  }
}
