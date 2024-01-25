#include<iostream>
using namespace std;

const int MAX_SIZE = 50;

int arr[MAX_SIZE][MAX_SIZE];
int m, n;
void input()
{
    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            cin >> arr[i][j];
}
void display()
{
    cout << "Matrix elements:" << endl;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}
int sum()
{
    int total = 0;
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            total += arr[i][j];
    return total;
}

void row_sum()
{
    cout << "Row-wise sum:" << endl;
    for (int i = 0; i < m; ++i)
    {
        int row_sum = 0;
        for (int j = 0; j < n; ++j)
            row_sum += arr[i][j];
        cout << row_sum << " ";
    }
    cout << endl;
}

void column_sum()
{
    cout << "Column-wise sum:" << endl;
    for (int j = 0; j < n; ++j)
    {
        int col_sum = 0;
        for (int i = 0; i < m; ++i)
            col_sum += arr[i][j];
        cout << col_sum << " ";
    }
    cout << endl;
}

void transpose()
{
    int transposed[MAX_SIZE][MAX_SIZE];
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            transposed[j][i] = arr[i][j];

    cout << "Transpose of the matrix:" << endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            cout << transposed[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    int choice;
    cout << "Enter size of rows: ";
    cin >> m;
    cout << "Enter size of columns: ";
    cin >> n;

    cout << "Following Options are available" << endl;
    cout << "1. Input Elements " << endl;
    cout << "2. Display Elements " << endl;
    cout << "3. Sum of all Elements" << endl;
    cout << "4. Display Row-Wise Sum of Elements" << endl;
    cout << "5. Display Column-Wise Sum of Elements" << endl;
    cout << "6. Creating Transpose of matrix" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        input();
        break;
    case 2:
        display();
        break;
    case 3:
        cout << "Sum of all Elements: " << sum() << endl;
        break;
    case 4:
        row_sum();
        break;
    case 5:
        column_sum();
        break;
    case 6:
        transpose();
        break;
    default:
        cout << "Invalid choice" << endl;
    }

    return 0;
}