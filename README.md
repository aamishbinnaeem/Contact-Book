**Contact Book**

Welcome to the Contact Book application repository! This project showcases a comprehensive contact management system built using object-oriented programming principles in C++. The Contact Book application allows users to efficiently store, manage, and manipulate their contact information with a variety of features.

**Features**

- **Add Contacts**: Easily add new contacts with details such as name, phone number, email address, and more.
- **Merge Duplicates**: Automatically identify and merge duplicate contacts to keep your contact list clean and organized.
- **File Operations**: Save contacts to a file and load them from a file to maintain persistence between sessions.
- **Search Contacts**: Quickly search for contacts by name or other attributes.
- **Group Management**: Organize contacts into groups for better categorization.
- **Advanced Search**: Perform advanced searches using multiple criteria.
- **Persistence**: Ensure data persistence with file operations, enabling you to save and load contact information.

**Code Structure**

- **Modular Design**: The code follows Google's C++ coding standards and guidelines to ensure readability and maintainability.
- **Header Files**: Organized header files are used to structure the project efficiently.
- **Memory Management**: Destructors and the Rule of Three are implemented to manage dynamic memory allocation.
- **Single Responsibility Principle**: Each class and function has a single responsibility, adhering to solid software design principles.

## Getting Started

1. **Clone the Repository**:
    ```bash
    git clone https://github.com/yourusername/contact-book.git
    cd contact-book
    ```

2. **Compile the Code**:
    Use a C++ compiler like `g++` to compile the project:
    ```bash
    g++ -o contact_book main.cpp contact.cpp contact_manager.cpp
    ```

3. **Run the Application**:
    ```bash
    ./contact_book
    ```

**Contributing**

Contributions are welcome! If you find any bugs or have suggestions for new features, please open an issue or submit a pull request. 

**Acknowledgments**

Special thanks to all contributors and the open-source community for their invaluable support and resources.
