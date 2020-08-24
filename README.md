# Castle Adventure

It is a CLI game. 

The player has to explore in the castle with many levels and a lot of rooms. The task of the player is to find a room where the princess is prisoned and take her leave the castle. There are many types of rooms, and each type of room has different types of exits. Note that there's a monster in one of the rooms, which the exact location is not able to be aware. But once the player meets a monster, the game is over.

This project include:

* random map, within 5x5 blocks
  * Lobby: only one, the bottom must be 'lobby'
  * Pitfall: monster will move 1 block towards you
  * Prison: a prisoner will tell you the orientation of the monster
  * Cellar: no special event
  * Treasury: you will get one of the three items ( Philosophy's_Stone, Random_Amulet, The_Prophecy) 
  * Study: you will get one of the two books ( The Map of the Castle, The King in Yellow)
* special  instruction : 
  * input 'Map', will show the map you have already explored.