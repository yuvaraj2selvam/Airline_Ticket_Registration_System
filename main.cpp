#include<bits/stdc++.h>

#include<fstream> //file managenent

#include<iomanip> //floating point values

using namespace std;

void mainmenu();

class management {
  public:
    management() {
      mainmenu();
    }
};

class details {

  public:
    static string name, gender;
  int phonenumber;
  int age;
  string address;
  static int cid;

  char arr[100];

  void information() {
    cout << "\n enter the customer id :";
    cin >> cid;
    cout << "\n enter your name :";
    cin >> name;
    cout << "\n enter your age  :";
    cin >> age;
    cout << "\n enter your address :";
    cin >> address;
    cout << "\n enter your gender :";
    cin >> gender;
    cout << "\n your details are saved with us \n";
  }

};

int details::cid;
string details::name;
string details::gender;

class registration {
  public:
    static int choice;
  int choice1;
  int back;
  static float charges;

  void flights() {
    string flightn[] = {
      "Dubai",
      "Uk",
      "India",
      "China",
      "Japan"
    };

    for (int i = 0; i < 5; i++) {
      cout << (i + 1) << ".flight to " << flightn[i] << endl;
    }

    cout << "\nwelcome to AIRLINES!" << endl;

    cout << "press a number of country you want to travel :";
    cin >> choice;

    switch (choice) {
    case 1: {
      cout << "_________welcome to Dubai AIRLINES________\n" << endl;
      cout << "enjoy your journey!" << endl;

      cout << "following are the flights\n" << endl;

      cout << "1.DUB -446" << endl;
      cout << "\t08-01-2022 8.00AM 10hrs Rs. 14000" << endl;
      cout << "2.DUB -426" << endl;
      cout << "\t10-01-2022 9.00PM 10hrs Rs. 23000" << endl;
      cout << "3.DUB -436" << endl;
      cout << "\t12-01-2022 4.00AM 10hrs Rs. 24000" << endl;
      cout << "4.DUB -456" << endl;
      cout << "\t14-03-2022 9.00AM 10hrs Rs. 11000" << endl;

      cout << "\nselect the flight you want to book :";
      cin >> choice1;

      if (choice1 == 1) {
        charges = 14000;
        cout << "\nyou have successfully booked the flight DUB -446" << endl;
        cout << "you can go back to menu and take the ticket" << endl;
      } else if (choice1 == 2) {
        charges = 23000;
        cout << "\nyou have successfully booked the flight DUB -426" << endl;
        cout << "you can go back to menu and take the ticket" << endl;
      } else if (choice1 == 3) {
        charges = 24000;
        cout << "\nyou have successfully booked the flight DUB -436" << endl;
        cout << "you can go back to menu and take the ticket" << endl;
      } else if (choice1 == 4) {
        charges = 11000;
        cout << "\nyou have successfully booked the flight DUB -436" << endl;
        cout << "you can go back to menu and take the ticket" << endl;
      } else {
        cout << "invalid input,shifting to the previous menu" << endl;
        flights();
      }

      cout << "press any key to go back to mainmenu :" << endl;
      cin >> back;

      if (back == 1) {
        mainmenu();
      } else {
        mainmenu();
      }

    }

    case 2: {
      cout << "_________welcome to Uk AIRLINES________\n" << endl;
      cout << "enjoy your journey!" << endl;

      cout << "following are the flights\n" << endl;

      cout << "1.Uk -234" << endl;
      cout << "\t12-01-2022 9.00AM 14hrs Rs. 22000" << endl;
      cout << "2.Uk -206" << endl;
      cout << "\t13-01-2022 9.00PM 14hrs Rs. 23000" << endl;
      cout << "3.UK -209" << endl;
      cout << "\t18-01-2022 3.00AM 14hrs Rs. 32000" << endl;
      cout << "4.UK -256" << endl;
      cout << "\t23-03-2022 12.00AM 14hrs Rs. 19400" << endl;

      cout << "\nselect the flight you want to book :";
      cin >> choice1;

      if (choice1 == 1) {
        charges = 22000;
        cout << "\nyou have successfully booked the flight UK-234" << endl;
        cout << "you can go back to menu and take the ticket" << endl;
      } else if (choice1 == 2) {
        charges = 23000;
        cout << "\nyou have successfully booked the flight UK-206" << endl;
        cout << "you can go back to menu and take the ticket" << endl;
      } else if (choice1 == 3) {
        charges = 32000;
        cout << "\nyou have successfully booked the flight UK-209" << endl;
        cout << "you can go back to menu and take the ticket" << endl;
      } else if (choice1 == 4) {
        charges = 19400;
        cout << "\nyou have successfully booked the flight UK-256" << endl;
        cout << "you can go back to menu and take the ticket" << endl;
      } else {
        cout << "invalid input,shifting to the previous menu" << endl;
        flights();
      }

      cout << "press any key to go back to mainmenu" << endl;
      cin >> back;

      if (back == 1) {
        mainmenu();
      } else {
        mainmenu();
      }

    }
    case 3: {
      cout << "_________welcome to India AIRLINES________\n" << endl;
      cout << "enjoy your journey!" << endl;

      cout << "following are the flights\n" << endl;

      cout << "1.In -003" << endl;
      cout << "\t21-01-2022 9.00AM 17hrs Rs. 26000" << endl;
      cout << "2.In -007" << endl;
      cout << "\t26-02-2022 9.00PM 17hrs Rs. 32000" << endl;

      cout << "\nselect the flight you want to book :";
      cin >> choice1;

      if (choice1 == 1) {
        charges = 26000;
        cout << "\nyou have successfully booked the flight In-003" << endl;
        cout << "you can go back to menu and take the ticket" << endl;
      } else if (choice1 == 2) {
        charges = 32000;
        cout << "\nyou have successfully booked the flight In-007" << endl;
        cout << "you can go back to menu and take the ticket" << endl;
      } else {
        cout << "invalid input,shifting to the previous menu" << endl;
        flights();
      }

      cout << "press any key to go back to mainmenu :" << endl;
      cin >> back;

      if (back == 1) {
        mainmenu();
      } else {
        mainmenu();
      }
    }

    case 4: {
      cout << "_________welcome to CHINA AIRLINES________\n" << endl;
      cout << "enjoy your journey!" << endl;

      cout << "following are the flights\n" << endl;

      cout << "1.CIN -334" << endl;
      cout << "\t15-01-2022 8.00AM 14hrs Rs. 39000" << endl;
      cout << "2.CIN -306" << endl;
      cout << "\t16-01-2022 11.00PM 14hrs Rs. 43000" << endl;
      cout << "3.CIN -309" << endl;
      cout << "\t17-01-2022 6.00AM 14hrs Rs. 42000" << endl;

      cout << "\nselect the flight you want to book :";
      cin >> choice1;

      if (choice1 == 1) {
        charges = 39000;
        cout << "\nyou have successfully booked the flight CIN-334" << endl;
        cout << "you can go back to menu and take the ticket" << endl;
      } else if (choice1 == 2) {
        charges = 43000;
        cout << "\nyou have successfully booked the flight CIN-306" << endl;
        cout << "you can go back to menu and take the ticket" << endl;
      } else if (choice1 == 3) {
        charges = 42000;
        cout << "\nyou have successfully booked the flight UK-309" << endl;
        cout << "you can go back to menu and take the ticket" << endl;
      } else {
        cout << "invalid input,shifting to the previous menu" << endl;
        flights();
      }

      cout << "press any key to go back to mainmenu :" << endl;
      cin >> back;

      if (back == 1) {
        mainmenu();
      } else {
        mainmenu();
      }
    }

    case 5: {
      cout << "_________welcome to JAPAN AIRLINES________\n" << endl;
      cout << "enjoy your journey!" << endl;

      cout << "following are the flights\n" << endl;

      cout << "1.JAP -404" << endl;
      cout << "\t30-01-2022 7.00AM 32hrs Rs. 62000" << endl;

      cout << "\nselect the flight you want to book :";
      cin >> choice1;

      if (choice1 == 1) {
        charges = 62000;
        cout << "\nyou have successfully booked the flight JAP-404" << endl;
        cout << "you can go back to menu and take the ticket" << endl;
      } else {
        cout << "invalid input,shifting to the previous menu" << endl;
        flights();
      }

      cout << "press any key to go back to mainmenu :" << endl;
      cin >> back;

      if (back == 1) {
        mainmenu();
      } else {
        mainmenu();
      }
    }
    default: {
      cout << "invalid input, shifting to mainmenu !";
      mainmenu();
      break;
    }
    }
  }
};

