#include "defs.h"
#include "splash_screen.h"
#include "highscore_screen.h"
#include "game_screen.h"
#include "initials_screen.h"

int main()
{
	string name = "EFC";
	int difficulty;
	double score;
	splash_screen s {Point{100,100}, 800, 600, "Digit Figit"};
	gui_main();
	highscore_screen h {Point{100,100}, 800, 600, "Highscores", difficulty};
	gui_main();
	game_screen g {difficulty, Point{100,100}, 800, 600, "Game", score};
	gui_main();
	name = get_initials();
	score_sorter(score, name, difficulty);
	get_scores(difficulty);
	return 0;
}
