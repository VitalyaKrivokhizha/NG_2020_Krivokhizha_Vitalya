#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int deistvie;
    cout << "�� �������� � �����-�� ���������� ��� ��� �������... �� �� ��������� ��� ���������." << endl;
    cout << "������ ��������� �����, �� ��������� � ���� � �������� � ���� � ������� ���" << endl;
    cout << "�� ������� ���� � ������ ��� �����-�� ������� ������� � ��� � �������" << endl;
    cout << "1. ���������� ������ � ��� �������� � ����������� ������ ��� ����������." << endl;
    cout << "2. ������� ��� � �������� ��." << endl;
    cout << "3. ������ ����� � �������� �� ��������." << endl;
    cout << "������� ��������: " << endl;
    cin >> deistvie;

    switch(deistvie)
    {

    case 1:
        cout << " ������� ������ �����: ���� ������ ����, �� ����� �� ����." << endl;
        cout << "1. ����� � ���." << endl;
        cout << "2. �������: ������ � � ����� �� �����." << endl;
        cout << "3. ������� ��� � �������� ��." << endl;
        cout << "������� ��������: " << endl;
        cin >> deistvie;

        switch(deistvie)
        {

        case 1:
            cout << "������� ����� ��� �� �������� ��� ����� �������� � �� ������ �� ���� �������� ���." << endl;
            cout << "����������!!!! ��� ���� �� ���� ������������ ���������� �������, �� ��������!!!";
            break;

        case 2:
            cout << "������� ������ �����: ����, ��� ������." << endl;
            cout << "�� ����� ������ �� ���� ��������� , ��� ����� ���-�� ������, �� ��� � ������ � �� �����" << endl;
            cout << "�� �������� ���� ������� ������� ��� ���� :(" << endl;
            cout << "�� ���������!";
            break;

        case 3:
            cout << "������� ��������� ������� �������� �� ������ � ������� ���!" << endl;
            cout << "�� ���������!";
            break;

        default:
            cout << "Nepravilno vvedeno deistvie";
            break;
        }
        break;

    case 2:
        cout << "������� ������� �������� �� ������ � ������� ��� ����� ��� �������� �������. �� �������� ���� �� �����." << endl;
        cout << "1. ���������� �������� ����� ��������." << endl;
        cout << "2. �������� ��� � ����������� ��� ��������." << endl;
        cout << "3. ���������� �������� �� �������� � ����� � �����." << endl;
        cout << "���� ��������: " << endl;
        cin >> deistvie;

        switch(deistvie)
        {

        case 1:
            cout << "��� ��������� �������!" << endl;
            cout << "�� ���������!";
            break;

        case 2:
            cout << "�� ������ � ��� ���������, �� ��-�� ���� ��� �� �� ����� ������� ��� � ������� ��������� ���������." << endl;
            cout << "� �� ��� �� ��������� � ����� ��� �����������!" << endl;
            cout << "�� ���������!";
            break;

        case 3:
            cout << "�� �������� ���� �� ����� ������ 10 � ������� �������: �� ����� ��� ������, ��� �����������..." << endl;
            cout << "�� ���������!";
            break;

        default:
            cout << "Nepravilno vvedeno deistvie";
            break;
        }

    case 3:
        cout << "������� ������� ���: ������... ��� ���������? ��� �� ����� ��������?" << endl;
        cout << "1. ������� ��� �� �� ������� ��� ����� ���������" << endl;
        cout << "2. ������� ��� � �������� ��." << endl;
        cout << "3. ������ ����� � �������� �� ��������." << endl;
        cout << "������� ��������: " << endl;
        cin >> deistvie;

        switch(deistvie)
        {

        case 1:
            cout << "������� ������� ���: ����, � ���� ������, ������� �� ����???" << endl;
            cout << "1. ����������� �� ������" << endl;
            cout << "2. ������� ��� ��� � ����������� ��������� ������." << endl;
            cout << "���� ��������:" << endl;
            cin >> deistvie;

            if(deistvie == 1){
                cout << "�� ������: ���� ������!" << endl;
                cout << "������� ����� ��� �� �������� ��� ����� �������� � �� ������ �� ���� �������� ���." << endl;
                cout << "����������!!!! ��� ���� �� ���� ������������ ���������� �������, �� ��������!!!";
            }

            if(deistvie == 2){
                cout << "�� ������: ���� �����!" << endl;
                cout << "����� ��� �� �������. �� ����� ������ �� ���� ��������� , ��� ����� ���-�� ������, �� ��� � ������ � �� �����" << endl;
                cout << "�� �������� ���� ������� ������� ��� ���� :(" << endl;
                cout << "�� ���������!";
            }

            else{
                cout << "Nepravilno vvedeno deistvie";
            }
            break;

        case 2:
            cout << "������� ��������� ������� �������� �� ������ � ������� ���!" << endl;
            cout << "�� ���������!";
            break;

        case 3:
            cout << "�� �������� ���� �� ����� ������ 10 � ������� �������: �� ����� ��� ������, �� ����������� � ����..." << endl;
            cout << "�� ����� ������ �� ���� ��������� , ��� ����� ���-�� ������, �� ��� � ������ � �� �����" << endl;
            cout << "�� �������� ���� ������� ������� ��� ���� :(" << endl;
            cout << "�� ���������!";
            break;

        default:
            cout << "Nepravilno vvedeno deistvie";
            break;
        }
        break;

    default:
        cout << "Nepravilno vvedeno deistvie";
        break;
    }
}


