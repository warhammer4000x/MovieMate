
using namespace std;

class UserPreferences {
private:
    string selectedGenre;
    float minRating;

public:
    UserPreferences() {
        selectedGenre = "";
        minRating = 0;
    }

    void getPreferences() {
        int choice;

        cout << "\n===== MOVIE RECOMMENDATION SYSTEM =====\n";
        cout << "Select your preferred genre:\n";
        cout << "1. Action\n";
        cout << "2. Comedy\n";
        cout << "3. Horror\n";
        cout << "4. Romance\n";
        cout << "5. Sci-Fi\n";
        cout << "6. Drama\n";
        cout << "7. Animation\n";

        while (true) {
            cout << "\nEnter your choice (1-7): ";

            if (cin >> choice && choice >= 1 && choice <= 7) {
                break;
            }

            cout << "Invalid choice! Enter a number from 1 to 7.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        switch (choice) {
            case 1: selectedGenre = "Action"; break;
            case 2: selectedGenre = "Comedy"; break;
            case 3: selectedGenre = "Horror"; break;
            case 4: selectedGenre = "Romance"; break;
            case 5: selectedGenre = "Sci-Fi"; break;
            case 6: selectedGenre = "Drama"; break;
            case 7: selectedGenre = "Animation"; break;
        }

        while (true) {
            cout << "Enter minimum rating (0-10): ";

            if (cin >> minRating &&
                minRating >= 0 && minRating <= 10) {
                break;
            }

            cout << "Invalid rating! Enter a value from 0 to 10.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cout << "\nPreferences saved successfully!\n";
        cout << "Selected Genre: " << selectedGenre << '\n';
        cout << "Minimum Rating: " << minRating << '\n';
    }

    string getGenre() const {
        return selectedGenre;
    }

    float getMinRating() const {
        return minRating;
    }
};
