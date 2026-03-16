# 💰 Expense Splitter (C++)

A simple C++ console application that helps a group of friends split shared expenses fairly.  
The program calculates how much each person owes or should receive and generates the minimum number of transactions required to settle all debts.

---

## 📌 Features

- Accepts multiple friends participating in an expense
- Records how much each person paid
- Calculates the equal share of the total expense
- Identifies creditors (who should receive money)
- Identifies debtors (who owe money)
- Generates the minimum number of transactions to settle balances

---

## ⚙️ How It Works

1. The program asks for the number of friends.
2. It takes the names of all participants.
3. Each person enters the amount they paid.
4. The program calculates:
   - Total expense
   - Equal share per person
5. It determines:
   - Who paid more (creditor)
   - Who paid less (debtor)
6. It prints who should pay whom and how much.

---

## 🧠 Algorithm Used

This project uses a greedy approach:

1. Calculate each person's balance.
2. Separate people into creditors and debtors.
3. Sort them based on the amount owed.
4. Match the largest debtor with the largest creditor.
5. Continue until all balances are settled.

This ensures the minimum number of transactions.

---

## 🖥️ Example

### Input

Enter number of friends: 5

Enter names:
Kaifi  
Ravi  
Rahul  
Danish  
Kapil  

Enter amount paid by each:  
1000  
800  
700  
900  
400  

### Output

Transactions:

Kapil pays Danish : 140  
Kapil pays Ravi : 40  
Kapil pays Rahul : 60  
Kapil pays Kaifi : 360  

---

## 📂 Project Structure

expense-splitter/
│
├── expense_splitter.cpp
└── README.md

---

## 🛠️ Technologies Used

- C++
- Standard Template Library (STL)
  - vector
  - unordered_map
  - algorithm

---

## ▶️ How to Run

### 1. Compile the program

g++ expense_splitter.cpp -o expense

### 2. Run the program

./expense

---

## 🚀 Future Improvements

- Add file input support
- Add graphical user interface (GUI)
- Convert into a web or mobile application
- Store expenses in a database

---

## 👨‍💻 Author

Kaifi  
Student Developer | C++ | Data Structures | AI & ML
