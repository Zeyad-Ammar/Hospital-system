Simple Hospital System (C++)

A simple console-based Hospital Management System written in C++.
This project was built during my early days of learning programming to practice arrays, functions, control flow, and basic system design.
The system simulates a hospital queue where patients are organized by specialization and priority (urgent / normal).

Features

Add a new patient to the hospital system
Assign patients to one of 20 medical specializations
Mark patients as Urgent or Normal
Urgent patients are placed at the front of the queue
Display all patients grouped by specialization
Call the next patient for a doctor
Simple menu-driven console interface

How It Works

Each specialization has:
Maximum 5 patient spots
A queue structure
Patients are handled using the following logic:
Normal patient → added to the end of the queue
Urgent patient → inserted at the beginning of the queue
When the doctor calls the next patient → the first patient in the queue is removed
The system internally uses:
2D arrays to store patient status and queue size
String arrays to store patient names
Shifting algorithms to move patients left or right in the queue

Concepts Practiced

This project helped me practice:
C++ arrays
Functions
Queue-like data handling
Console interaction
Basic problem solving
Simple system design
