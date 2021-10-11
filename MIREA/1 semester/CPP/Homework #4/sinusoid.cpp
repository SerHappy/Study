#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	GetConsoleScreenBufferInfo(handle, &consoleInfo);
	constexpr  float period = 6.2;
	constexpr float amplitude = 1;
	const float height = consoleInfo.srWindow.Bottom - consoleInfo.srWindow.Top + 1;
	const float width = consoleInfo.srWindow.Right - consoleInfo.srWindow.Left + 1;
	auto GetX = [&](float x) { return x / period * width; };
	auto GetY = [&](float y) { return (y / amplitude + 1) * (height / 2); };

	COORD c;

	for (float i = 0.06; i < period; i += 0.01)
	{
		c.X = GetX(i);
		c.Y = GetY(sin(i));
		SetConsoleCursorPosition(handle, c);
		cout << '*';
	}

	c.X = width / 2;
	c.Y = 0;
	SetConsoleCursorPosition(handle, c);
	cout << R"(/\ Y)";

	for (int i = 1; i < height; i++)
	{
		c.X = width / 2;
		c.Y = i;
		SetConsoleCursorPosition(handle, c);
		cout << "|";
	}

	for (int i = 0; i < width - 3; i++)
	{
		c.X = i;
		c.Y = height / 2;
		SetConsoleCursorPosition(handle, c);
		if (i == width - 4) cout << "=> X";
		else
		{
			cout << "=";
		}
	}

	c.X = width / 2 - 40;
	c.Y = 5;
	SetConsoleCursorPosition(handle, c);
	cout << R"(y=sin(x))";

	cin.get();
	CloseHandle(handle);
}
