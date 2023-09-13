#include <iostream>
using namespace std;

int ID;
struct management_file
{
    int id;
    string file_name;
    int price;
    string date;
};

int main()
{

    management_file mg_file[200];

    int p_film = 0;

    int select_item;

menu:
    cout << "1- add ..." << endl;
    cout << "2- show list..." << endl;
    cout << "3- search..." << endl;
    cout << "4- delete..." << endl;
    cout << "5- exit..." << endl;

    cout << "select_item:";
    cin >> select_item;

    switch (select_item)
    {
    case 1:
    {
        cout << "Id :";
        cin >> mg_file[p_film].id;

        cout << "Film name :";
        cin >> mg_file[p_film].file_name;

        cout << "Price :";
        cin >> mg_file[p_film].price;

        cout << "Enter date :";
        cin >> mg_file[p_film].date;

        p_film++;

        break;
    }

    case 2:
    {
        for (int i = 0; i < p_film; i++)
        {
            cout << "Id:" << mg_file[i].id << endl;
            cout << "Film name:" << mg_file[i].file_name << endl;
            cout << "Price:" << mg_file[i].price << endl;
            cout << "Date:" << mg_file[i].date << endl;
        }

        break;
    }

    case 3:
    {

        cout << "ID:";
        cin >> ID;
        bool find = 0;
        for (int i = 0; i < p_film; i++)
        {
            if (mg_file[i].id == ID)
            {

                cout << "Name of the film: " << mg_file[i].file_name << endl;
                cout << "Price of the film: " << mg_file[i].price << endl;
                cout << "Date: " << mg_file[i].date << endl;
                find = 1;
                break;
            }
        }

        if (find == 0)
        {
            cout << "not found";
        }

        break;
    }
    case 4:
    {

        cout << "Enter file id to delete from list: ";
        cin >> ID;
        for (int i = 0; i < p_film; i++)
        {
            for (int j = 0; j < p_film - 1; j++)
            {
                mg_file[j] = mg_file[j + 1];
            }
        }
        cout << "Deleted";
        p_film--;

        break;
    }

    case 5:
    {
        return 0;
    }
    }

    cout << "---------------" << endl;

    goto menu;
}
