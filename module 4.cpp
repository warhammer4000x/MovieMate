class MovieDisplay {
public:
    void sortMovies(Movie recommendations[], int total) {
        for (int i = 0; i < total - 1; i++) {
            for (int j = 0; j < total - i - 1; j++) {

                if (recommendations[j].rating <
                    recommendations[j + 1].rating) {

                    Movie temp = recommendations[j];
                    recommendations[j] = recommendations[j + 1];
                    recommendations[j + 1] = temp;
                }
            }
        }
    }

    void displayMovies(Movie recommendations[], int total) {
        sortMovies(recommendations, total);

        if (total == 0) {
            cout << "\nNo movies found matching your preferences.\n";
            return;
        }

        int start = 0;
        char choice;

        while (start < total) {
            int end = start + 5;

            if (end > total) {
                end = total;
            }

            cout << "\n========== RECOMMENDED MOVIES ==========\n";

            for (int i = start; i < end; i++) {
                cout << "\nMovie " << i + 1 << endl;
                cout << "Name: " << recommendations[i].name << endl;
                cout << "Genre: " << recommendations[i].genre << endl;
                cout << "Rating: " << recommendations[i].rating << "/10" << endl;
                cout << "Release Year: " << recommendations[i].releaseYear << endl;
                cout << "----------------------------------------\n";
            }

            cout << "\nShowing " << start + 1 << "-" << end
                 << " of " << total << " movies.\n";

            start = end;

            if (start >= total) {
                cout << "\nYou have viewed all recommended movies!\n";
                break;
            }

            while (true) {
                cout << "\nDo you want to see the next 5 movies? (y/n): ";
                cin >> choice;

                if (choice == 'y' || choice == 'Y' ||
                    choice == 'n' || choice == 'N') {
                    break;
                }

                cout << "Invalid choice! Please enter y or n.\n";
            }

            if (choice == 'n' || choice == 'N') {
                cout << "\nThank you for using the Movie Recommendation System!\n";
                break;
            }
        }
    }
};