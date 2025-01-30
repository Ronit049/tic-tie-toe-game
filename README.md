# tic-tie-toe-game
An AI-Based Tic-Tac-Toe using C programming can be implemented with the Minimax algorithm.
🚀 Features of AI-Based Tic-Tac-Toe
✅ Two modes: Player vs Player & Player vs AI
✅ AI uses Minimax algorithm for optimal moves
✅ Board displayed in the terminal
✅ Checks for win, loss, or draw
✅ User-friendly interface

🛠️ Implementation Plan
1️⃣ Define the Board and Functions
Create a 3x3 array for the Tic-Tac-Toe grid.
Implement functions for:
Printing the board
Checking for a win, loss, or draw
Taking user input
AI move using the Minimax algorithm
2️⃣ Implement Minimax Algorithm
Minimax is a recursive function that evaluates all possible moves:
AI ('O') tries to maximize score.
Player ('X') tries to minimize AI’s score.
Base cases:
If AI wins → return +10
If Player wins → return -10
If it's a draw → return 0
3️⃣ Game Loop
Display board
Take user input
AI makes an optimal move
Check for win/loss/draw
Repeat until game ends



📌 How to Run
Clone the repository
bash
Copy
Edit
git clone https://github.com/yourusername/AI-Tic-Tac-Toe.git
cd AI-Tic-Tac-Toe
Compile the program
Copy
Edit
gcc tic_tac_toe.c -o tic_tac_toe
Run the game
bash
Copy
Edit
./tic_tac_toe
🔥 Next Steps
Add a menu for mode selection (PvP or PvAI).
Implement a better UI using ncurses or graphics.h.
Allow custom board sizes (4x4, 5x5, etc.).
Optimize Minimax with Alpha-Beta Pruning.
