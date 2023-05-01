# so_long
So Long, a very small 2D game, a good game needs some good assets. In order to create 2D games, you will have to search for tiles, tilesets, sprites, and sprite sheets.
Fortunately, some talented artists are willing to share their works on platforms like:
itch.io
Show your skills in the following areas: window management, event handling, colors, textures, and so forth, using graphical library: the MiniLibX! This library was developed internally and includes basic necessary tools to open a window, create images and deal with keyboard and mouse events.
The other goals are similar to every other goal for this first year: being rigorous, level up in C programming, use basic algorithms, do some information research, and so forth.
## Common Instructions
 - Your project must be written in C.
 - Your project must be written in accordance with the Norm. If you have bonus files/functions, they are included in the norm check and you will receive a 0 if there is a norm error inside.
 - Your functions should not quit unexpectedly (segmentation fault, bus error, double free, etc) apart from undefined behaviors. If this happens, your project will be considered non functional and will receive a 0 during the evaluation.
 - All heap allocated memory space must be properly freed when necessary. No leaks will be tolerated.
 - If the subject requires it, you must submit a Makefile which will compile your source files to the required output with the flags -Wall, -Wextra and -Werror, use cc, and your Makefile must not relink.
 - Your Makefile must at least contain the rules $(NAME), all, clean, fclean and re.
 - To turn in bonuses to your project, you must include a rule bonus to your Makefile, which will add all the various headers, librairies or functions that are forbidden on the main part of the project. Bonuses must be in a different file _bonus.{c/h} if the subject does not specify anything else. Mandatory and bonus part evaluation is done separately.
 - If your project allows you to use your libft, you must copy its sources and its associated Makefile in a libft folder with its associated Makefile. Your project’s Makefile must compile the library by using its Makefile, then compile the project.
 - We encourage you to create test programs for your project even though this work won’t have to be submitted and won’t be graded. It will give you a chance to easily test your work and your peers’ work. You will find those tests especially useful during your defence. Indeed, during defence, you are free to use your tests and/or the tests of the peer you are evaluating.
 - Submit your work to your assigned git repository. Only the work in the git reposi- tory will be graded. If Deepthought is assigned to grade your work, it will be done after your peer-evaluations. If an error happens in any section of your work during Deepthought’s grading, the evaluation will stop.
## Game
 - The player’s goal is to collect every collectible present on the map, then escape chosing the shortest possible route.
 - The W, A, S, and D keys must be used to move the main character.
 - The player should be able to move in these 4 directions: up, down, left, right.
 - The player should not be able to move into walls.
 - At every move, the current number of movements must be displayed in the shell.
 - You have to use a 2D view (top-down or profile).
 - The game doesn’t have to be real time.
 - Although the given examples show a dolphin theme, you can create the world you want.
## Graphic management
 - Your program has to display the image in a window.
 - The management of your window must remain smooth (changing to another window, minimizing, and so forth).
 - Pressing ESC must close the window and quit the program in a clean way.
 - Clicking on the cross on the window’s frame must close the window and quit the program in a clean way.
 - The use of the images of the MiniLibX is mandatory.
## Map
 - The map has to be constructed with 3 components: walls, collectibles, and free space.
 - The map can be composed of only these 5 characters: 
 0 for an empty space,
 1 for a wall,
 C for a collectible,
 E for a map exit,
 P for the player’s starting position.
 - The map must contain 1 exit, at least 1 collectible, and 1 starting position to be valid.
 - The map must be rectangular.
 - The map must be closed/surrounded by walls. If it’s not, the program must return an error.
 - You have to check if there’s a valid path in the map.
 - You must be able to parse any kind of map, as long as it respects the above rules.
 - If any misconfiguration of any kind is encountered in the file, the program must exit in a clean way, and return "Error\n" followed by an explicit error message of your choice.
