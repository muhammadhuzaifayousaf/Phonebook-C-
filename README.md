# C++ Phonebook Application

This C++ program implements a user-friendly phonebook application designed for use with Dev-C++ compiler. It offers various functionalities to manage your contacts effectively:

**Features:**

* **Add** new contacts with essential information (name, phone number, address, email).
* **Display** a list of all stored contacts.
* **Search** for contacts by name or phone number.
* **Edit** existing contact details.
* **Delete** specific contacts.
* **Delete** all contacts at once.

**Getting Started:**

**Prerequisites:**

* Dev-C++ compiler
* A basic understanding of C++ syntax and concepts

**Steps:**

1. Download and install Dev-C++.
2. Create a new project in Dev-C++.
3. Copy the `Phonebook.cpp` file into your project directory.
4. Exclude any generated Dev-C++ files from compilation (if necessary).
5. Compile and run the program using Dev-C++'s "Build" or "Execute" options.

**Using the Phonebook:**

The application presents a clear menu at launch. Use the corresponding numbers to perform desired actions:

1. **Add Contact:** Enter new contact information, including name, phone number (must be 11 digits), address (optional), and email (optional). Duplicate phone numbers with different names are allowed, but duplicate phone numbers with the same name are prevented.
2. **Display All Contacts:** View a list of all stored contacts with their details.
3. **Search By Number:** Enter a phone number to find an associated contact and its details.
4. **Search By Name:** Enter a contact name to find matching contacts and their details.
5. **Edit Contact:** Enter a phone number to edit the associated contact's details.
6. **Delete Contact:** Enter a phone number to delete the associated contact.
7. **Delete All Contacts:** Remove all stored contacts from the phonebook.

**Notes:**

* The `start()` function uses a placeholder for the loading bar animation. Implement a platform-specific solution (e.g., `clear()` for Linux/macOS or `system("cls")` for Windows) or remove if desired.
* This version addresses potential memory leaks by using a `vector` to store contacts instead of dynamically allocating individual variables.

**Contributing:**

Feel free to fork this repository and make improvements or add new features. Pull requests are welcome!

**License:**

This project is licensed under the MIT License. See the LICENSE file for details.

**Additional Information:**

* For file I/O functionality to save and load contact data (optional), consider implementing appropriate file handling using file I/O libraries and functions.
* Continuously improve your code for clarity, functionality, and robustness by iterating and addressing feedback.
* Explore additional features like sorting contacts, filtering by criteria, or exporting data to different formats.
