#include <iostream>
using namespace std;
int main()
{
	int cap, time, counter = 0, imp = 0;
	bool impossible = false;
cin >> cap >> time;
	for (int x = 0; x < time; x++)
	{
		string use;
		cin >> use;
		if (use == "0")
		{
			continue;
		}
		if (use.at(use.length() - 1) == 'L')
		{
			
			{
			for (int i = 0; i < use.length(); i++) {
				if (use.at(i) == ('I'))
				{
					counter = counter - 1;
					if (counter < 0)
					{
						impossible = true;
						imp = abs(counter);
					}
				}
				else
				{
					continue;
				}
			}
			
			
			}
			
		}
		else if (use.at(use.length() - 1) == 'E')
		{
			for (int i = 0; i < use.length(); i++) {
				if (use.at(i) == ('I'))
				{
					counter = counter + 1;
				}
				else
				{
					continue;
				}
			}
		}
		
	}
	if (impossible == true)
	{
		cout << "Impossible\n" << imp;
	}
	if ((cap < counter) && (impossible == false))
	{
		cout << "Capacity Exceeded " << counter - cap << endl;
		return 0;
	}
	if ((counter == 0) && (impossible == false))
	{
		cout << "Empty Room";
	}
	else if (impossible == false)
	{
		cout << counter << " People In The Room";
	}
	return 0;
	
}