float registration::charges;
int registration::choice;

class ticket: public registration, details {
  public: void bill() {
    string destination = "";
    ofstream outf("records.txt"); {
      outf << "__yuvaraj2selvam_AIRLINES_____" << endl;
      outf << "___________ticket_____________" << endl;
      outf << "______________________________" << endl;

      outf << "customer id     :" << details::cid << endl;
      outf << "customer Name   :" << details::name << endl;
      outf << "customer gender :" << details::gender << endl;
      outf << "description     :" << endl;

      if (registration::choice == 1) {
        destination = "Dubai";
      } else if (registration::choice == 2) {
        destination = "Uk";
      } else if (registration::choice == 3) {
        destination = "India";
      } else if (registration::choice == 4) {
        destination = "China";
      } else if (registration::choice == 5) {
        destination = "Japan";
      }

      outf << "destination\t :" << destination << endl;
      outf << "flight cost\t :" << registration::charges << endl;

    }
    outf.close();
  }

  void displaybill() {
    ifstream ifs("records.txt"); {
      if (!ifs) {
        cout << "file error!" << endl;
      }
      while (!ifs.eof()) {
        ifs.getline(arr, 100);
        cout << arr << endl;
      }
    }
    ifs.close();
  }
};

void mainmenu() {
  int lchoice;
  int schoice;
  int back;

  cout << "\t        yuvaraj2selvam AIRLINES  " << endl;
  cout << "\t______________main menu__________" << endl;

  cout << "\t___________________________________________" << endl;

  cout << "\t\t\t\t\t\t" << endl;

  cout << "\t\t press 1 to add customer details       \t" << endl;
  cout << "\t\t press 2 to for flight registration    \t" << endl;
  cout << "\t\t press 3 to for ticket and charges     \t" << endl;
  cout << "\t\t press 4 to exit                       \t" << endl;

  cout << "\t\t\t\t\t\t" << endl;
  cout << "\t___________________________________________" << endl;

  cout << "enter the choice :";
  cin >> lchoice;

  details d;
  registration r;
  ticket t;

  switch (lchoice) {

  case 1: {
    cout << "_________customers__________\n" << endl;
    d.information();

    cout << "press 1 to go back to mainmenu :";
    int back;
    cin >> back;

    if (back == 1) {
      mainmenu();
    } else {
      mainmenu();
    }
    break;
  }

  case 2: {
    cout << "_________book flight __________\n" << endl;
    r.flights();
    break;
  }

  case 3: {
    cout << "________get yout ticket__________\n" << endl;
    t.bill();

    cout << "your ticket is printed and you can get it" << endl;
    cout << "press 1 to display your ticket :" << endl;

    cin >> back;

    if (back == 1) {
      t.displaybill();

      cout << "press any key to go back to main menu :";
      cin >> back;

      if (back == 1)

      {
        mainmenu();
      } else {
        mainmenu();
      }

    } else {
      mainmenu();
    }
    break;
  }

  case 4: {
    cout << "\n\n\n\t\t____________thank you____________" << endl;
    break;
  }

  default: {
    cout << "invalid input,please try again\n" << endl;
    mainmenu();
    break;
  }

  }

}

int main() {
  management mobj;
  return 0;
}
