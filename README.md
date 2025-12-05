# Simple-Calender

This project implements a simple console-based calendar program in **C** and **Java**.  
The user can enter **any number of days**, and for each day provide:

- Date (integer)
- Day name (e.g., Monday)
- Activity (a sentence)

After entering all records, the program prints a clean table of all entries.

---

## 🚀 Features
- User chooses how many days to store.
- Dynamic memory allocation in C.
- Array-based storage in Java.
- Accepts full activity sentences (including spaces).
- Clean tabular output.

---

## 📂 Files Included
| File | Description |
|------|-------------|
| `calendar.c` | C implementation using dynamic memory allocation |
| `CalendarApp.java` | Java implementation using classes and arrays |
| `README.md` | Documentation file |

---

## 🧠 Problem Statement
Create a program that lets the user store details of multiple calendar days.  

For each day, store:
1. **Date** — integer  
2. **Day name** — string  
3. **Activity** — string (may contain spaces)

The program should:
1. Ask the user how many days they want to enter.
2. Read all entries.
3. Display them in a tabular format.

---

## Possible Improvements:
1. Save data to a file.
2. Add editing and deletion features.
3. Use structures/classes for monthly or yearly calendars.
4. Add colorized output.

---

## 🛠️ How to Compile & Run (C)

### **Compile**

**For C:**

gcc calendar.c -o calendar

./calendar

**For JAVA:**

javac CalendarApp.java

java CalendarApp

