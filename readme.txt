Guess 3.1
---------

Version 3 of the number guessing game.

Just invoke the game and you will be prompted to guess a number from 1 to 10:

  >
  
In Version 3.0 the Prompt had to be shrinked down to a ">" because of the limitation of the code space available.

If you guess the number correctly you will get a shout of joy.

If you guess wrong you can guess once more until you guess the number right.

The game finishes with guessing the number correctly.


Attention: When a letter is entered at the prompt the program gets into an infinite loop that shows the prompt all the time all over the terminal window.

If that happens, you can close the terminal window. This also makes the program stop.



Changes:
--------

Version 3.1:

Restructured the code a little to make it more readable and maintainable


Version 3.0:

Replaced the dice()- Function by the usage of a class due to usage of Peli 0.4 in this game.

This was necessary because it was not possible to compile when stand alone functions and classes were used together. This issue is to be resolved to regain backward compatiblility to Peli 0.3, however Peli is supposed to be designed as a collection of classes the introduction of classes was more important.


Version 2.0:

- The number that is to guess is a calculated random number, not a hardcoded
  one anymore as it was before.

- First serious use of the Peli- engine (Version 0.2)


Version 1.0:

Initial version