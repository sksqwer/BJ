#include <iostream>
#include <string>
#include <cmath>
using namespace std;



//1번 문제
//
//void ReverseWords(char *output, int outputArraySize, const char *input);
//
//int main()
//{
//	char in_str[1000];
//	char out_str[1000];
//	int len;
//	
//	cout << "입력값 : ";
//	cin.getline(in_str, 1000);
//
//	len = strlen(in_str);
//
//	ReverseWords(out_str, len, in_str);
//
//	cout << out_str << endl;
//
//	return 0;
//}
//
//
//void ReverseWords(char *output, int outputArraySize, const char *input)
//{
//	int post = outputArraySize, pre;
//	int ptr = 0;
//	for (int i = outputArraySize - 1; i >= 0; i--)
//	{
//
//		if (input[i] == ' ')
//		{
//			pre = i + 1;
//			for (int j = pre; j < post; j++)
//			{
//				output[ptr] = input[j];
//				ptr++;
//			}
//			output[ptr] = ' ';
//			ptr++;
//
//			post = pre - 1;
//
//		}
//		else if (i == 0)
//		{
//			pre = 0;
//			for (int j = pre; j < post; j++)
//			{
//				output[ptr] = input[j];
//				ptr++;
//			}
//
//		}
//	}
//	output[ptr] = NULL;
//
//
//}
//


// 2번 문제

//void IntToStr(char* output, int outputArraySize, int input);
//
//int main()
//{
//	int inp, size = 0, temp;
//	char out[100];
//
//	cin >> inp;
//
//	temp = inp;
//	while (temp > 0)
//	{
//		size++;
//		temp /= 10;
//	}
//
//	IntToStr(out, size, inp);
//	
//	cout << out << endl;
//
//
//	return 0;
//}
//
//
//void IntToStr(char* output, int outputArraySize, int input)
//{
//	int rest;
//
//	for (int i = outputArraySize - 1; i >= 0; i--)
//	{
//		rest = input % 10;
//		output[i] = rest+48;
//		input /= 10;
//	}
//	output[outputArraySize] = NULL;
//}

// 3번 문제

//struct ListNode
//{
//	int val;
//	ListNode* nextNode;
//	ListNode(int x = 0, ListNode* next = NULL) : val(x), nextNode(next) {}
//};
//
//ListNode* InsertionSort(ListNode * head)
//{
//	int size = 1, temp;
//
//	for (int i = 0; head[i].nextNode != NULL; i++)
//	{
//		size++;
//	}
//
//
//	//for (ListNode* itr = head; itr->nextNode == NULL; itr++)
//	//{
//	//	
//	//}
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = i + 1; j < size; j++)
//		{
//			if (head[i].val > head[j].val)
//			{
//				temp = head[i].val;
//				head[i].val = head[j].val;
//				head[j].val = temp;
//			}
//		}
//
//	}
//	return head;
//}
//
//// 문제 4
//ListNode* FindNthNodeFromLast(ListNode *head, int n)
//{
//	int size = 1;
//
//	for (int i = 0; head[i].nextNode != NULL; i++)
//	{
//		size++;
//	}
//
//	return head + size - n;
//
//}
//
//int main()
//{
//	int arr[5] = { 2,10,7,6,20 };
//	struct ListNode nd[5];
//	ListNode* head = &nd[0];
//	nd[0].val = 2;
//
//	for (int i = 0; i < 5; i++)
//	{
//		nd[i].val = arr[i];
//		if (i == 4)
//			nd[i].nextNode = NULL;
//		else
//			nd[i].nextNode = &nd[i + 1];
//	}
//	cout << "입력값 : head ";
//	for (int i = 0; i < 5; i++)
//		cout << "-> " << nd[i].val << " ";
//	cout << endl << "-------------------" << endl;
//
//	InsertionSort(head);
//	cout << "반환값 : head ";
//	for (int i = 0; i < 5; i++)
//		cout << "-> " << nd[i].val << " ";
//	cout << endl;
//	
//	cout << FindNthNodeFromLast(head, 2)->val << endl;
//
//
//	return 0;
//}
//
//struct TreeNode
//{
//	int val;
//	TreeNode* leftNode;
//	TreeNode* rightNode;
//	TreeNode(int x = 0, TreeNode* left = nullptr, TreeNode* right = nullptr)
//		:val(x), leftNode(left), rightNode(right) {}
//};
//
//void preorderTraversal(TreeNode* root)
//{
//	cout << root->val << " ";
//
//	if (root->leftNode != nullptr)
//		preorderTraversal(root->leftNode);
//	if (root->rightNode != nullptr)
//		preorderTraversal(root->rightNode);
//
//}
//
//int main()
//{
//	TreeNode tr7 = { 18 };
//	TreeNode tr6 = { 11 };
//	TreeNode tr5 = { 8 };
//	TreeNode tr4 = { 2 };
//	TreeNode tr3 = { 16, &tr6, &tr7 };
//	TreeNode tr2 = { 7, &tr4, &tr5 };
//	TreeNode tr1 = { 10, &tr2, &tr3 };
//	TreeNode *root = &tr1;
//	
//
//	cout << "반환값 : ";
//	preorderTraversal(root);
//	cout << endl;
//
//	return 0;
//}


