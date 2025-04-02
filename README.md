# 🚀 OOP Assignments in C++

This repository contains solutions for basic Object-Oriented Programming (OOP) assignments in C++. These exercises demonstrate fundamental OOP concepts such as classes, constructors, methods, arrays of objects, and object composition.

---


## 📌 Assignment Summaries

### ✅ Q1 – Account Class with Transfer Feature

**Objective:**  
Create an `Account` class that can store user details and transfer money between accounts.

**Features:**
- Constructors (default, parameterized, copy)
- Setters and getters
- `printInfo()` to display account info
- `TransferTo()` method to move funds between accounts
  
**Sample Code:**
```cpp
Account a(1, "name", 1000);
Account b(a);
a.TransferTo(b, 200);
a.printInfo(); // Balance = 800
b.printInfo(); // Balance = 1200

---

### ✅ Q2 – Student Class with GPA & Max GPA Finder

Objective:
Create a Student class to read and store 5 marks per student, calculate their GPA, and find the student with the highest GPA among an array of students.

Features:

Constructors (default, parameterized)

Setters and getters for id and name

read_marks() to input marks from the user

calc_avg() to compute GPA (average of 5 marks)

printInfo() to display student details and GPA

get_max() function to find the student with the highest GPA

Sample Code:
Student arr[5];
for (int i = 0; i < 5; i++) {
    cout << "Enter student ID and name:\n";
    cin >> id >> name;
    arr[i].set_id(id);
    arr[i].set_name(name);
    arr[i].read_marks();
}

int maxGPA = get_max(arr);

for (int i = 0; i < 5; i++) {
    if (arr[i].calc_avg() == maxGPA) {
        arr[i].printInfo(); // Display the top student's details
    }
}


---

✅ Q3 – Circle and Point Classes with Area Calculation

Objective:
Create a Circle class that uses a Point object as its center, and implements a method to calculate the area of the circle.

Features:

Class Point with x and y coordinates

Class Circle composed of Point and radius

Constructors (default, parameterized with Point, parameterized with x/y/r)

Setters and getters for both classes

calcArea() method to calculate and return the circle's area

Sample Code:
Circle c(3, 4, 3.2);   // Create a circle with center (3,4) and radius 3.2
Circle c1 = c;         // Copy circle using copy initialization
cout << "Area = " << c1.calcArea() << endl; // Output: Area = 32.1536
