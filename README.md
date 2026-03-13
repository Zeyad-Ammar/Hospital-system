<h1>A simple console-based Hospital Management System (C++)</h1>
This project was built during my early days of learning programming to practice arrays, functions, control flow, and basic system design.
The system simulates a hospital queue where patients are organized by specialization and priority (urgent / normal).

<h3>Features</h3>
<img width="347" height="224" alt="image" src="https://github.com/user-attachments/assets/b5141270-32ea-4d98-bbcc-3070a34f5209" />
<br>

<h4>Add a new patient to the hospital system<br>
Assign patients to one of 20 medical specializations<br>
Mark patients as Urgent or Normal<br>
Urgent patients are placed at the front of the queue<br></h4>
<img width="581" height="196" alt="image" src="https://github.com/user-attachments/assets/992d9f9b-df02-43a7-9b11-afd07d1f03f9" /><br>

<h4>Display all patients grouped by specialization<br></h4>
<img width="518" height="350" alt="image" src="https://github.com/user-attachments/assets/aab0eb7e-acc4-47aa-a2ad-830770eea2fe" /><br>
<h4>Call the next patient for a doctor<br></h4>

<img width="405" height="228" alt="image" src="https://github.com/user-attachments/assets/ab7a085c-4244-42c6-9ee1-661e12620a70" /><br>

<h4>Simple menu-driven console interface<br></h4>

<h3>How It Works</h3>

<h4>Each specialization has:</h4>
Maximum 5 patient spots<br>
A queue structure<br>

<h4>Patients are handled using the following logic:</h4>
Normal patient → added to the end of the queue<br>
Urgent patient → inserted at the beginning of the queue<br>
When the doctor calls the next patient → the first patient in the queue is removed<br>

<h4>The system internally uses:</h4>
2D arrays to store patient status and queue size<br>
String arrays to store patient names<br>
Shifting algorithms to move patients left or right in the queue<br>

<h3>Concepts Practiced</h3>

<h4>This project helped me practice:</h4>
C++ arrays<br>
Functions<br>
Queue-like data handling<br>
Console interaction<br>
Basic problem solving<br>
Simple system design<br>
