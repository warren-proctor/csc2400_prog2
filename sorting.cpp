/* 
Warren Proctor
CSC 2400-004
Program Assignment #2 
*/


#include <chrono>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;
using namespace std::chrono; //Short cut for using tools in chrono library

void shellSort(int *, int);
void insertionSort(int *, int);
void bubbleSort(int *, int);
void selectionSort(int *, int);


/* 
	Name: Main Function
	Purpose: Driver to call the functions holding the sorting algorithms.
*/

int main()
{
	//initalize vars here
	high_resolution_clock::time_point start, end;
	int size;
	//code to create random array
	cout << "\nSize: ";
	cin >> size;
	cin.ignore();

	//code for random array generation
	int* randArr = new int[size];
	for (int i = 0; i < size; i++)
	{
		randArr[i] = rand() % 100; //this generates nums from 0 to 99
	}

	
	int* descArr = new int[size];
	for (int i = 0; i < size; i++)
	{
		descArr[i] = size - i; //this generates a descending array
	}

	int* ascArr = new int[size];
	for (int i = 0; i < size; i++) //this generates an ascending array 
	{
		ascArr[i] = i + 1;
	}


	//RANDOM SHELL
	int* randArr2 = new int[size];
    for (int i = 0; i < size; i++)//create copy before sorting
    {
        randArr2[i] = randArr[i];
    }
    start = high_resolution_clock::now();

    shellSort(randArr, size);

    end = high_resolution_clock::now();

    cout << "Shell's Sort: random, Elapsed Time: " << duration_cast<nanoseconds>(end - start).count();
	cout << " nanoseconds" << endl;
	

    //ASC SHELL
	int* ascArr2 = new int[size]; 
    for (int i = 0; i < size; i++)//create copy before sorting
    {
        ascArr2[i] = ascArr[i];
    }
    start = high_resolution_clock::now();

    shellSort(ascArr, size);

    end = high_resolution_clock::now();

    cout << "Shell's Sort: asc, Elapsed Time: " << duration_cast<nanoseconds>(end - start).count();
	cout << " nanoseconds" << endl;

    //DESC SHELL
	int* descArr2 = new int[size]; 
    for (int i = 0; i < size; i++)//create copy before sorting
    {
        descArr2[i] = descArr[i];
    }
    start = high_resolution_clock::now();

    shellSort(descArr, size);

    end = high_resolution_clock::now();

    cout << "Shell's Sort: desc, Elapsed Time: " << duration_cast<nanoseconds>(end - start).count();
	cout << " nanoseconds" << endl;
	cout << endl;

	//RANDOM INSERTION
	int* randArr3 = new int[size]; 
    for (int i = 0; i < size; i++) //create copy before sorting
    {
        randArr3[i] = randArr2[i];
    }
    start = high_resolution_clock::now();

    insertionSort(randArr2, size);

    end = high_resolution_clock::now();

    cout << "Insertion Sort: random, Elapsed Time: " << duration_cast<nanoseconds>(end - start).count();
	cout << " nanoseconds" << endl;

    //ASC INSERTION
	int* ascArr3 = new int[size];
    for (int i = 0; i < size; i++)//create copy before sorting
    {
        ascArr3[i] = ascArr2[i];
    }
    start = high_resolution_clock::now();

    insertionSort(ascArr2, size);

    end = high_resolution_clock::now();

    cout << "Insertion Sort: asc, Elapsed Time: " << duration_cast<nanoseconds>(end - start).count();
	cout << " nanoseconds" << endl;

    //DESC INSERTION
	int* descArr3 = new int[size];
    for (int i = 0; i < size; i++)//create copy before sorting
    {
        descArr3[i] = descArr2[i];
    }
    start = high_resolution_clock::now();

    insertionSort(descArr2, size);

    end = high_resolution_clock::now();

    cout << "Insertion Sort: desc, Elapsed Time: " << duration_cast<nanoseconds>(end - start).count();
	cout << " nanoseconds" << endl;
	cout << endl;
	
	//RANDOM BUBBLE
	int* randArr4 = new int[size]; 
    for (int i = 0; i < size; i++) //create copy before sorting
    {
        randArr4[i] = randArr3[i];
    }
    start = high_resolution_clock::now();
	
    bubbleSort(randArr3, size);

    end = high_resolution_clock::now();

    cout << "Bubble Sort: random, Elapsed Time: " << duration_cast<nanoseconds>(end - start).count();
	cout << " nanoseconds" << endl;

    //ASC BUBBLE
	int* ascArr4 = new int[size];
    for (int i = 0; i < size; i++)//create copy before sorting
    {
        ascArr4[i] = ascArr3[i];
    }
    start = high_resolution_clock::now();

    bubbleSort(ascArr3, size);

    end = high_resolution_clock::now();

    cout << "Bubble Sort: asc, Elapsed Time: " << duration_cast<nanoseconds>(end - start).count();
	cout << " nanoseconds" << endl;

    //DESC BUBBLE
	int* descArr4 = new int[size];
    for (int i = 0; i < size; i++)//create copy before sorting
    {
        descArr4[i] = descArr3[i];
    }
    start = high_resolution_clock::now();

    bubbleSort(descArr3, size);

    end = high_resolution_clock::now();

    cout << "Bubble Sort: desc, Elapsed Time: " << duration_cast<nanoseconds>(end - start).count();
	cout << " nanoseconds" << endl;
	cout << endl;

	//RANDOM SELECTION
	int* randArr5 = new int[size];
    for (int i = 0; i < size; i++) //create copy before sorting
    {
        randArr5[i] = randArr4[i];
    }
    start = high_resolution_clock::now();

    selectionSort(randArr4, size);

    end = high_resolution_clock::now();

    cout << "Selection Sort: random, Elapsed Time: " << duration_cast<nanoseconds>(end - start).count();
	cout << " nanoseconds" << endl;

    //ASC SELECTION
	int* ascArr5 = new int[size]; 
    for (int i = 0; i < size; i++)//create copy before sorting
    {
        ascArr5[i] = ascArr4[i];
    }
    start = high_resolution_clock::now();

    selectionSort(ascArr4, size);

    end = high_resolution_clock::now();

    cout << "Selection Sort: asc, Elapsed Time: " << duration_cast<nanoseconds>(end - start).count();
	cout << " nanoseconds" << endl;

    //DESC SELECTION
	int* descArr5 = new int[size];
    for (int i = 0; i < size; i++)//create copy before sorting
    {
        descArr5[i] = descArr4[i];
    }
    start = high_resolution_clock::now();

    selectionSort(descArr4, size);

    end = high_resolution_clock::now();

    cout << "Selection Sort: desc, Elapsed Time: " << duration_cast<nanoseconds>(end - start).count();
	cout << " nanoseconds" << endl;
	cout << endl;
    
	
	delete[] randArr;
	delete[] randArr2;
	delete[] randArr3;
	delete[] randArr4;
	delete[] randArr5;

	delete[] descArr;
	delete[] descArr2;
	delete[] descArr3;
	delete[] descArr4;
	delete[] descArr5;

	delete[] ascArr;
	delete[] ascArr2;
	delete[] ascArr3;
	delete[] ascArr4;
	delete[] ascArr5;


	return 0;
}

