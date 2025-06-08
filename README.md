# SGPA Calculator
The **SGPA Calculator** is a C++ program designed to calculate the Semester Grade Point Average (SGPA) for students based on their subject grades and credit hours. The program supports both numeric grade points and letter grades (like O, A, B, etc.), making it flexible for different grading systems.

## 🔧 Features
- Accepts both numeric (`0-10`) and character-based grades (`O, A, B, ..., I`)
- Handles invalid inputs and incomplete subjects gracefully
- Automatically skips subjects with 'I' (Incomplete) grades
- Calculates weighted average based on credit hours
- Easy to use, console-based interface

## 🛠️ Technologies Used
- C++
- Standard Template Library (STL)

## 💡 How It Works
1. User inputs the number of subjects in the semester.
2. Selects the grade input type: numeric or character.
3. For each subject, inputs the grade and credit.
4. The program calculates and displays the SGPA.

## 📦 Future Enhancements
- CGPA calculator for multiple semesters(created-> https://github.com/ANOS1106/CGPA_caluclator/blob/main/CGPA_calculator.cpp )
- GUI using C++ frameworks like Qt or GTK
- Export results to a text or CSV file
