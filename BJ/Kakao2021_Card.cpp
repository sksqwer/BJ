#include <iostream>
#include <string>
#include <vector>

using namespace std;

int FastestRoot(vector<vector<int>> board, int r1, int c1, int r2, int c2, int dis);
int Order_solution(vector<vector<int>> board, int r, int c, int answer);
int solution(vector<vector<int>> board, int r, int c);

//int FastestRoot(vector<vector<int>> board, int r1, int c1, int r2, int c2, int dis)
//{
//	int answer = 987564321, temp, min = 987564321;
//
//	if (r1 == r2 && c1 == c2)
//		return dis;
//	else if (dis > 6)
//		return dis;
//
//	if (r1 != r2)
//	{
//		if (r1 > r2)
//		{
//			//일반 이동
//			temp = FastestRoot(board, r1 - 1, c1, r2, c2, dis + 1);
//			if (answer > temp)
//				answer = temp;
//
//			//ctrl 이동
//			int jump = 1;
//			while (board[r1 - jump][c1] == 0 && (r1 - jump) > 0)
//				jump++;
//			temp = FastestRoot(board, r1 - jump, c1, r2, c2, dis + 1);
//			if (answer > temp)
//				answer = temp;
//		}
//		else
//		{
//			temp = FastestRoot(board, r1 + 1, c1, r2, c2, dis + 1);
//			if (answer > temp)
//				answer = temp;
//
//			int jump = 1;
//			while (board[r1 + jump][c1] == 0 && (r1 + jump) < 3)
//				jump++;
//			temp = FastestRoot(board, r1 + jump, c1, r2, c2, dis + 1);
//			if (answer > temp)
//				answer = temp;
//		}
//	}
//
//	if (c1 != c2)
//	{
//		if (c1 > c2)
//		{
//			temp = FastestRoot(board, r1, c1 - 1, r2, c2, dis + 1);
//			if (answer > temp)
//				answer = temp;
//
//			int jump = 1;
//			while (board[r1][c1 - jump] == 0 && (c1 - jump) > 0)
//				jump++;
//			temp = FastestRoot(board, r1, c1 - jump, r2, c2, dis + 1);
//			if (answer > temp)
//				answer = temp;
//		}
//		else
//		{
//			temp = FastestRoot(board, r1, c1 + 1, r2, c2, dis + 1);
//			if (answer > temp)
//				answer = temp;
//
//			int jump = 1;
//			while (board[r1][c1 + jump] == 0 && (c1 + jump) < 3)
//				jump++;
//			temp = FastestRoot(board, r1, c1 + jump, r2, c2, dis + 1);
//			if (answer > temp)
//				answer = temp;
//		}
//	}
//	return answer;
//}

int FastestRoot(vector<vector<int>> board, int r1, int c1, int r2, int c2, int dis)
{
	int answer = 987564321, temp, min = 987564321;
	vector<vector<int>> arr = { {0, 0, 0, 0}, {0,0,0,0}, { 0,0,0,0 }, { 0, 0, 0, 0 } };


	for (int i = 0; i < 4; i++)
	{
		if (r1 + i > 3)
			break;
		for (int j = 0; j < 4; j++)
		{
			if (c1 + j > 3)
				break;

			if (arr[r1 + i][c1 + j] != 0)
			{
				for()
			}
		}
	}

	return answer;
}

int FastestRoot(vector<vector<int>> board, int r1, int c1, int r2, int c2, int dis)
{
	int answer = 987564321, temp, min = 987564321;

	if (r1 == r2 && c1 == c2)
		return dis;
	else if (dis > 6)
		return dis;

	if (r1 != r2)
	{
		if (r1 > r2)
		{
			//일반 이동
			temp = FastestRoot(board, r1 - 1, c1, r2, c2, dis + 1);
			if (answer > temp)
				answer = temp;

			//ctrl 이동
			int jump = 1;
			while (board[r1 - jump][c1] == 0 && (r1 - jump) > 0)
				jump++;
			temp = FastestRoot(board, r1 - jump, c1, r2, c2, dis + 1);
			if (answer > temp)
				answer = temp;
		}
		else
		{
			temp = FastestRoot(board, r1 + 1, c1, r2, c2, dis + 1);
			if (answer > temp)
				answer = temp;

			int jump = 1;
			while (board[r1 + jump][c1] == 0 && (r1 + jump) < 3)
				jump++;
			temp = FastestRoot(board, r1 + jump, c1, r2, c2, dis + 1);
			if (answer > temp)
				answer = temp;
		}
	}

	if (c1 != c2)
	{
		if (c1 > c2)
		{
			temp = FastestRoot(board, r1, c1 - 1, r2, c2, dis + 1);
			if (answer > temp)
				answer = temp;

			int jump = 1;
			while (board[r1][c1 - jump] == 0 && (c1 - jump) > 0)
				jump++;
			temp = FastestRoot(board, r1, c1 - jump, r2, c2, dis + 1);
			if (answer > temp)
				answer = temp;
		}
		else
		{
			temp = FastestRoot(board, r1, c1 + 1, r2, c2, dis + 1);
			if (answer > temp)
				answer = temp;

			int jump = 1;
			while (board[r1][c1 + jump] == 0 && (c1 + jump) < 3)
				jump++;
			temp = FastestRoot(board, r1, c1 + jump, r2, c2, dis + 1);
			if (answer > temp)
				answer = temp;
		}
	}
	return answer;
}

