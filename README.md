# IMS

IMS is an Inventory Management System created by me for the Nuclear Power Corporation of India Ltd (NPCIL), Rajasthan Atomic Power Station (RAPP) site as my summer training project.

The project is built using Qt/XML for the frontend, C++ as the backend, and SQLite 3 for the database. The code is modular and can be easily modified for application in other organizations as well.

## Run Locally

### Step-1

1. Get Qt-Creator from [Qt Installer](https://www.qt.io/download-qt-installer).
2. Sign up for a Qt Account.

    ![Login](https://user-images.githubusercontent.com/57983605/184473425-8e2291b7-55b3-4a7f-be76-ecbf0cdb5969.png)

3. Install Qt version 5.15.2.

    Select these components during installation:
    - **Qt 5.15.2**  
        - MSVC 2019 64-bit  
        - Qt Charts  
    - **Developer and Designer Tools**
        - Qt Creator 7.0.2 CDB Debugger  
        - Debugging Tools for Windows

### Step-2

1. Clone the project:
    ```bash
    git clone https://github.com/ChaosKingNV/NPCIL-Inventory-Management-System.git
    ```

2. Edit the location of the database file:
    ```qmake
    13. db.setDatabaseName("/IMS/IMS.sqlite");
    14.
    15. if(QFile::exists("/IMS/IMS.sqlite"))
    ```
    Update lines 13 and 15 with the correct path to the database file based on the cloned project location.

### Step-3

Build the project using Qt Creator.

![Build Example](https://user-images.githubusercontent.com/57983605/184473806-e8cbca58-9b71-4184-9942-90852390958c.png)

## Deployment

To create an executable file:

1. Build the program in release mode.
2. Locate the folder where the release build is saved.
3. Extract the `IMS.exe` file from the release folder and place it in a new directory.
4. Navigate to the directory where Qt is installed.
5. Locate the `bin` directory for the compiler used to build the project.
6. Open the `bin` directory in PowerShell or Command Prompt.
7. Run the following command to deploy:

    ```bash
    .\windeployqt.exe "C:\..\..\IMS.exe"
    ```

## Screenshots

<img src="https://user-images.githubusercontent.com/57983605/184473947-c6af1be7-d6e7-4c42-9309-e301e4899b61.png" width="30%"></img> <img src="https://user-images.githubusercontent.com/57983605/184473949-b49d087b-db4c-4a2c-a9c2-f267ec893951.PNG" width="30%"></img> <img src="https://user-images.githubusercontent.com/57983605/184473950-56964793-0716-46d8-94c7-244f83eb54bf.jpg" width="30%"></img>

## Used By

This project is used by the following companies:

- NPCIL, RAPP Site
