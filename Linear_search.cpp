// #include <iostream>
// using namespace std;

// void linearSearch(int A[], int N, int VAL) {
//     // Step 1: Initialize
//     int POS = -1;
//     int I = 0;

//     // Step 3: Repeat Step 4 while I < N
//     while (I < N) {
//         // Step 4: If A[I] = VAL
//         if (A[I] == VAL) {
//             POS = I;  // Set POS = I
//             cout << "Value found at position: " << POS << endl; // Print position
//             return;  // Go to Step 6 (Exit)
//         }
//         I = I + 1;  // Increment I
//     }

//     // Step 5: If POS = -1
//     if (POS == -1) {
//         cout << "Value is not present in the array" << endl;
//     }



//     // Step 6: Exit
// }

// int main() {
//     int N, VAL;
//     cout << "Enter the number of elements in the array: ";
//     cin >> N;

//     int A[N];
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < N; i++) {
//         cin >> A[i];
//     }

//     cout << "Enter the value to search: ";
//     cin >> VAL;

//     // Call the linear search function
//     linearSearch(A, N, VAL);

//     return 0;
// }


// // easy way  to do a linear search 
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 30, 20, 40, 4, 5};
    int data = 10 ;
    int n = 6 ;
    bool found = false; 
   

    // Start searching
    for (int i = 0; i < n; i++) {
        if (arr[i] == data) {
            cout << "Element found at index: " << i << endl;
            found= true;

            break; 
        }
    }
        if(!found)
    {

        cout<<"element is not there"<<endl;
        }


}




