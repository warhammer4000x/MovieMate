class RecommendationEngine {
public:
    int getRecommendations(
        const MovieDatabase &database,
        const UserPreferences &user,
        Movie recommendations[]) {

        string genre = user.getGenre();
        float minRating = user.getMinRating();

        int count = 0;

        for (int i = 0; i < database.movieCount; i++) {
            if (database.movies[i].genre == genre &&
                database.movies[i].rating >= minRating) {

                recommendations[count] = database.movies[i];
                count++;
            }
        }

        return count;
    }
};