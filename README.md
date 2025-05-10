# Student GPA Tracker

## Overview

The **Student GPA Tracker** is a C++ software application that allows users to manage a list of students, track their course grades, calculate GPAs, and optionally attach contact information. This project uses object-oriented programming principles and Standard Template Library (STL) containers such as `vector` and `map`. Smart pointers are used to manage memory safely.

This project was created as part of a hands-on learning experience to apply class design, encapsulation, smart pointers, and file organization in C++. It is aimed at helping new developers understand how to structure and build real-world C++ applications.

---

## Features

- Add, edit, and view student information.
- Add courses and grades per student.
- GPA is automatically calculated for each student.
- Smart pointers are used to manage contact information (name, phone, address).
- Interactive menu-driven interface in the console.
- Code is organized into multiple files (header/source) for clarity and modularity.

---

## Technologies Used

- **Language:** C++
- **Memory Management:** `std::shared_ptr`
- **Containers:** `std::vector`, `std::map`
- **Compiler:** GNU G++ / Visual Studio Code / Any standard-compliant C++ compiler

---

## How to Compile

Use the following command in your terminal to compile all source files:

```bash
g++ main.cpp student.cpp contact.cpp -o GPA_Tracker
```

Then run:

```bash
./GPA_Tracker
```

You can also use a C++ IDE like Code::Blocks, Visual Studio, or CLion to import the files and compile/run the project.

---

## How to Use

After launching the program, you will see a menu where you can:

1. Add a new student  
2. Add a course and grade to a student  
3. Display student information (including GPA)  
4. Add contact information to a student  
5. Exit

Each operation guides you through input fields using prompts.

---

## Video Demonstration

🎥 [Click here to watch the video walkthrough and demo](https://www.youtube.com/watch?v=YOUR_VIDEO_LINK)

This video walks through:
- How the software works
- Key C++ concepts used (like classes and smart pointers)
- Code organization across multiple files
- What I learned from building it

---

## File Structure

```
StudentGPA_Tracker/
├── main.cpp
├── student.h
├── student.cpp
├── contact.h
├── contact.cpp
└── README.md
```

---

## What I Learned

- How to use classes in C++ to model real-world data.
- Managing memory with smart pointers (`shared_ptr`).
- Organizing large programs with multiple source and header files.
- Building a clean and user-friendly interface using the console.
- The importance of documentation and clear code comments.

---

## License

This project is provided for educational use only.

---

## Author

**Valentina**  
Student, BYU–Idaho  
GitHub: (https://github.com/Merzoian)