int Order_solution(vector<vector<int>> board, int r, int c, int answer)
{
	int dis, temp, min = 987654231;
	int pre_answer = answer;
	bool comple = true;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (board[i][j] != 0)
			{
				comple = false;
				break;
			}
		}
		if (!comple)
			break;
	}
	if (comple)
		return answer;



	if (board[r][c] == 0)
	{
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (board[i][j] == 0)
					continue;

				dis = FastestRoot(board, r, c, i, j, 0);
				temp = Order_solution(board, i, j, pre_answer + dis);

				if (min > temp)
					min = temp;


			}
		}
	}
	else
	{
		int r2, c2;
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (board[i][j] == board[r][c])
				{
					r2 = i;
					c2 = j;
					break;
				}
			}
		}

		dis = FastestRoot(board, r, c, r2, c2, 0);
		board[r2][c2] = 0;
		board[r][c] = 0;

		temp = Order_solution(board, r2, c2, pre_answer + dis);
		temp += 2;
		if (min > temp || min == 0)
			min = temp;



	}
	answer = min;
	return answer;

}


int solution(vector<vector<int>> board, int r, int c) {
	int answer = 0, temp;

	answer = Order_solution(board, r, c, answer);


	return answer;
}

int main()
{
//	vector<vector<int>> board = {{1, 1, 2, 2}, {3,3,4,4}, { 5, 5, 6, 6 }, { 0, 0, 0, 0 }};
	vector<vector<int>> board = {{1, 0, 0, 0}, {0,0,0,0}, { 0,0,0,0 }, { 0, 0, 0, 1 }};
	int r = 0, c = 0;

	int re = solution(board, r, c);
	cout << re << endl;


	return 0;
}




/*if (r1 + 1 < 4)
{
	if (!(order[r1 + 1][c1]))
	{
		arr[r1 + 1][c1] = arr[r1][c1] + 1;
		order[r1 + 1][c1] = true;
		q.push(pair<int, int>(r1 + 1, c1));
	}
	int i = 1;

	while (r1 + i < 4)
	{
		if (board[r1 + i][c1] != 0 || r1 + i == 3)
		{
			if (!(order[r1 + i][c1]))
			{
				arr[r1 + i][c1] = arr[r1][c1] + 1;
				order[r1 + i][c1] = true;
				q.push(pair<int, int>(r1 + i, c1));
			}
			break;
		}
		i++;
	}
}

if (r1 - 1 >= 0)
{
	if (!(order[r1 - 1][c1]))
	{
		arr[r1 - 1][c1] = arr[r1][c1] + 1;
		order[r1 - 1][c1] = true;
		q.push(pair<int, int>(r1 - 1, c1));
	}
	int i = 1;

	while (r1 - i >= 0)
	{
		if (board[r1 - i][c1] != 0 || r1 - i == 0)
		{
			if (!(order[r1 - i][c1]))
			{
				arr[r1 - i][c1] = arr[r1][c1] + 1;
				order[r1 - i][c1] = true;
				q.push(pair<int, int>(r1 - i, c1));
			}
			break;
		}
		i++;
	}
}

if (c1 + 1 < 4)
{
	if (!(order[r1][c1 + 1]))
	{
		arr[r1][c1 + 1] = arr[r1][c1] + 1;
		order[r1][c1 + 1] = true;
		q.push(pair<int, int>(r1, c1 + 1));
	}

	int i = 1;

	while (c1 + i < 4)
	{
		if (board[r1][c1 + i] != 0 || c1 + i == 3)
		{
			if (!(order[r1][c1 + i]))
			{
				arr[r1][c1 + i] = arr[r1][c1] + 1;
				order[r1][c1 + i] = true;
				q.push(pair<int, int>(r1, c1 + i));
			}
			break;
		}
		i++;
	}
}

if (c1 - 1 >= 0)
{
	if (!(order[r1][c1 - 1]))
	{
		arr[r1][c1 - 1] = arr[r1][c1] + 1;
		order[r1][c1 - 1] = true;
		q.push(pair<int, int>(r1, c1 - 1));
	}
	int i = 1;
	while (c1 - i >= 0)
	{
		if (board[r1][c1 - i] != 0 || c1 - i == 0)
		{
			if (!(order[r1][c1 - i]))
			{
				arr[r1][c1 - i] = arr[r1][c1] + 1;
				order[r1][c1 - i] = true;
				q.push(make_pair(r1, c1 - i));
			}
			break;
		}
		i++;
	}
}*/
