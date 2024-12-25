using namespace std;
int main()
{
    int number;
    cout << "Enter number that is not lying in the range 50-500:";
    cin >> number;
    do
    {
        cout << "Invalid Input" << endl;
        break;
    } while (number < 50 && number > 500);
    cout << "Enter a valid input between the range 50-500:";
    cin >> number;
    cout << "Congratulations, your input is valid.";
    return 0;
    system("pause");
}