

#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <tuple>

using namespace std;

int NextX[4] = { -1, 0, 1, 0 };
int NextY[4] = { 0, 1, 0, -1 };

int FastestRoot(vector<vector<int>> board, int r1, int c1, int r2, int c2);
int Order_solution(vector<vector<int>> board, int r, int c, int answer);
int solution(vector<vector<int>> board, int r, int c);
void BFS(vector<vector<int>> board, vector<vector<int>> &arr, vector<vector<bool>> &order, int r1, int c1, queue<pair<int, int>> &q, int, int);
queue<tuple<int, int, int>> Closest(vector<vector<int>> board, int r1, int c1);

void BFS(vector<vector<int>> board, vector<vector<int>> &arr, vector<vector<bool>> &order, int r1, int c1, queue<pair<int, int>> &q, int r2, int c2)
{

	order[r1][c1] = true;

	for (int i = 0; i < 4; i++)
	{
		if (r1 + NextX[i] < 4 && r1 + NextX[i] >= 0 && c1 + NextY[i] < 4 && c1 + NextY[i] >= 0)
		{
			if (!(order[r1 + NextX[i]][c1 + NextY[i]]))
			{
				arr[r1 + NextX[i]][c1 + NextY[i]] = arr[r1][c1] + 1;
				order[r1 + NextX[i]][c1 + NextY[i]] = true;
				q.push(pair<int, int>(r1 + NextX[i], c1 + NextY[i]));
			}

			int j = 1;
			while (r1 + NextX[i] * j < 4 && r1 + NextX[i] * j >=0 && c1 + NextY[i] * j < 4 && c1 + NextY[i] * j >= 0)
			{
				if (board[r1 + NextX[i] * j][c1 + NextY[i] * j] != 0 || r1 + NextX[i] * j == 3 || r1 + NextX[i] * j == 0 || c1 + NextY[i] * j == 3 || c1 + NextY[i] * j == 0)
				{
					if (!(order[r1 + NextX[i] * j][c1 + NextY[i] * j]))
					{
						arr[r1 + NextX[i] * j][c1 + NextY[i] * j] = arr[r1][c1] + 1;
						order[r1 + NextX[i] * j][c1 + NextY[i] * j] = true;
						q.push(pair<int, int>(r1 + NextX[i] * j, c1 + NextY[i] * j));
					}
					break;
				}
				j++;
			}
		}
	}

	while (!(q.empty()))
	{
		r1 = q.front().first;
		c1 = q.front().second;
		q.pop();
		BFS(board, arr, order, r1, c1, q, r2, c2);
	}

	return;

}

queue<tuple<int, int, int>> Closest(vector<vector<int>> board, int r1, int c1)
{
	vector<vector<int>> arr = { {0, 0, 0, 0}, {0,0,0,0}, { 0,0,0,0 }, { 0, 0, 0, 0 } };
	vector<vector<bool>> order = { {false, false, false, false}, {false, false, false, false} , {false, false, false, false} , {false, false, false, false} };
	queue<pair<int, int>> q;
	queue<tuple<int, int, int>> Out;

	BFS(board, arr, order, r1, c1, q, 0, 0);

	int min = 987654321;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (board[i][j] != 0)
			{
				if (arr[i][j] < min)
				{
					while (!Out.empty())
						Out.pop();
					Out.push(make_tuple(i, j, arr[i][j]));
					min = arr[i][j];
				}
				else if (arr[i][j] == min)
				{
					Out.push(make_tuple(i, j, arr[i][j]));
				}
			}
		}
	}

	return Out;
}


int FastestRoot(vector<vector<int>> board, int r1, int c1, int r2, int c2)
{

	//	vector<vector<int>> *arr = new vector<vector<int>>;

	//	vector<vector<bool>> *order = new vector<vector<bool>>;

	vector<vector<int>> arr = { {0, 0, 0, 0}, {0,0,0,0}, { 0,0,0,0 }, { 0, 0, 0, 0 } };

	vector<vector<bool>> order = { {false, false, false, false}, {false, false, false, false} , {false, false, false, false} , {false, false, false, false} };

	queue<pair<int, int>> q;





	BFS(board, arr, order, r1, c1, q, r2, c2);




	return arr[r2][c2];



}


