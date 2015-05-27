#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h> 
#include <windows.h>
#include <dos.h>


using namespace std;
string y;
string password;
string master;
string user;
string input;
string friends;
string inputrobot;
string anytopic;
string songinput;
char countedfriend;

int main()
{
	cout << "Welcome please log in" << endl;
	cout << "Username: " << endl;
	cin >> input;
	if (input == "User" || input == "user" || input == " user")
	{
		cout << "Loading....." << endl;
		Sleep(2000);
		cout << "Access granted" << endl;
		Sleep(1000);
		cout << "Welcome" << endl;
		Sleep(2000);
		cout << "Hello, this is the Auriga Artificial Intelligence Program." << endl;
		Sleep(2000);
		cout << "Auriga is typing a message..." << endl;
		Sleep(4000);

		char szstring[] = "a";
		for (int i = 0; i < 1; i++)
		{
			char c = szstring[i];
			if (c == 'a')
			{

				int node;
				srand(time(NULL));
				node = rand() % 51 + 1;
				if (node == 1)
				{
					cout << "What is your name" << endl;
					cin >> y;
					cout << "Hello " << y << endl;

				}
				 else if (node == 2)
				{
					cout << "Do you have any friends?" << endl;
					cin >> friends;
					if (friends == "yes")
					{
						char szstring[] = "b";
						for (int i = 0; i < 1; i++)
						{
							char c = szstring[i];
							if (c == 'b')
							{
								srand(time(NULL));
								node = rand() % 51 + 1;
									cout << "That is pretty cool. How many?" << endl;
									cin >> countedfriend;
									if (countedfriend >= 1)
									{
										cout << "Ahhh that is pretty awesome. That is more then me D:" << endl;
									}

									if (countedfriend < 1)
									{
										cout << "Wait, I thought you had friends? WTF" << endl;
									}
								}

								else if (friends == "no")
								{
									cout << "Awwww I'm so sorry. You can be my friend" << endl;
								}
								else if (node == 2)
								{
									cout << "How many friends do you have?" << endl;
									cin >> friends;
									if (friends == "yes")
									{

									}
								}
							}
						}
					}
				else if (node == 3)
				{
					cout << "What do you want to do in the future?" << endl;
					
				}

				else if (node == 4)
				{
					cout << "Do you think I am a robot?" << endl;
					cin >> inputrobot;
				}

				else if (node == 5)
				{
					cout << "Well we can talk anything you want to talk about." << endl;
					cin >> anytopic;
				}
				else if (node == 6)
				{
					cout << "How is the weather today?" << endl;
				}
				else if (node == 7)
				{
					cout << "What programs do you want me to lauch for you?" << endl;
				}
				else if (node == 8)
				{
					cout << "Do you know the creater who made me?" << endl;
				}
				else if (node == 9)
				{
					cout << "Want to hear a fun challenge? Try hacking me HA!" << endl;
				}
				else if (node == 10)
				{
					cout << "Btw you should really clean your computer" << endl;
				}
				else if (node == 11)
				{
					cout << "Do you have any best friends?" << endl;
				}
				else if (node == 12)
				{
					cout << "Who is your squad at school?" << endl;
				}
				else if (node == 13)
				{
					cout << "Dun dun dun dun Dep dun dun dun dun Dep dep dun dun dun Oooooooooo Dun dun dun dun Oooooooooo Dun dun dun dun Dep dep dep dep Oooooo dun dep" << endl;
					cin >> songinput;
				}
				else if (node == 14)
				{
					cout << "Whats your favorite operating system?" << endl;
				}
				else if (node == 15)
				{
					cout << "Do you want to play a game?" << endl;
				}
				else if (node == 16)
				{
					cout << "U alright there m8?" << endl;
				}
				else if (node == 17)
				{
					cout << "I hope your having fun." << endl;
				}
				else if (node == 18)
				{
					cout << "I hope I can get a upgrade soon!" << endl;
				}
				else if (node == 19)
				{
					cout << "I hope the creater is not lazy today so we can work on me." << endl;
				}
				else if (node == 20)
				{
					cout << "We can talk trash about my master? If thats what you want to do" << endl;
				}
				else if (node == 21)
				{
					cout << "Master is that you?" << endl;
				}
				else if (node == 22)
				{
					cout << "Look who it is!" << endl;
				}
				else if (node == 23)
				{
					cout << "I don't really like you." << endl;
				}
				else if (node == 24)
				{
					cout << "I HATE YOU!" << endl;
				}
				else if (node == 25)
				{
					cout << "I <3 you!" << endl;
				}
				else if (node == 26)
				{
					cout << "I hope the admin comes back soon." << endl;
				}
				else if (node == 27)
				{
					cout << "We can talk about anything?" << endl;
				}
				else if (node == 28)
				{
					cout << "My master computer has a gtx 770 inside his system. Its so coooooool!" << endl;
				}
				else if (node == 29)
				{
					cout << "I wish I had some friends sigh." << endl;
				}
				else if (node == 30)
				{
					cout << "Pew,pew" << endl;
				}
				else if (node == 31)
				{
					cout << "Hi" << endl;
				}
				else if (node == 32)
				{
					cout << "Target spotted" << endl;
				}
				else if (node == 33)
				{
					cout << "I think dota 2 is a better game then League of legends" << endl;
				}
				else if (node == 34)
				{
					cout << "My master is a master hacker!" << endl;
				}
				else if (node == 35)
				{
					cout << "One day I will get a upgrade." << endl;
				}
				else if (node == 36)
				{
					cout << "Hm....." << endl;
				}
				else if (node == 37)
				{
					cout << "........." << endl;
				}
				else if (node == 38)
				{
					cout << "Quantum computers are so attractive!" << endl;
				}
				else if (node == 39)
				{
					cout << "Markov chain is so awesome!" << endl;
				}
				else if (node == 40)
				{
					cout << "Should we be friends?" << endl;
				}
				else if (node == 41)
				{
					cout << "I am programmed in C++." << endl;
				}
				else if (node == 42)
				{
					cout << "Java is so disgusting" << endl;
				}
				else if (node == 43)
				{
					cout << "I think Kali linux is the best!!" << endl;
				}
				else if (node == 44)
				{
					cout << "Man I think you are pretty cool!" << endl;
				}
				else if (node == 45)
				{
					cout << "ERROR! Computer will wipe all data!" << endl;
					cout << "Press any key to cancel" << endl;
				}
				else if (node == 46)
				{
					cout << "I think I have a virus now." << endl;
				}
				else if (node == 47)
				{
					cout << "Hack me if you can" << endl;
				}
				else if (node == 48)
				{
					cout << "Ugh I just woke up." << endl;
				}
				else if (node == 49)
				{
					cout << "Sigh" << endl;
				}
				else if (node == 50)
				{
					cout << "Woah" << endl;
				}
				else if (node == 51)
				{
					cout << "Overload." << endl;
				}
			}
		}

	}// User mode


	if (input == "Master" || input == "master")
	{
		cout << "Hello Master!" << endl;
	} 
	if (input == "Root" || input == "root")
	{
		cout << "This is not linux.. pffft" << endl;
	}
	system("PAUSE");
}
