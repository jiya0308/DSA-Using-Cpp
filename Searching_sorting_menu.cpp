#include <iostream>
using namespace std;

// Linear Search
int linearSearch(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key)
            return i;
    }
    return -1;
}

// Binary Search (Array must be sorted)
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == key)
            return mid;
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

// Bubble Sort
void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Display Array
void display(int arr[], int n) {
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int choice, key;

    do {
        cout << "\n----- MENU -----";
        cout << "\n1. Linear Search";
        cout << "\n2. Binary Search";
        cout << "\n3. Bubble Sort";
        cout << "\n4. Display Array";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter element to search: ";
                cin >> key;
                if(linearSearch(arr, n, key) != -1)
                    cout << "Element found\n";
                else
                    cout << "Element not found\n";
                break;

            case 2:
                cout << "Enter element to search: ";
                cin >> key;
                if(binarySearch(arr, n, key) != -1)
                    cout << "Element found (Binary Search)\n";
                else
                    cout << "Element not found\n";
                break;

            case 3:
                bubbleSort(arr, n);
                cout << "Array sorted successfully\n";
                break;

            case 4:
                display(arr, n);
                break;

            case 5:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while(choice != 5);

    return 0;
}
