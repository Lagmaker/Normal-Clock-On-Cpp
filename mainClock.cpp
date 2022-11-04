#include <iostream>
#include <windows.h>

using namespace std;



void main()
{
	// setup 
	int second = 0;
	int minute = 0;
	int hour = 0;

	int step = 1;
	int delay = 1000;


	// intro
	cout << "\tThis is clock made in cmd on c++" << endl << endl
		 << "To start, select the mode below" << endl
		 << "Press 1 to customize the clock" << endl
		 << "Press 2 to run default clock" << endl;


	int mode = 0;
	cin >> mode;

	switch (mode)
	{
	// customization 
	case 1:
		// delay
		cout << "Enter Delay\t(set the delay in milliseconds)" << endl
			 << "By default it is '1000'" << endl;
		cin >> delay;


	// the clock
	case 2:
		while (hour != 24)
		{

			// mega output
			//
			// print hours
			if (hour <= 9) cout << "0" << hour << ":";
			else cout << hour << ":";
			// print minutes
			if (minute <= 9)  cout << "0" << minute << ":";
			else cout << minute << ":";
			// print seconds
			if (second <= 9) cout << "0" << second << endl;
			else cout << second << endl;



			// engine of clock
			Sleep(delay);
			second += step;



			// mega resets
			//
			// resets seconds
			if (second == 60)
			{
				second = 0;
				minute += step;
			}

			// resets minutes
			if (minute == 60)
			{
				minute = 0;
				hour += step;
			}

			// resets everything		// full cycle complete
			if ((hour == 24) && (minute == 00) && (second == 00))
			{
				second = 0;
				minute = 0;
				hour = 0;
			}

		}	// here "while" ends


		break;

	default: cout << "Invalid number" << endl;
	}


}	// here "main" ends
