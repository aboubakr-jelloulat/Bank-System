#pragma one
#include "Global.h"
#include "clsScreen.h"
#include "clsUser.h"
#include "clsMainScreen.h"
#include "clsDate.h"
#include <fstream>

class clsLoginScreen :protected clsScreen
{

private :

  	static  bool _Login()
    {
        bool LoginFaild = false;
		short FaildLoginCount = 0;

        string Username, Password;
        do
        {
            if (LoginFaild)
			{
				FaildLoginCount++;

                cout << "\nInvlaid Username/Password! ❌";
                cout << "\nYou have " << (3 - FaildLoginCount) << " Trial(s) to login.\n" << endl;   
			}

			if (FaildLoginCount == 3)
            {
                cout << "\n🔒🔒Your are Locked after 3 faild trails 🔒🔒\n" << endl;
                return false;
            }

            cout << "Enter Username? ";  cin >> Username;

            cout << "Enter Password? ";  cin >> Password;

            CurrentUser = clsUser::Find(Username, Password);

            LoginFaild = CurrentUser.IsEmpty();

        } while (LoginFaild);

		CurrentUser.RegisterLogIn();
        clsMainScreen::ShowMainMenue();
		return true ;
    }

public:

    static bool ShowLoginScreen()
    {
        system("clear");
        _DrawScreenHeader("\t  Login Screen");
        return _Login();

    }

};
