 #include <iostream>
using namespace std;

int main()
{
	char startValue;
	string name;
	char choiceAgain;
	float onlineShopping(void);
		void customerName();
	{
		
		cout << "Enter your name: ";
		getline(cin, name);
		cout << " Hello " << name <<endl<<"Welcome to online Shopping" << endl;
	}
startLevel:
	cout<<endl;
	cout << "Please press s to start Shopping" << endl;
	
start:
	cin >> startValue;
	if (startValue == 's' || startValue == 'S')
	{
		float totalAmount = totalAmount + onlineShopping();
		cout << " BillAmount is " << totalAmount << endl;
	shopAgain:
		cout<<endl;
		cout << "Do you want shopping again, y or n" << endl;
		cin >> choiceAgain;
		if (choiceAgain == 'y' || choiceAgain == 'Y')
		{
			goto startLevel;
		}
		else if (choiceAgain == 'n' || 'N')
			
		{	cout <<"Customer Name :"<< name << endl;
			cout <<"Your Total BillAmount is " << totalAmount << endl;
			cout<<endl;
			cout << "*****************************************************" << endl;
			cout<<"               THANK YOU FOR SHOPPING WITH US          " <<endl;
			cout<<"*******************************************************"<<endl;
			cout<<endl;	}
		else
		{
			cout << "You have entered wrong option, please type again" << endl;
			goto shopAgain;
		}
	}
	else
	{
		cout << "You have entered wrong option, please type s" << endl;
		goto start;
	}
}
float onlineShopping()
{
	char choice;
	char item;
	int quantity;
	float billAmount = 0;
itemLevel:
		    cout<<endl;
			cout <<"*****************************************************" << endl;
			cout<<"               WELCOME TO ONLINE SHOPPING                  " <<endl;
			cout<<"*******************************************************"<<endl;
			cout<<endl;
	
	cout << "------------Please follow the instructions--------------" << endl;
	cout << "(1) Please enter m to order mobile phones" << endl;
	cout << "(2) Please enter l to order laptops" << endl;
	cout << "(3) Please enter w to order watches" << endl;
	cout << "(4) Please enter s to order Speaker" << endl;
	cout << "(5) Please enter h to order headphone" << endl;
	cin >> choice;

	//*******************************Mobile***********************************************

	if (choice == 'm' || choice == 'M')
	{
	mobileLevel:
		cout << "Mobile details" << endl;
		cout << "(1) Apple      =>    Price    :   40000" << endl;
		cout << "(2) Vivo       =>    Price    :   25000" << endl;
		cout << "(3) Oppo       =>    Price    :   20000" << endl;
		cout << "(4) Redmi      =>    Price    :   18000" << endl;
		cout << "(5) Realme     =>    Price    :   17000" << endl;
		cout << "(6) Samsung    =>    Price    :   25000" << endl;
		cout << "Please enter your choice" << endl;
		cin >> item;
		if (item == '1')
		{
			cout << "Enter quantity" << endl;
			cin >> quantity;
			billAmount = billAmount + quantity * 40000;
		}
		else if (item == '2')
		{
			cout << "Enter quantity" << endl;
			cin >> quantity;
			billAmount = billAmount + quantity * 25000;
		}
		else if (item == '3')
		{
			cout << "Enter quantity" << endl;
			cin >> quantity;
			billAmount = billAmount + quantity * 20000;
		}
		else if (item == '4')
		{
			cout << "Enter quantity" << endl;
			cin >> quantity;
			billAmount = billAmount + quantity * 18000;
		}
		else if (item == '5')
		{
			cout << "Enter quantity" << endl;
			cin >> quantity;
			billAmount = billAmount + quantity * 17000;
		}
		else if (item == '6')
		{
			cout << "Enter quantity" << endl;
			cin >> quantity;
			billAmount = billAmount + quantity * 25000;
		}
		else
		{
			cout << "You have entered wrong option, please type again" << endl;
			goto mobileLevel;
		}
	}

	//*****************************************Watches********************************

	else if (choice == 'w' || choice == 'W')
	{
	watchesLevel:
		cout << "Wacthes details" << endl;
		cout << "(1) Fastrack   =>    Price    :   1500" << endl;
		cout << "(2) Sonata     =>    Price    :   2200" << endl;
		cout << "(3) Titan      =>    Price    :   12000" << endl;
		cout << "(4) Fossil     =>    Price    :   8000" << endl;
		cout << "(5) Apple      =>    Price    :   20000" << endl;
		cout << "(6) Noise      =>    Price    :   2000" << endl;
		cout << "Please enter your choice" << endl;
		cin >> item;
		if (item == '1')
		{
			cout << "Enter quantity" << endl;
			cin >> quantity;
			billAmount = billAmount + quantity * 1500;
		}
		else if (item == '2')
		{
			cout << "Enter quantity" << endl;
			cin >> quantity;
			billAmount = billAmount + quantity * 2200;
		}
		else if (item == '3')
		{
			cout << "Enter quantity" << endl;
			cin >> quantity;
			billAmount = billAmount + quantity * 12000;
		}
		else if (item == '4')
		{
			cout << "Enter quantity" << endl;
			cin >> quantity;
			billAmount = billAmount + quantity * 8000;
		}
		else if (item == '5')
		{
			cout << "Enter quantity" << endl;
			cin >> quantity;
			billAmount = billAmount + quantity * 20000;
		}
		else if (item == '6')
		{
			cout << "Enter quantity" << endl;
			cin >> quantity;
			billAmount = billAmount + quantity * 2000;
		}
		else
		{
			cout << "You have entered wrong option, please type again" << endl;
			goto watchesLevel;
		}
	}

	//******************************************Laptops*******************************

	else if (choice == 'l' || choice == 'L')
	{
	laptopLevel:
		cout << "Laptops details" << endl;
		cout << "(1)  Apple Macbook   =>    Price    :   95000" << endl;
		cout << "(2)  Lenovo          =>    Price    :   48000" << endl;
		cout << "(3)  HP              =>    Price    :   60000" << endl;
		cout << "(4)  Acer            =>    Price    :   40000" << endl;
		cout << "(5)  Dell            =>    Price    :   55000" << endl;
		cout << "(6)  Asus            =>    Price    :   50000" << endl;
		cout << "Please enter your choice" << endl;
		cin >> item;
		if (item == '1')
		{
			cout << "Enter quantity" << endl;
			cin >> quantity;
			billAmount = billAmount + quantity * 95000;
		}
		else if (item == '2')
		{
			cout << "Enter quantity" << endl;
			cin >> quantity;
			billAmount = billAmount + quantity * 48000;
		}
		else if (item == '3')
		{
			cout << "Enter quantity" << endl;
			cin >> quantity;
			billAmount = billAmount + quantity * 60000;
		}
		else if (item == '4')
		{
			cout << "Enter quantity" << endl;
			cin >> quantity;
			billAmount = billAmount + quantity * 40000;
		}
		else if (item == '5')
		{
			cout << "Enter quantity" << endl;
			cin >> quantity;
			billAmount = billAmount + quantity * 55000;
		}
		else if (item == '6')
		{
			cout << "Enter quantity" << endl;
			cin >> quantity;
			billAmount = billAmount + quantity * 50000;
		}
		else
		{
			cout << "You have entered wrong option, please type again" << endl;
			goto laptopLevel;
		}
	}

	//***********************************speakers************************************

	else if (choice == 's' || choice == 'S')
	{
	speakerLevel:
		cout << "Speakers details" << endl;
		cout << "(1) Boat         =>    Price    :   2000" << endl;
		cout << "(2) Sony         =>    Price    :   5000" << endl;
		cout << "(3) JBL          =>    Price    :   4000" << endl;
		cout << "(4) Philips      =>    Price    :   8000" << endl;
		cout << "(5) Zebronics    =>    Price    :   7000" << endl;
		cout << "(6) Mivi         =>    Price    :   1500" << endl;
		cout << "Please enter your choice" << endl;
		cin >> item;
		if (item == '1')
		{
			cout << "Enter quantity" << endl;
			cin >> quantity;
			billAmount = billAmount + quantity * 2000;
		}
		else if (item == '2')
		{
			cout << "Enter quantity" << endl;
			cin >> quantity;
			billAmount = billAmount + quantity * 5000;
		}
		else if (item == '3')
		{
			cout << "Enter quantity" << endl;
			cin >> quantity;
			billAmount = billAmount + quantity * 4000;
		}
		else if (item == '4')
		{
			cout << "Enter quantity" << endl;
			cin >> quantity;
			billAmount = billAmount + quantity * 8000;
		}
		else if (item == '5')
		{
			cout << "Enter quantity" << endl;
			cin >> quantity;
			billAmount = billAmount + quantity * 7000;
		}
		else if (item == '6')
		{
			cout << "Enter quantity" << endl;
			cin >> quantity;
			billAmount = billAmount + quantity * 15000;
		}
		else
		{
			cout << "You have entered wrong option, please type again" << endl;
			goto speakerLevel;
		}
	}

	//*********************************headphones**************************************

	else if (choice == 'h' || choice == 'H')
	{
	headphoneLevel:
		cout << "Headphones details" << endl;
		cout << "(1) OnePlus   =>    Price    :   2000" << endl;
		cout << "(2) Noise     =>    Price    :   5000" << endl;
		cout << "(3) Boat      =>    Price    :   1200" << endl;
		cout << "(4) Mivi      =>    Price    :   800" << endl;
		cout << "(5) Realme    =>    Price    :   1500" << endl;
		cout << "(6) Sony      =>    Price    :   11000" << endl;
		cout << "Please enter your choice" << endl;
		cin >> item;
		if (item == '1')
		{
			cout << "Enter quantity" << endl;
			cin >> quantity;
			billAmount = billAmount + quantity * 2000;
		}
		else if (item == '2')
		{
			cout << "Enter quantity" << endl;
			cin >> quantity;
			billAmount = billAmount + quantity * 5000;
		}
		else if (item == '3')
		{
			cout << "Enter quantity" << endl;
			cin >> quantity;
			billAmount = billAmount + quantity * 1200;
		}
		else if (item == '4')
		{
			cout << "Enter quantity" << endl;
			cin >> quantity;
			billAmount = billAmount + quantity * 800;
		}
		else if (item == '5')
		{
			cout << "Enter quantity" << endl;
			cin >> quantity;
			billAmount = billAmount + quantity * 1500;
		}
		else if (item == '6')
		{
			cout << "Enter quantity" << endl;
			cin >> quantity;
			billAmount = billAmount + quantity * 11000;
		}
		else
		{
			cout << "You have entered wrong option, please type again" << endl;
			goto headphoneLevel;
		}
	}

	else
	{
		cout << "You have entered wrong option, please type again" << endl;
		goto itemLevel;
	}
	return billAmount;
}
