🎯 AI-Powered Tic-Tac-Toe in C
🔹 An unbeatable Tic-Tac-Toe AI using the Minimax Algorithm
This project implements a Tic-Tac-Toe game with an AI opponent using the Minimax algorithm. The AI plays optimally, making it nearly impossible to defeat. The game offers Player vs Player and Player vs AI modes.

📌 Features
✅ Two Game Modes:

Player vs Player (PvP) – Play against a friend.
Player vs AI (PvAI) – Challenge an unbeatable AI using the Minimax algorithm.
✅ Smart AI:

The AI never loses and plays the best possible moves.
Implements the Minimax algorithm for decision-making.
Can be further optimized using Alpha-Beta Pruning.
✅ Game Mechanics:

Classic 3x3 grid with turn-based gameplay.
Automatic win/loss detection and draw handling.
Displays the game board in the terminal.
Ensures valid moves and prevents overwriting existing moves.
✅ Efficient Code Structure:

Uses modular functions for easy readability and maintenance.
Implements file-based structure (tic_tac_toe.c & tic_tac_toe.h).
Supports future enhancements like custom board sizes and difficulty levels.
🛠 How It Works
🏆 Minimax Algorithm (AI Decision-Making)
The AI analyzes all possible moves and chooses the best one.

Base cases:
If AI wins → +10 score.
If Player wins → -10 score.
If it's a draw → 0 score.
Recursively evaluates all board states and picks the optimal move.
The AI always plays to win or force a draw if winning isn't possible.
🚀 Installation & Setup
🔹 Step 1: Clone the Repository
sh
Copy
Edit
git clone https://github.com/yourusername/AI-Tic-Tac-Toe.git
cd AI-Tic-Tac-Toe
🔹 Step 2: Compile the Program
sh
Copy
Edit
gcc tic_tac_toe.c -o tic_tac_toe
🔹 Step 3: Run the Game
sh
Copy
Edit
./tic_tac_toe
🎮 How to Play?
Choose a mode: Player vs Player or Player vs AI.
Enter your move by specifying the row and column (1-3).
Watch the AI think and make its move in PvAI mode.
Game ends when a player wins or the board is full.
Restart and play again!
🏗️ Project Structure
bash
Copy
Edit
📦 AI-Tic-Tac-Toe  
 ┣ 📜 README.md       # Project Documentation  
 ┣ 📜 tic_tac_toe.c   # Main C program  
 ┣ 📜 tic_tac_toe.h   # Header file with function declarations  
 ┣ 📜 Makefile        # Compilation automation (Optional)  
 ┗ 📜 LICENSE         # Open-source license  
🔮 Planned Enhancements
🚀 Alpha-Beta Pruning – Optimizes AI decision speed.
🎨 Better UI – Add graphical interface (ncurses / SDL).
📏 Custom Board Size – Support for 4x4, 5x5 grids.
📊 Difficulty Levels – Easy, Medium, Hard AI.

🛡 License
This project is open-source under the MIT License. Feel free to modify and enhance it!

🤝 Contributing
Want to improve this project? Fork the repo, create a feature branch, and submit a pull request.

sh
Copy
Edit
git clone https://github.com/yourusername/AI-Tic-Tac-Toe.git  
git checkout -b feature-new-improvement  
git commit -m "Added a new feature"  
git push origin feature-new-improvement  
🏆 Author & Credits
👨‍💻 Developed by: Ronit Raj
📬 Contact: ronitrajrsr0409@gmail.com

💙 If you like this project, ⭐ Star this repository on GitHub! 🚀