/*
	Name: ShellSort()
	Purpose: To sort an array using the Shell Sort algorithm.
	Input: An intger array and the size of the array.
	Output: A fully sorted integer array. 
*/
void shellSort(int *arr, int size) 
{
	int n = size;
    // Start with a large gap and reduce it over time
    for (int gap = n / 2; gap > 0; gap /= 2) 
	{
        // Perform an insertion sort for the elements at the current gap
        for (int i = gap; i < n; ++i) 
		{
            int key = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > key; j -= gap) 
			{
                arr[j] = arr[j - gap];
            }
            arr[j] = key;
        }
    }
}

/*
	Name: InsertionSort()
	Purpose: To sort an array using the insertion sort algorithm. 
	Input: An integer array and the size of the array being passed.
	Output: A fully sorted integer array.
*/
void insertionSort(int *arr, int size)
{
	int key; //key is the item that we are sorting at the moment
	int j;  //j is the position of where key should be inserted into the sorted array
	
	//i will hold the subscript of the unsorted array
	for(int i=1; i < size; i++)
	{
		key = arr[i]; //select the item to be sorted
		j = i-1; //j is the element to the furthest right of the sorted array
		while(j >= 0 && arr[j] > key) //while we haven't gone out of bounds to the left of the array and the current element is still greater than key
		{
			arr[j+1] = arr[j]; //move elements to the right of the sorted array that are greater than the item (key)
			j = j-1; //decrement j
		}
		arr[j+1] = key; //place item in final sorted position
	}
}

/*
	Name: BubbleSort()
	Purpose: To sort an integer array using the bubble sort algorithm.
	Input: An integer array and the size of the passed array.
	Output: A fully sorted integer array.
*/
void bubbleSort(int *arr, int size)
{
	int tempForSwap;
	//maxElement will hold the subscript of the last element 
	//that is to be compared to its immediate neighbor
	for(int maxElement=(size-1); maxElement > 0; maxElement--)
	{
		for(int i=0; i<maxElement; i++) //using i for "index"
		{
			//swap the two adjacent elements if the one on the left is greater than the one on the right
			if(arr[i] > arr[i+1]) 
			{
				tempForSwap = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = tempForSwap;
			}
		}
	}
}

/*
	Name: SelectionSort()
	Purpose: To sort an integer array with the selection sort algorithm. 
	Input: An integer array and the size of the array being passed.
	Output: A fully sorted integer array. 

*/
void selectionSort(int *arr, int size)
{
	int minIndex, minValue;
	int temp;  //temporary variable for swap
	
	for(int start = 0; start < (size-1); start++)
	{
		minIndex = start;
		minValue = arr[start];
		
		//find the minimum value in the array starting from start and going through the end of the array
		for(int i=start+1; i<size; i++) //using i for "index"
		{
			if(arr[i] < minValue) 
			{
				minValue = arr[i];
				minIndex = i;
			}
		}
		//now we have the index of the smallest value so swap
		temp = arr[minIndex];
		arr[minIndex] = arr[start];
		arr[start] = temp;

	}
}

