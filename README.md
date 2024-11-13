# Lottery Game

A simple lottery-style game in C++ where players can:
- Set up their profile.
- Enter numbers.
- Randomly generate a set of winning numbers.
- Check if they won any prizes based on the number of matches.

## Table of Contents
- [Setup and Requirements](#setup-and-requirements)
- [Features](#features)
- [Usage](#usage)
  - [Building and Running](#building-and-running)
  - [Gameplay Steps](#gameplay-steps)
- [Code Overview](#code-overview)
  - [Functions](#functions)
  - [Prize Table](#prize-table)
- [Credits](#credits)

## Setup and Requirements

### Requirements
- A C++ compiler (e.g., `g++` for Linux or MinGW for Windows).
- C++ Standard Library.

## Features

- Allows players to enter their name and select a game type.
- Lets players add coins to their balance.
- Allows players to enter their chosen numbers.
- Generates random numbers as "winning numbers."
- Checks how many of the player's numbers match the winning numbers.
- Calculates and displays a prize based on the matches and game type.

## Usage

### Building and Running

1. **Compile the program**: Use a C++ compiler to compile `lottery_game.cpp`.
   ```bash
   g++ lottery_game.cpp -o lottery_game
   ./lottery_game

## Gameplay Steps

1. **Start the Game**: Enter your name when prompted.
2. **Choose Game Type**: Select a game type by entering a number between 1 and 10.
3. **Add Coins**: Specify the number of coins you'd like to add to your balance.
4. **Enter Numbers**: Input 10 numbers of your choice as your lottery numbers.
5. **Generate Winning Numbers**: The program will generate 20 unique random numbers as winning numbers.
6. **View Matches**: The program will compare your numbers to the winning numbers and display how many matches you had.
7. **Check Prize**: Based on your matches, game type, and coin balance, the program will calculate and display your prize.

## Code Overview

### Functions

- **`in()`**: Prompts the player to enter their name and select a game type.
- **`coin_upload()`**: Allows the player to add coins to their balance.
- **`readton()`**: Reads and stores 10 numbers from the player as their lottery numbers.
- **`isdup(int size, int arr[], int num)`**: Checks for duplicate numbers when generating winning numbers.
- **`numbers_generate()`**: Generates 20 unique random numbers to serve as winning numbers.
- **`talalatok()`**: Compares the player's numbers to the winning numbers and counts the matches.
- **`nyerotabla()`**: Calculates the player's prize based on a prize table, the number of matches, and the player's game type.

### Prize Table

The prize table is defined in the `nyerotabla` function. The matrix structure represents various prize multipliers depending on the number of matches (`db_talalat`) and game type (`tipus`).

For example, if the player had 3 matches in a game of type 2, the prize multiplier from the matrix would be `1200`, which is then multiplied by the player's coin balance to determine the final prize.

## Credits

- **Developed by**: Ilonczai László
- **Language**: C++
