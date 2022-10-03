import java.util.Scanner;

public class linear_search {

  public static void main(String[] args) {
    int n;
    System.out.print("Enter size of array: ");
    Scanner scanner = new Scanner(System.in);
    n = scanner.nextInt();
    int[] arr = new int[n];
    for (int i = 0; i < n; i++) {
      System.out.print("Enter element at index " + i + ": ");
      arr[i] = scanner.nextInt();
    }

    int key;
    System.out.print("Enter element to find: ");
    key = scanner.nextInt();
    boolean found = false;
    for (int i = 0; i < n; i++) {
      if (arr[i] == key) {
        System.out.println(key + " is found at index: " + i);
        found = true;
      }
    }
    if (!found) {
      System.out.println("Element not found in the array!");
    }

    scanner.close();
  }
}