int Order_solution(vector<vector<int>> board, int r, int c, int answer)
{

	int dis, temp, min = 987654231;
	   
	int pre_answer = answer;
	   
	bool comple = true;

	queue < tuple<int, int, int>> q;
	tuple<int, int, int> Cl;
	   	 


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
		q = Closest(board, r, c);

		while (!q.empty())
		{
			Cl = q.front();

			temp = Order_solution(board, get<0>(Cl), get<1>(Cl), pre_answer + get<2>(Cl));
			q.pop();

			if (min > temp)
				min = temp;
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
					if (i == r && j == c)
						continue;
					r2 = i;
					c2 = j;
					break;	

				}
			}
		}


		dis = FastestRoot(board, r, c, r2, c2);
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



	vector<vector<int>> board = { {1, 1, 2, 2}, {3,3,4,4}, { 0, 0, 0, 0 }, { 5, 5, 6, 6 } };
//	vector<vector<int>> board = { {3, 0, 0, 2}, {0,0,1,0}, { 0, 1, 0, 0 }, { 2, 0, 0, 3 } };
//	vector<vector<int>> board = { {1, 0, 0, 3}, {2,0,0,0}, { 0, 0, 0, 2 }, { 3, 0, 1, 0 } };



//	vector<vector<int>> board = { {1, 0, 0, 0}, {0,0,0,0}, { 0,0,0,0 }, { 0, 0, 0, 1 } };



	int r = 0, c = 0;

	int re = solution(board, r, c);



	cout << re << endl;











	return 0;



}



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



////}

//

//int FastestRoot(vector<vector<int>> board, int r1, int c1, int r2, int c2)

//

//{

//

//	int answer = 987564321, temp, min = 987564321;

//

//

//

//	if (r1 == r2 && c1 == c2)

//

//		return dis;

//

//	else if (dis > 6)

//

//		return dis;

//

//

//

//	if (r1 != r2)

//

//	{

//

//		if (r1 > r2)

//

//		{

//

//			//일반 이동

//

//			temp = FastestRoot(board, r1 - 1, c1, r2, c2, dis + 1);

//

//			if (answer > temp)

//

//				answer = temp;

//

//

//

//			//ctrl 이동

//

//			int jump = 1;

//

//			while (board[r1 - jump][c1] == 0 && (r1 - jump) > 0)

//

//				jump++;

//

//			temp = FastestRoot(board, r1 - jump, c1, r2, c2, dis + 1);

//

//			if (answer > temp)

//

//				answer = temp;

//

//		}

//

//		else

//

//		{

//

//			temp = FastestRoot(board, r1 + 1, c1, r2, c2, dis + 1);

//

//			if (answer > temp)

//

//				answer = temp;

//

//

//

//			int jump = 1;

//

//			while (board[r1 + jump][c1] == 0 && (r1 + jump) < 3)

//

//				jump++;

//

//			temp = FastestRoot(board, r1 + jump, c1, r2, c2, dis + 1);

//

//			if (answer > temp)

//

//				answer = temp;

//

//		}

//

//	}

//

//

//

//	if (c1 != c2)

//

//	{

//

//		if (c1 > c2)

//

//		{

//

//			temp = FastestRoot(board, r1, c1 - 1, r2, c2, dis + 1);

//

//			if (answer > temp)

//

//				answer = temp;

//

//

//

//			int jump = 1;

//

//			while (board[r1][c1 - jump] == 0 && (c1 - jump) > 0)

//

//				jump++;

//

//			temp = FastestRoot(board, r1, c1 - jump, r2, c2, dis + 1);

//

//			if (answer > temp)

//

//				answer = temp;

//

//		}

//

//		else

//

//		{

//

//			temp = FastestRoot(board, r1, c1 + 1, r2, c2, dis + 1);

//

//			if (answer > temp)

//

//				answer = temp;

//

//

//

//			int jump = 1;

//

//			while (board[r1][c1 + jump] == 0 && (c1 + jump) < 3)

//

//				jump++;

//

//			temp = FastestRoot(board, r1, c1 + jump, r2, c2, dis + 1);

//

//			if (answer > temp)

//

//				answer = temp;

//

//		}

//

//	}

//

//	return answer;

//

//}