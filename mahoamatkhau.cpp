#include <iostream>
#include<math.h>
#include <sstream>
#include<string>
using namespace std;
int matkhau[30];
void main_()
{
	bool dungmatkhau = true;
	//Lập một biểu thức: giả sử là (x^3+19*x-17)/13 để mã hóa chuỗi mật khau nhap vao
	string mkhau, mkbd = "asdfghjkl";
	int mkhaubd[30];
	for (int i = 0; i < mkbd.length(); i++)
	{
		mkhaubd[i] = (char)mkbd[i];
		mkhaubd[i] = (mkhaubd[i] * mkhaubd[i] * mkhaubd[i] + 19 * mkhaubd[i] - 17);
	}
	do
	{
		cout << "nhap mat khau: " << endl;
		getline(cin, mkhau);
		for (int i = 0; i < mkhau.length(); i++)
		{
			matkhau[i] = (char)mkhau[i];
			matkhau[i] = (matkhau[i] * matkhau[i] * matkhau[i] + 19 * matkhau[i] - 17);
			if ((matkhau[i] == mkhaubd[i])&&(mkbd.length()==mkhau.length()))
			{
				dungmatkhau = true;
			}
			else
			{
				dungmatkhau = false;
				cout << "Mat khau sai !!!!" << endl;
				cout << "Xin moi nhap lai mat khau" << endl;
				break;
			}
		}
	} while (!dungmatkhau);
	cout << " Dang nhap thanh cong!!!" << endl;
	system("pause");

}