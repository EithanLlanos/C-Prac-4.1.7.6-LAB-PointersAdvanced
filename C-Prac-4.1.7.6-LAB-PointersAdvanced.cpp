//Scenario
//Check the program in the editor.It copies values from one array to another, adding 1.0.Then it's supposed to print the numbers from the middle point of the new array to both ends, alternately.
//Warning: the midpoint is betwen two cells - one before and one after - start with them.
//We'll use pointers to make a copy, in order to show you this kind of operation (but in this case, you can use array indexing).
//Find all possible compilation errors and logic errors.Fix them.Your version of the program must print the same result as the expected output.
//Before you use the compiler, try to find the errors only by manual code analysis.
//
////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Code
//#include <stdio.h>
//
//int main()
//{
//	int i;
//	float numbers[10] = { 3.3, 4.4, 5.2, 2.3, 4.5, 6.8, 9.8, 8.2, 7.5, 9.2 };
//	float biggerNumbers[10];
//	float* source = numbers;
//	float* copy = biggerNumbers;
//	for (i = 0; i < 10; i++)
//	{
//		*copy = *source;
//		copy--;
//		source++;
//	}
//	float* biggerEnd = copy;
//	float* bigger Start = bigger Numbers;
//	float* middle1 = biggerNumbers + 5;
//	float* middle2 = middle1 + 5;
//	for (; middle1 >= biggerStart; middle1++, middle2++)
//	{
//		printf("%.1f\n", *middle1);
//		printf("%.1f\n", *middle2);
//	}
//	return 0;
//}
// 
//Expected output
//4.5
//6.8
//2.3
//9.8
//5.2
//8.2
//4.4
//7.5
//3.3
//9.2
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main(void) {
	float numbers[10] = { 3.3, 4.4, 5.2, 2.3, 4.5, 6.8, 9.8, 8.2, 7.5,9.2 };
	float biggerNumbers[10];
	float* source = numbers;
	float* copy = biggerNumbers;

	for (int i = 0; i < 10; i++) {
		*copy = *source;
		copy++;
		source++;

	}
	float* biggerEnd = copy;
	float* biggerStart = biggerNumbers;
	float* middle1 = biggerNumbers +4;
	float* middle2 = middle1 + 1;

	for (; middle1 >= biggerStart; middle1--, middle2++) {
	//for (int i=0; i < 5 ; middle1--, middle2++,i++) {
		printf("%.1f\n", *middle1);
		printf("%.1f\n", *middle2);
	}



	//Just a note for myself, i correct this code on my own, thinkin is gonna be so different than the actual solution, it turns to this code is exactly than the correct answer.
//#include <stdio.h>
//
//	int main(void)
//	{
//		int i;
//		float numbers[10] = { 3.3, 4.4, 5.2, 2.3, 4.5, 6.8, 9.8, 8.2, 7.5, 9.2 };
//		float biggerNumbers[10];
//		float* source = numbers;
//		float* copy = biggerNumbers;
//		for (i = 0; i < 10; i++)
//		{
//			*copy = *source;
//			copy++;
//			source++;
//		}
//		float* biggerEnd = copy;
//		float* biggerStart = biggerNumbers;
//		float* middle1 = biggerNumbers + 4;
//		float* middle2 = middle1 + 1;
//		for (; middle1 >= biggerStart; middle1--, middle2++)
//		{
//			printf("%.1f\n", *middle1);
//			printf("%.1f\n", *middle2);
//		}
//		return 0;
//	}