////문제 6.
//int FindSingleNumber(int* numbers, int arraySize)
//{
//	for (int i = 0; i < arraySize; i += 2)
//	{
//		if (numbers[i] != numbers[i + 1])
//		{
//			return numbers[i];
//		}
//	}
//}
//
//
//int main()
//{
//
//	// : source code
//
//	int arr[100] = { 1,1,2,2,8,8,3,5,5,0,0 };
//	int size = 10;
//
//	cout << "입력값 : [1,1,2,2,8,8,3,5,5,0,0]" << endl;
//	cout << "반환값 : " << FindSingleNumber(arr, size) << endl;
//
//		
//
//	return 0;
//
//
//}
//

//문제 7
//
//void RotateRectangle(int **image, int width);
//
//int main()
//{
//
//	// : source code
//	int n, num = 1;
//	cin >> n;
//
//	int **rec = new int*[n];
//	for (int i = 0; i < n; i++)
//	{
//		rec[i] = new int[n];
//	}
//
//	cout << "입력값 : " << endl;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			rec[i][j] = num++;
//			cout << rec[i][j] << ",";
//		}
//
//		cout << endl;
//
//	}
//
//	RotateRectangle(rec, n);
//
//	cout << "출력값 : " << endl;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout << rec[i][j] << ",";
//		}
//
//		cout << endl;
//
//	}
//
//
//	return 0;
//
//
//}
//
//
//void RotateRectangle(int** image, int width)
//{
//
//
//	for (int i = 0; i < width; i++)
//	{
//		for (int j = 0; j < width; j++)
//		{
//			cout << image[i][j] << ",";
//		}
//
//		cout << endl;
//
//	}
//
//
//
//
//
//
//
//
//
//	int temp1, temp2, cnt = width - 1;
//	int row = 0, col = 0, b_row = 0, b_col = 0;
////	temp1 = image[width * row + col];
//	for (int i = 0; i < width / 2; i++)
//	{
//		int col_2 = b_col;
//
//		for (int j = 0; j < cnt; j++)
//		{
//			for (int k = 0; k < 4; k++)
//			{
////				temp2 = image[col] + (width - row - 1);
////				cout << temp2 << endl;
////				image[col] + (width - row - 1) = temp1;
////				temp1 = temp2;
//
//				temp2 = row;
//				row = col;
////				col = (width - temp2 - 1);
//				cout << "row : " << row << endl;
//				cout << "col : " << col << endl;
//
//			}
//			row = b_row;
//			col_2++;
//			col = col_2;
//		}
//		b_row++;
//		b_col++;
//		cnt -= 2;
//	}
//
//
//}


void RotateRectangle(int *image, int width);

int main()
{

	// : source code
	int n, num = 1;
	cin >> n;

	int *rec = new int[n * n];

	cout << "입력값 : " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			rec[n *i + j] = num++;
			printf("%3d", rec[n * i + j]);
		}

		cout << endl;

	}

	RotateRectangle(rec, n);

	cout << "출력값 : " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%3d", rec[n * i + j]);
		}

		cout << endl;

	}


	return 0;


}


void RotateRectangle(int* image, int width)
{
	int temp1, temp2, cnt = width - 1;
	int row = 0, col = 0, b_row = 0, b_col = 0;
	temp1 = image[width * row + col];
	for (int i = 0; i < width / 2; i++)
	{
		int col_2 = b_col;

		for (int j = 0; j < cnt; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				temp2 = image[width * col + (width - row - 1)];
				image[width * col + (width - row - 1)] = temp1;
				temp1 = temp2;

				temp2 = row;
				row = col;
				col = (width - temp2 - 1);

			}
			row = b_row;
			col_2++;
			col = col_2;
		}
		b_row++;
		b_col++;
		cnt -= 2;
	}


}

/*
void RotateRectangle(int* image, int width)
{
   for (int n = 0; n < width / 2; ++n)
   {
	  for (int m = n; m < width - n - 1; ++m)
	  {
		 int tmp = image[m * width + n];
		 image[m * width + n] = image[(width - n - 1) * width + m];
		 image[(width - n - 1) * width + m] = image[(width - m - 1) * width + width - n - 1];
		 image[(width - m - 1) * width + width - n - 1] = image[n * width + width - m - 1];
		 image[n * width + width - m - 1] = tmp;
	  }
   }
}

*/