// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     int N;
//     cin >> N;

//     int A[N];
//     for (int i = 0; i < N; i++) {
//         cin >> A[i];
//     }

//     sort(A, A + N);
//     for (int i = 0; i < N; i++) {
//         cout << A[i] << " ";
//     }
//     cout << endl;

//     sort(A, A + N, greater<int>());
//     for (int i = 0; i < N; i++) {
//         cout << A[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;

// int* sort_it(int N) {
//     int* A = new int[N];
//     for (int i = 0; i < N; i++) {
//         cin >> A[i];
//     }

//     sort(A, A + N, greater<int>());
//     return A;
// }

// int main() {
//     int N;
//     cin >> N;

//     int* sortArray = sort_it(N);

//     for (int i = 0; i < N; i++) {
//         cout << sortArray[i] << " ";
//     }
//     cout << endl;

//     delete[] sortArray;

//     return 0;
// }


// #include <iostream>
// #include <sstream>
// #include <string>
// #include <algorithm>
// using namespace std;

// string sort_line(string line) {
//     stringstream ss(line);
//     string word;
//     string output = "";

//     while (ss >> word) {
//         sort(word.begin(), word.end());
//         output += word;
//     }
    
//     return output;
// }

// int main() {
//     string line;
    
//     while (getline(cin, line)) {
//         line.erase(remove_if(line.begin(), line.end(), ::isspace), line.end());
        
//         cout << sort_line(line) << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// struct Student {
//     int id;
//     string name;
//     char section;
//     int total_marks;
// };

// int main() {
//     int T;
//     cin >> T;

//     for (int t = 0; t < T; ++t) {
//         Student students[3];
        
//         for (int i = 0; i < 3; ++i) {
//             cin >> students[i].id >> students[i].name >> students[i].section >> students[i].total_marks;
//         }

//         Student best_student = students[0];

//         for (int i = 1; i < 3; ++i) {
//             if (students[i].total_marks > best_student.total_marks || 
//                 (students[i].total_marks == best_student.total_marks && students[i].id < best_student.id)) {
//                 best_student = students[i];
//             }
//         }

//         cout << best_student.id << " " << best_student.name << " " << best_student.section << " " << best_student.total_marks << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

bool findTripletSum(int arr[], int N, int S) {
    for (int i = 0; i < N - 2; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            for (int k = j + 1; k < N; k++) {
                if (arr[i] + arr[j] + arr[k] == S) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, S;
        cin >> N >> S;
        int arr[N];
        
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        if (findTripletSum(arr, N, S)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}