
#include <iostream>
using namespace std;



//void Hello() {
//    cout << "hello" << endl;
//}
//
//void star(int count) {
//
//    for (int i = 0; i < count; i++)
//    {
//        cout << "* ";
//    }
//    cout << endl;
//}
//
//void anyLine(char symbol,int count) {
//    for (int i = 0; i < count; i++)
//    {
//        cout << symbol << " ";
//    }cout << endl;
//}
//int myPow(int number, int step) {
//    int pow = 1;
//    for (int i = 0; i < step; i++)
//    {
//        pow *= number;
//    }
//    cout << "pow num " << number << "=" << pow << endl;
//    return pow;
//}
//
//int max(int a, int b) {
//  /*  if (a>b)
//    {
//        return a;
//    }
//    else
//    {
//        return b;
//    }*/
//    return (a > b) ? a : b;
//}
//
//int min(int a, int b) {
//    return(a < b) ? a : b;
//}
//
//void second() {
//    cout << "second +" << endl;
//}
//void first() {
//    cout << "first start" << endl;
//    second();
//    cout << "first end" << endl;
//
//}
//
//int change(int a, int b) {
//    int temp = a;
//    a = b;
//    b = temp;
//    return 0;
//}
//
//void initArray(int arr[], int size) {
//    for (int i = 0; i < size; i++)
//    {
//        arr[i] = rand() % 100;
//    }
//}
//void showArray(int arr[], int size) {
//    for (int i = 0; i < size; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//
//int sumaArray(int arr[], int size) {
//    int summa = 0;
//    for (int i = 0; i < size; i++)
//    {
//        summa += arr[i];
//    }
//    return summa;
//}
//void initMatrix(int arr[][7], int rows, int cols) {
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            arr[i][j] = rand() % 90 + 10;
//        }
//    }
//}
//
//void showMatrix(int arr[][7], int rows, int cols) {
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//
//
//void hello() {
//    cout << "hello" << endl;
//}




















void square(int n, int k);

void fac(int num);

void isSimple(int num);

void cub(int num);

void max(int a, int b);

void isNeg(int num);


int main()
{
    
 srand(time(0));

 //int a = 5;
 //if (a==5)
 //{
 //    int b = 3;
 //    cout << b;
 //}





 //const int rows = 5;
 //const int cols = 7;
 //int array[rows][cols];

 //initMatrix(array, rows, cols);
 //showMatrix(array, rows, cols);




   
    //const int size = 10;
    //int arr[size];

    //initArray(arr, size);
    //showArray(arr, size);
    //int suma = sumaArray(arr, size);
    //cout << "summ="<<suma << endl;




    //int a = 7, b = 3;
    //cout << "a=" << a << "b="<<b << endl;
    //change(7, 3);
    //cout << "a=" << a << "b=" << b << endl;
    /*int res=myPow(2, 3);
    cout << res;
    hello();
    star(7);
    anyLine('o', 7);

    cout << max(4,5);
    cout << min(9, 5);
    first();*/






































 //1
    //square(3, 4);

 //2
 //fac(4);

 //3

 //isSimple(29);

 //4

 //cub(4);

 //5

//max(2, 4);

//6

//isNeg(-9);


//2.2

const int size = 10;
    int arr[size];

    fillArray(arr[], size);
    showArray(arr[],size)//переробити ту задачу де треба повернкти від'ємне і додатнє

}
void square(int n, int k) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}


void fac(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    cout << "factorial=" << fact << endl;
}

void isSimple(int num) {
    bool simple = true;

    if (num<2)
    {
        simple = false;
    }

    for (int i = 2; i < num; i++)
    {
        if (num%i==0)
        {
            simple = false;
            break;
        }
    }
    if (simple)
    {
        cout << "num is simple" << endl;
    }
    else
    {
        cout << "num is not simple" << endl;
    }
}


void cub(int num) {
    num=num* num* num;
    cout << "cube= " << num << endl;
}

void max(int a, int b) {
    if (a>b)
    {
        cout << a << ">" << b << endl;
    }
    else if(b>a)
    {
        cout << b << ">" << a << endl;
    }
    else
    {
        cout << "error" << endl;
    }
}

void isNeg(int num) {
    if (num>0)
    {
        cout <<num<< " is positive" << endl;
    }
    else if (num<0)
    {
        cout <<num<< " is negative" << endl;
    }
    else
    {
        cout << "error";
    }
}


//2.2
void fillArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
}
void showArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}




