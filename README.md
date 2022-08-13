
# IMS

IMS is an Inventory Management System created by me for Nuclear Power corporation of India Ltd (NPCIL), Rajasthan Atomic Power Station (RAPP) site as my summer training project.  

The project is bulit by using Qt/XML for frontend, C++ as backend and SQLite 3 for database. The code is modular and can be easily modified for application in other organisations as well.   

  

## Run Locally

**Step-1**  
* Get Qt-Creator from https://www.qt.io/download-qt-installer. 
* Sign up for QT Account

     ![Login](https://user-images.githubusercontent.com/57983605/184473425-8e2291b7-55b3-4a7f-be76-ecbf0cdb5969.png)  

* Install QT version 5.15.2  

    * Select these components during installation:  
        * Qt 5.15.2    
            MSVC 2019 64-bit  
            Qt Charts
        * Developer and designer tools  
	        Qt creator 7.0.2 CDB Debugger  
	        Debugging tools for windows

**Step-2**  

* Clone the project

    ```bash
    git clone https://github.com/ChaosKingNV/NPCIL-Inventory-Management-System.git
    ```
* Edit the location of Database file.
    ```qmake
    13. db.setDatabaseName("/IMS/IMS.sqlite");
    14.
    15. if(QFile::exists("/IMS/IMS.sqlite"))
    ```
    In line number 13. and 15., edit the path of Database file according to the cloned path.  

**Step-3**  

Build using Qt Creator  

![image](https://user-images.githubusercontent.com/57983605/184473806-e8cbca58-9b71-4184-9942-90852390958c.png)    



## Deployment

To create an executable file

1. Build the program in release mode.
2. Locate the folder where the release is saved.
3. Get the IMS.exe file from there and place it in a new folder.
4. Go to the directory where you have installed QT.
5. Locate bin directory for the compiler you have used to bild the project.
6. Right click in the bin directory for the comiler you have used and open it with powershell or cmd.
7. Run the command .\windeployqt.exe "Path to IMS.exe file "

```bash
  .\windeployqt.exe "C:\..\..\IMS.exe"
```


## Screenshots


![1](https://user-images.githubusercontent.com/57983605/184473947-c6af1be7-d6e7-4c42-9309-e301e4899b61.png)
![2](https://user-images.githubusercontent.com/57983605/184473949-b49d087b-db4c-4a2c-a9c2-f267ec893951.PNG)
![3](https://user-images.githubusercontent.com/57983605/184473950-56964793-0716-46d8-94c7-244f83eb54bf.jpg)


## Used By

This project is used by the following companies:

- NPCIL, RAPP Site

