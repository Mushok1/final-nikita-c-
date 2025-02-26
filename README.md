# Asyk Game Simulator

A C++ console application that simulates the traditional Central Asian game of Asyk (Асык).

## About the Game

Asyk is a traditional game played in Kazakhstan, Kyrgyzstan, and other Central Asian countries. The game uses "asyks" (асыктар), which are traditionally ankle bones of sheep or other animals. In this simulator, we represent the four possible positions an asyk can land in:

- **Taypa (Тайпа)** - The asyk lands on its side
- **Buke (Бүке)** - The asyk lands with the concave side up
- **Shike (Шике)** - The asyk lands with the convex side up
- **Alshy (Алшы)** - The asyk lands standing upright (the rarest and most valuable position)

## Scoring System

This simulator uses the following scoring system:
- **Taypa (Тайпа)**: 0 points
- **Buke (Бүке)**: 1 point
- **Shike (Шике)**: 2 points
- **Alshy (Алшы)**: 3 points

## Features

- Customizable number of players
- Configurable number of rounds
- Random asyk toss simulation
- Automatic score tracking
- Winner determination

## Installation

### Prerequisites
- C++ compiler (GCC, Clang, or MSVC)
- CMake (optional, for easier building)

### Building from Source

#### Using G++
```bash
g++ project.cpp -o asyk_game
```

#### Using Visual Studio Code
1. Open the project in VS Code
2. Make sure you have the C/C++ extension installed
3. Place the provided `tasks.json` file in the `.vscode` folder
4. Press `Ctrl+Shift+B` to build the project

## Usage

After compiling the program, run it from the command line:

```bash
./asyk_game  # On Linux/Mac
asyk_game.exe  # On Windows
```

Follow the on-screen prompts to:
1. Enter the number of players
2. Enter the number of rounds
3. Watch as each player tosses the asyk and accumulates points
4. See the final scores and winner announcement

## Game Flow

1. The program will ask for the number of players
2. Then it will ask for the number of rounds to play
3. Each player takes turns throwing the asyk in each round
4. Points are awarded based on how the asyk lands
5. After all rounds are complete, the total scores are displayed
6. The player with the highest score is declared the winner

## Implementation Details

The simulation uses a random number generator to simulate the four possible landing positions of the asyk. The probability of each position is equal in this simulation, though in real life some positions (like Alshy) are much rarer.

## License

[MIT License](LICENSE)

## Contributing

Contributions to improve the game are welcome! Some ideas for enhancements:
- Add a graphical interface
- Implement more realistic probabilities for different asyk positions
- Add more complex game variants with traditional rules
- Support for network play
