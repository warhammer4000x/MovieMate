#include <iostream>
#include <string>
#include <limits>


using namespace std;

const int MOVIES_PER_GENRE = 80;
const int GENRE_COUNT = 7;
const int TOTAL_MOVIES = 560;

class Movie {
public:
    string name;
    string genre;
    float rating;
    int releaseYear;

    Movie() {
        name = "";
        genre = "";
        rating = 0;
        releaseYear = 0;
    }

    Movie(string n, string g, float r, int y) {
        name = n;
        genre = g;
        rating = r;
        releaseYear = y;
    }
};

class MovieDatabase {
public:
    Movie movies[TOTAL_MOVIES];
    int movieCount = 0;

    MovieDatabase() {
        
        movies[movieCount++] = Movie("The Dark Knight", "Action", 9.0, 2008);
        movies[movieCount++] = Movie("Inception", "Action", 8.8, 2010);
        movies[movieCount++] = Movie("The Lord of the Rings: The Return of the King", "Action", 9.0, 2003);
        movies[movieCount++] = Movie("The Lord of the Rings: The Fellowship of the Ring", "Action", 8.9, 2001);
        movies[movieCount++] = Movie("The Lord of the Rings: The Two Towers", "Action", 8.8, 2002);
        movies[movieCount++] = Movie("The Matrix", "Action", 8.7, 1999);
        movies[movieCount++] = Movie("Terminator 2: Judgment Day", "Action", 8.6, 1991);
        movies[movieCount++] = Movie("Gladiator", "Action", 8.5, 2000);
        movies[movieCount++] = Movie("Avengers: Infinity War", "Action", 8.4, 2018);
        movies[movieCount++] = Movie("Avengers: Endgame", "Action", 8.4, 2019);
        movies[movieCount++] = Movie("Spider-Man: No Way Home", "Action", 8.2, 2021);
        movies[movieCount++] = Movie("Top Gun: Maverick", "Action", 8.2, 2022);
        movies[movieCount++] = Movie("The Batman", "Action", 7.8, 2022);
        movies[movieCount++] = Movie("John Wick", "Action", 7.4, 2014);
        movies[movieCount++] = Movie("John Wick: Chapter 2", "Action", 7.4, 2017);
        movies[movieCount++] = Movie("John Wick: Chapter 3", "Action", 7.4, 2019);
        movies[movieCount++] = Movie("John Wick: Chapter 4", "Action", 7.6, 2023);
        movies[movieCount++] = Movie("Mission: Impossible", "Action", 7.1, 1996);
        movies[movieCount++] = Movie("Mission: Impossible - Fallout", "Action", 7.7, 2018);
        movies[movieCount++] = Movie("Casino Royale", "Action", 8.0, 2006);
        movies[movieCount++] = Movie("Skyfall", "Action", 7.8, 2012);
        movies[movieCount++] = Movie("Die Hard", "Action", 8.2, 1988);
        movies[movieCount++] = Movie("Mad Max: Fury Road", "Action", 8.1, 2015);
        movies[movieCount++] = Movie("The Bourne Identity", "Action", 7.8, 2002);
        movies[movieCount++] = Movie("The Bourne Ultimatum", "Action", 8.0, 2007);
        movies[movieCount++] = Movie("Kill Bill: Vol. 1", "Action", 8.2, 2003);
        movies[movieCount++] = Movie("Kill Bill: Vol. 2", "Action", 8.0, 2004);
        movies[movieCount++] = Movie("Django Unchained", "Action", 8.5, 2012);
        movies[movieCount++] = Movie("The Departed", "Action", 8.5, 2006);
        movies[movieCount++] = Movie("Heat", "Action", 8.3, 1995);
        movies[movieCount++] = Movie("Casino", "Action", 8.2, 1995);
        movies[movieCount++] = Movie("Scarface", "Action", 8.3, 1983);
        movies[movieCount++] = Movie("The Fugitive", "Action", 7.8, 1993);
        movies[movieCount++] = Movie("Edge of Tomorrow", "Action", 7.9, 2014);
        movies[movieCount++] = Movie("Minority Report", "Action", 7.6, 2002);
        movies[movieCount++] = Movie("Logan", "Action", 8.1, 2017);
        movies[movieCount++] = Movie("Deadpool", "Action", 8.0, 2016);
        movies[movieCount++] = Movie("Deadpool 2", "Action", 7.6, 2018);
        movies[movieCount++] = Movie("Iron Man", "Action", 7.9, 2008);
        movies[movieCount++] = Movie("Captain America: The Winter Soldier", "Action", 7.7, 2014);
        movies[movieCount++] = Movie("Guardians of the Galaxy", "Action", 8.0, 2014);
        movies[movieCount++] = Movie("Black Panther", "Action", 7.3, 2018);
        movies[movieCount++] = Movie("Thor: Ragnarok", "Action", 7.9, 2017);
        movies[movieCount++] = Movie("The Incredibles", "Action", 8.0, 2004);
        movies[movieCount++] = Movie("Crouching Tiger, Hidden Dragon", "Action", 7.9, 2000);
        movies[movieCount++] = Movie("Hero", "Action", 7.9, 2002);
        movies[movieCount++] = Movie("Ip Man", "Action", 8.0, 2008);
        movies[movieCount++] = Movie("Police Story", "Action", 7.5, 1985);
        movies[movieCount++] = Movie("Enter the Dragon", "Action", 7.6, 1973);
        movies[movieCount++] = Movie("The Raid: Redemption", "Action", 7.6, 2011);
        movies[movieCount++] = Movie("The Raid 2", "Action", 8.0, 2014);
        movies[movieCount++] = Movie("Speed", "Action", 7.3, 1994);
        movies[movieCount++] = Movie("Point Break", "Action", 7.3, 1991);
        movies[movieCount++] = Movie("Predator", "Action", 7.8, 1987);
        movies[movieCount++] = Movie("RoboCop", "Action", 7.6, 1987);
        movies[movieCount++] = Movie("Lethal Weapon", "Action", 7.6, 1987);
        movies[movieCount++] = Movie("The Rock", "Action", 7.4, 1996);
        movies[movieCount++] = Movie("Face/Off", "Action", 7.3, 1997);
        movies[movieCount++] = Movie("Con Air", "Action", 6.9, 1997);
        movies[movieCount++] = Movie("Man on Fire", "Action", 7.7, 2004);
        movies[movieCount++] = Movie("Taken", "Action", 7.7, 2008);
        movies[movieCount++] = Movie("300", "Action", 7.6, 2006);
        movies[movieCount++] = Movie("Troy", "Action", 7.3, 2004);
        movies[movieCount++] = Movie("Braveheart", "Action", 8.3, 1995);
        movies[movieCount++] = Movie("The Last Samurai", "Action", 7.8, 2003);
        movies[movieCount++] = Movie("Rambo: First Blood", "Action", 7.7, 1982);
        movies[movieCount++] = Movie("First Blood Part II", "Action", 6.5, 1985);
        movies[movieCount++] = Movie("Rocky", "Action", 8.1, 1976);
        movies[movieCount++] = Movie("Creed", "Action", 7.6, 2015);
        movies[movieCount++] = Movie("The Equalizer", "Action", 7.2, 2014);
        movies[movieCount++] = Movie("Nobody", "Action", 7.4, 2021);
        movies[movieCount++] = Movie("Baby Driver", "Action", 7.6, 2017);
        movies[movieCount++] = Movie("Drive", "Action", 7.8, 2011);
        movies[movieCount++] = Movie("The Transporter", "Action", 6.8, 2002);
        movies[movieCount++] = Movie("Ronin", "Action", 7.2, 1998);
        movies[movieCount++] = Movie("The Mask of Zorro", "Action", 6.8, 1998);
        movies[movieCount++] = Movie("The Mummy", "Action", 7.1, 1999);
        movies[movieCount++] = Movie("National Treasure", "Action", 6.9, 2004);
        movies[movieCount++] = Movie("Sherlock Holmes", "Action", 7.6, 2009);
        movies[movieCount++] = Movie("Kingsman: The Secret Service", "Action", 7.7, 2014);
        movies[movieCount++] = Movie("The Gentlemen", "Action", 7.8, 2019);
        // COMEDY MOVIES — 80 ENTRIES
 movies[movieCount++] = Movie("3 Idiots", "Comedy", 8.4, 2009);
movies[movieCount++] = Movie("The Intouchables", "Comedy", 8.5, 2011);
movies[movieCount++] = Movie("Modern Times", "Comedy", 8.5, 1936);
movies[movieCount++] = Movie("City Lights", "Comedy", 8.5, 1931);
movies[movieCount++] = Movie("The Great Dictator", "Comedy", 8.4, 1940);
movies[movieCount++] = Movie("Life Is Beautiful", "Comedy", 8.6, 1997);
movies[movieCount++] = Movie("Some Like It Hot", "Comedy", 8.2, 1959);
movies[movieCount++] = Movie("The Apartment", "Comedy", 8.3, 1960);
movies[movieCount++] = Movie("Groundhog Day", "Comedy", 8.0, 1993);
movies[movieCount++] = Movie("The Truman Show", "Comedy", 8.2, 1998);
movies[movieCount++] = Movie("Back to the Future", "Comedy", 8.5, 1985);
movies[movieCount++] = Movie("Home Alone", "Comedy", 7.7, 1990);
movies[movieCount++] = Movie("The Mask", "Comedy", 6.9, 1994);
movies[movieCount++] = Movie("Mrs. Doubtfire", "Comedy", 7.1, 1993);
movies[movieCount++] = Movie("Dumb and Dumber", "Comedy", 7.3, 1994);
movies[movieCount++] = Movie("Ace Ventura: Pet Detective", "Comedy", 6.9, 1994);
movies[movieCount++] = Movie("The Big Lebowski", "Comedy", 8.1, 1998);
movies[movieCount++] = Movie("Ferris Bueller's Day Off", "Comedy", 7.8, 1986);
movies[movieCount++] = Movie("Ghostbusters", "Comedy", 7.8, 1984);
movies[movieCount++] = Movie("Groundhog Day", "Comedy", 8.0, 1993);
movies[movieCount++] = Movie("Shaun of the Dead", "Comedy", 7.9, 2004);
movies[movieCount++] = Movie("Hot Fuzz", "Comedy", 7.8, 2007);
movies[movieCount++] = Movie("The World's End", "Comedy", 6.9, 2013);
movies[movieCount++] = Movie("Superbad", "Comedy", 7.6, 2007);
movies[movieCount++] = Movie("The Hangover", "Comedy", 7.7, 2009);
movies[movieCount++] = Movie("The Hangover Part II", "Comedy", 6.5, 2011);
movies[movieCount++] = Movie("Bridesmaids", "Comedy", 6.8, 2011);
movies[movieCount++] = Movie("Mean Girls", "Comedy", 7.1, 2004);
movies[movieCount++] = Movie("Legally Blonde", "Comedy", 6.5, 2001);
movies[movieCount++] = Movie("Clueless", "Comedy", 6.9, 1995);
movies[movieCount++] = Movie("Pretty Woman", "Comedy", 7.1, 1990);
movies[movieCount++] = Movie("The Devil Wears Prada", "Comedy", 6.9, 2006);
movies[movieCount++] = Movie("Crazy Rich Asians", "Comedy", 6.9, 2018);
movies[movieCount++] = Movie("The Grand Budapest Hotel", "Comedy", 8.1, 2014);
movies[movieCount++] = Movie("Fantastic Mr. Fox", "Comedy", 7.9, 2009);
movies[movieCount++] = Movie("The Royal Tenenbaums", "Comedy", 7.6, 2001);
movies[movieCount++] = Movie("Little Miss Sunshine", "Comedy", 7.8, 2006);
movies[movieCount++] = Movie("Juno", "Comedy", 7.4, 2007);
movies[movieCount++] = Movie("Knives Out", "Comedy", 7.9, 2019);
movies[movieCount++] = Movie("The Nice Guys", "Comedy", 7.4, 2016);
movies[movieCount++] = Movie("Tropic Thunder", "Comedy", 7.1, 2008);
movies[movieCount++] = Movie("Zombieland", "Comedy", 7.6, 2009);
movies[movieCount++] = Movie("21 Jump Street", "Comedy", 7.2, 2012);
movies[movieCount++] = Movie("22 Jump Street", "Comedy", 7.0, 2014);
movies[movieCount++] = Movie("The Proposal", "Comedy", 6.8, 2009);
movies[movieCount++] = Movie("Crazy, Stupid, Love.", "Comedy", 7.4, 2011);
movies[movieCount++] = Movie("About Time", "Comedy", 7.8, 2013);
movies[movieCount++] = Movie("Notting Hill", "Comedy", 7.2, 1999);
movies[movieCount++] = Movie("Four Weddings and a Funeral", "Comedy", 7.1, 1994);
movies[movieCount++] = Movie("The Full Monty", "Comedy", 7.2, 1997);
movies[movieCount++] = Movie("School of Rock", "Comedy", 7.2, 2003);
movies[movieCount++] = Movie("Napoleon Dynamite", "Comedy", 7.0, 2004);
movies[movieCount++] = Movie("Office Space", "Comedy", 7.6, 1999);
movies[movieCount++] = Movie("Clerks", "Comedy", 7.7, 1994);
movies[movieCount++] = Movie("Airplane!", "Comedy", 7.7, 1980);
movies[movieCount++] = Movie("The Naked Gun", "Comedy", 7.6, 1988);
movies[movieCount++] = Movie("Monty Python and the Holy Grail", "Comedy", 8.2, 1975);
movies[movieCount++] = Movie("Life of Brian", "Comedy", 8.0, 1979);
movies[movieCount++] = Movie("The Producers", "Comedy", 7.5, 1967);
movies[movieCount++] = Movie("Tootsie", "Comedy", 7.4, 1982);
movies[movieCount++] = Movie("Big", "Comedy", 7.3, 1988);
movies[movieCount++] = Movie("Trading Places", "Comedy", 7.5, 1983);
movies[movieCount++] = Movie("Coming to America", "Comedy", 7.1, 1988);
movies[movieCount++] = Movie("Beverly Hills Cop", "Comedy", 7.4, 1984);
movies[movieCount++] = Movie("Rush Hour", "Comedy", 7.0, 1998);
movies[movieCount++] = Movie("Rush Hour 2", "Comedy", 6.7, 2001);
movies[movieCount++] = Movie("My Cousin Vinny", "Comedy", 7.6, 1992);
movies[movieCount++] = Movie("The Birdcage", "Comedy", 7.2, 1996);
movies[movieCount++] = Movie("The 40-Year-Old Virgin", "Comedy", 7.1, 2005);
movies[movieCount++] = Movie("Knocked Up", "Comedy", 6.9, 2007);
movies[movieCount++] = Movie("Forgetting Sarah Marshall", "Comedy", 7.1, 2008);
movies[movieCount++] = Movie("Easy A", "Comedy", 7.0, 2010);
movies[movieCount++] = Movie("The Intern", "Comedy", 7.1, 2015);
movies[movieCount++] = Movie("The Secret Life of Walter Mitty", "Comedy", 7.3, 2013);
movies[movieCount++] = Movie("Paddington 2", "Comedy", 7.8, 2017);
movies[movieCount++] = Movie("The Lego Movie", "Comedy", 7.7, 2014);
movies[movieCount++] = Movie("The Mitchells vs. the Machines", "Comedy", 7.6, 2021);
movies[movieCount++] = Movie("Jojo Rabbit", "Comedy", 7.9, 2019);
movies[movieCount++] = Movie("The Banshees of Inisherin", "Comedy", 7.7, 2022);
movies[movieCount++] = Movie("Barbie", "Comedy", 6.8, 2023);

// HORROR MOVIES — 80 ENTRIES

movies[movieCount++] = Movie("The Exorcist", "Horror", 8.1, 1973);
movies[movieCount++] = Movie("The Shining", "Horror", 8.4, 1980);
movies[movieCount++] = Movie("Psycho", "Horror", 8.5, 1960);
movies[movieCount++] = Movie("Alien", "Horror", 8.5, 1979);
movies[movieCount++] = Movie("Aliens", "Horror", 8.4, 1986);
movies[movieCount++] = Movie("The Thing", "Horror", 8.2, 1982);
movies[movieCount++] = Movie("Rosemary's Baby", "Horror", 8.0, 1968);
movies[movieCount++] = Movie("Halloween", "Horror", 7.7, 1978);
movies[movieCount++] = Movie("A Nightmare on Elm Street", "Horror", 7.4, 1984);
movies[movieCount++] = Movie("Friday the 13th", "Horror", 6.4, 1980);
movies[movieCount++] = Movie("The Texas Chain Saw Massacre", "Horror", 7.4, 1974);
movies[movieCount++] = Movie("Night of the Living Dead", "Horror", 7.8, 1968);
movies[movieCount++] = Movie("Dawn of the Dead", "Horror", 7.8, 1978);
movies[movieCount++] = Movie("The Evil Dead", "Horror", 7.3, 1981);
movies[movieCount++] = Movie("Evil Dead II", "Horror", 7.7, 1987);
movies[movieCount++] = Movie("Army of Darkness", "Horror", 7.4, 1992);
movies[movieCount++] = Movie("The Fly", "Horror", 7.6, 1986);
movies[movieCount++] = Movie("The Omen", "Horror", 7.5, 1976);
movies[movieCount++] = Movie("Carrie", "Horror", 7.4, 1976);
movies[movieCount++] = Movie("Poltergeist", "Horror", 7.3, 1982);
movies[movieCount++] = Movie("An American Werewolf in London", "Horror", 7.5, 1981);
movies[movieCount++] = Movie("The Lost Boys", "Horror", 7.2, 1987);
movies[movieCount++] = Movie("Candyman", "Horror", 6.7, 1992);
movies[movieCount++] = Movie("Scream", "Horror", 7.4, 1996);
movies[movieCount++] = Movie("Scream 2", "Horror", 6.3, 1997);
movies[movieCount++] = Movie("The Blair Witch Project", "Horror", 6.5, 1999);
movies[movieCount++] = Movie("The Sixth Sense", "Horror", 8.2, 1999);
movies[movieCount++] = Movie("The Others", "Horror", 7.6, 2001);
movies[movieCount++] = Movie("28 Days Later", "Horror", 7.5, 2002);
movies[movieCount++] = Movie("Dawn of the Dead", "Horror", 7.3, 2004);
movies[movieCount++] = Movie("Saw", "Horror", 7.6, 2004);
movies[movieCount++] = Movie("The Descent", "Horror", 7.2, 2005);
movies[movieCount++] = Movie("The Mist", "Horror", 7.1, 2007);
movies[movieCount++] = Movie("REC", "Horror", 7.4, 2007);
movies[movieCount++] = Movie("Cloverfield", "Horror", 7.0, 2008);
movies[movieCount++] = Movie("Let the Right One In", "Horror", 7.8, 2008);
movies[movieCount++] = Movie("Drag Me to Hell", "Horror", 6.6, 2009);
movies[movieCount++] = Movie("Zombieland", "Horror", 7.6, 2009);
movies[movieCount++] = Movie("The Cabin in the Woods", "Horror", 7.0, 2011);
movies[movieCount++] = Movie("Insidious", "Horror", 6.8, 2010);
movies[movieCount++] = Movie("Sinister", "Horror", 6.8, 2012);
movies[movieCount++] = Movie("The Conjuring", "Horror", 7.5, 2013);
movies[movieCount++] = Movie("The Conjuring 2", "Horror", 7.3, 2016);
movies[movieCount++] = Movie("The Babadook", "Horror", 6.8, 2014);
movies[movieCount++] = Movie("It Follows", "Horror", 6.8, 2014);
movies[movieCount++] = Movie("Oculus", "Horror", 6.5, 2013);
movies[movieCount++] = Movie("The Witch", "Horror", 7.0, 2015);
movies[movieCount++] = Movie("Green Room", "Horror", 7.0, 2015);
movies[movieCount++] = Movie("Train to Busan", "Horror", 7.6, 2016);
movies[movieCount++] = Movie("Don't Breathe", "Horror", 7.1, 2016);
movies[movieCount++] = Movie("Gerald's Game", "Horror", 6.5, 2017);
movies[movieCount++] = Movie("Get Out", "Horror", 7.8, 2017);
movies[movieCount++] = Movie("It", "Horror", 7.3, 2017);
movies[movieCount++] = Movie("A Quiet Place", "Horror", 7.5, 2018);
movies[movieCount++] = Movie("Hereditary", "Horror", 7.3, 2018);
movies[movieCount++] = Movie("Midsommar", "Horror", 7.1, 2019);
movies[movieCount++] = Movie("Doctor Sleep", "Horror", 7.3, 2019);
movies[movieCount++] = Movie("The Lighthouse", "Horror", 7.4, 2019);
movies[movieCount++] = Movie("Ready or Not", "Horror", 6.9, 2019);
movies[movieCount++] = Movie("The Invisible Man", "Horror", 7.1, 2020);
movies[movieCount++] = Movie("Host", "Horror", 6.5, 2020);
movies[movieCount++] = Movie("The Night House", "Horror", 6.5, 2020);
movies[movieCount++] = Movie("Malignant", "Horror", 6.2, 2021);
movies[movieCount++] = Movie("Last Night in Soho", "Horror", 7.0, 2021);
movies[movieCount++] = Movie("X", "Horror", 6.5, 2022);
movies[movieCount++] = Movie("Pearl", "Horror", 7.0, 2022);
movies[movieCount++] = Movie("Barbarian", "Horror", 7.0, 2022);
movies[movieCount++] = Movie("Smile", "Horror", 6.5, 2022);
movies[movieCount++] = Movie("Talk to Me", "Horror", 7.1, 2022);
movies[movieCount++] = Movie("Evil Dead Rise", "Horror", 6.5, 2023);
movies[movieCount++] = Movie("When Evil Lurks", "Horror", 7.0, 2023);
movies[movieCount++] = Movie("The Black Phone", "Horror", 6.9, 2021);
movies[movieCount++] = Movie("The Menu", "Horror", 7.2, 2022);
movies[movieCount++] = Movie("Nope", "Horror", 6.8, 2022);
movies[movieCount++] = Movie("The Others", "Horror", 7.6, 2001);
movies[movieCount++] = Movie("The Ring", "Horror", 7.1, 2002);
movies[movieCount++] = Movie("The Grudge", "Horror", 5.9, 2004);
movies[movieCount++] = Movie("1408", "Horror", 6.8, 2007);
movies[movieCount++] = Movie("The Orphanage", "Horror", 7.4, 2007);
movies[movieCount++] = Movie("The Wailing", "Horror", 7.4, 2016);
movies[movieCount++] = Movie("A Tale of Two Sisters", "Horror", 7.1, 2003);
// START OF ROMANCE MOVIES — 80 ENTRIES

movies[movieCount++] = Movie("Casablanca", "Romance", 8.5, 1942);
movies[movieCount++] = Movie("Roman Holiday", "Romance", 8.0, 1953);
movies[movieCount++] = Movie("An Affair to Remember", "Romance", 7.4, 1957);
movies[movieCount++] = Movie("Breakfast at Tiffany's", "Romance", 7.6, 1961);
movies[movieCount++] = Movie("West Side Story", "Romance", 7.6, 1961);
movies[movieCount++] = Movie("The Sound of Music", "Romance", 8.1, 1965);
movies[movieCount++] = Movie("Love Story", "Romance", 6.9, 1970);
movies[movieCount++] = Movie("Harold and Maude", "Romance", 7.8, 1971);
movies[movieCount++] = Movie("Grease", "Romance", 7.2, 1978);
movies[movieCount++] = Movie("Manhattan", "Romance", 7.8, 1979);

movies[movieCount++] = Movie("Somewhere in Time", "Romance", 7.2, 1980);
movies[movieCount++] = Movie("An Officer and a Gentleman", "Romance", 7.0, 1982);
movies[movieCount++] = Movie("The Princess Bride", "Romance", 8.0, 1987);
movies[movieCount++] = Movie("Dirty Dancing", "Romance", 7.0, 1987);
movies[movieCount++] = Movie("Moonstruck", "Romance", 7.2, 1987);
movies[movieCount++] = Movie("When Harry Met Sally...", "Romance", 7.7, 1989);
movies[movieCount++] = Movie("Say Anything...", "Romance", 7.3, 1989);
movies[movieCount++] = Movie("Pretty Woman", "Romance", 7.1, 1990);
movies[movieCount++] = Movie("Ghost", "Romance", 7.1, 1990);
movies[movieCount++] = Movie("The Bodyguard", "Romance", 6.4, 1992);

movies[movieCount++] = Movie("Sleepless in Seattle", "Romance", 6.8, 1993);
movies[movieCount++] = Movie("Four Weddings and a Funeral", "Romance", 7.1, 1994);
movies[movieCount++] = Movie("Before Sunrise", "Romance", 8.1, 1995);
movies[movieCount++] = Movie("Sense and Sensibility", "Romance", 7.7, 1995);
movies[movieCount++] = Movie("Jerry Maguire", "Romance", 7.3, 1996);
movies[movieCount++] = Movie("Titanic", "Romance", 7.9, 1997);
movies[movieCount++] = Movie("As Good as It Gets", "Romance", 7.7, 1997);
movies[movieCount++] = Movie("Shakespeare in Love", "Romance", 7.1, 1998);
movies[movieCount++] = Movie("Notting Hill", "Romance", 7.2, 1999);
movies[movieCount++] = Movie("10 Things I Hate About You", "Romance", 7.3, 1999);

movies[movieCount++] = Movie("The Wedding Planner", "Romance", 5.3, 2001);
movies[movieCount++] = Movie("Amelie", "Romance", 8.3, 2001);
movies[movieCount++] = Movie("Serendipity", "Romance", 6.8, 2001);
movies[movieCount++] = Movie("Moulin Rouge!", "Romance", 7.6, 2001);
movies[movieCount++] = Movie("A Walk to Remember", "Romance", 7.3, 2002);
movies[movieCount++] = Movie("Love Actually", "Romance", 7.6, 2003);
movies[movieCount++] = Movie("Lost in Translation", "Romance", 7.7, 2003);
movies[movieCount++] = Movie("50 First Dates", "Romance", 6.8, 2004);
movies[movieCount++] = Movie("The Notebook", "Romance", 7.8, 2004);
movies[movieCount++] = Movie("Before Sunset", "Romance", 8.1, 2004);

movies[movieCount++] = Movie("Pride & Prejudice", "Romance", 7.8, 2005);
movies[movieCount++] = Movie("Brokeback Mountain", "Romance", 7.7, 2005);
movies[movieCount++] = Movie("The Holiday", "Romance", 7.0, 2006);
movies[movieCount++] = Movie("Once", "Romance", 7.8, 2007);
movies[movieCount++] = Movie("Enchanted", "Romance", 7.1, 2007);
movies[movieCount++] = Movie("Definitely, Maybe", "Romance", 7.1, 2008);
movies[movieCount++] = Movie("Slumdog Millionaire", "Romance", 8.0, 2008);
movies[movieCount++] = Movie("500 Days of Summer", "Romance", 7.7, 2009);
movies[movieCount++] = Movie("The Vow", "Romance", 6.8, 2012);
movies[movieCount++] = Movie("The Perks of Being a Wallflower", "Romance", 7.9, 2012);

movies[movieCount++] = Movie("About Time", "Romance", 7.8, 2013);
movies[movieCount++] = Movie("Her", "Romance", 8.0, 2013);
movies[movieCount++] = Movie("The Fault in Our Stars", "Romance", 7.7, 2014);
movies[movieCount++] = Movie("The Theory of Everything", "Romance", 7.7, 2014);
movies[movieCount++] = Movie("Brooklyn", "Romance", 7.5, 2015);
movies[movieCount++] = Movie("Carol", "Romance", 7.2, 2015);
movies[movieCount++] = Movie("Me Before You", "Romance", 7.4, 2016);
movies[movieCount++] = Movie("La La Land", "Romance", 8.0, 2016);
movies[movieCount++] = Movie("Your Name", "Romance", 8.4, 2016);
movies[movieCount++] = Movie("The Big Sick", "Romance", 7.5, 2017);

movies[movieCount++] = Movie("Call Me by Your Name", "Romance", 7.8, 2017);
movies[movieCount++] = Movie("To All the Boys I've Loved Before", "Romance", 7.0, 2018);
movies[movieCount++] = Movie("Crazy Rich Asians", "Romance", 6.9, 2018);
movies[movieCount++] = Movie("A Star Is Born", "Romance", 7.6, 2018);
movies[movieCount++] = Movie("Five Feet Apart", "Romance", 7.2, 2019);
movies[movieCount++] = Movie("Portrait of a Lady on Fire", "Romance", 8.1, 2019);
movies[movieCount++] = Movie("Little Women", "Romance", 7.8, 2019);
movies[movieCount++] = Movie("The Half of It", "Romance", 6.9, 2020);
movies[movieCount++] = Movie("Emma.", "Romance", 6.7, 2020);
movies[movieCount++] = Movie("The Map of Tiny Perfect Things", "Romance", 6.8, 2021);

movies[movieCount++] = Movie("West Side Story", "Romance", 7.1, 2021);
movies[movieCount++] = Movie("Licorice Pizza", "Romance", 7.1, 2021);
movies[movieCount++] = Movie("Purple Hearts", "Romance", 6.7, 2022);
movies[movieCount++] = Movie("Decision to Leave", "Romance", 7.3, 2022);
movies[movieCount++] = Movie("Rye Lane", "Romance", 7.2, 2023);
movies[movieCount++] = Movie("Past Lives", "Romance", 7.8, 2023);
movies[movieCount++] = Movie("Anyone But You", "Romance", 6.1, 2023);
movies[movieCount++] = Movie("The Idea of You", "Romance", 6.4, 2024);
movies[movieCount++] = Movie("We Live in Time", "Romance", 7.0, 2024);
movies[movieCount++] = Movie("Materialists", "Romance", 6.3, 2025);


    }

};
