# Options Pricing using Strategy Pattern

This project demonstrates the use of the Strategy Pattern to calculate option prices using different pricing strategies. It employs a combination of C++ and Python, using the `pybind11` library to bind C++ classes and methods, making them accessible from Python.



## Getting Started

### Prerequisites

Ensure you have `Python`, `pip`, and a C++ compiler installed on your system.

### Setup

1. **Create a Virtual Environment:**

   Navigate to the project's root directory and run:

   ```
   python -m venv venv
   ```

2. **Activate the Virtual Environment:**

    On Linux/Mac:
    ```
    source venv/bin/activate
    ```
    
    On Windows:
    ```
    .\venv\Scripts\activate
    ```

3. **Install the Project:**

    With the virtual environment activated, run:
    ```
    pip install -e .
    ```

4. **Running the Program:**

    ```
    python python/main.py
    ```