# ZAMTEL USSD code replica
A terminal-based USSD app replica, developed in C language, simulating the functionality of the Zamtel USSD service. This application allows users to interact with various options similar to those offered by the Zamtel network.
# Features
**Airtime Top-up:** Recharge your phone with a voucher.
**Data Bundle Options:** Check and buy data bundles.
**Account Services:** Access services like account status and more.
# Prerequisites
To build and run the project, you'll need:
-**Code::Blocks IDE** (or any other c compiler, but Code::Blocks is preferred for this guide).
-Basic understanding of terminal-based applications and Zamtel USSD services.
# Installation
## Step 1: Download and Install Code::Blocks
If you don't already have Code::Blocks installed, download it from the official website: [Code::Blocks Download](https://www.codeblocks.org/downloads/binaries/#imagesoslinux48pnglogo-linux-32-and-64-bit). Make sure to download the version that includes the MinGW compiler if you're using **Windows**.
## Step 2: Clone the Repository
Clone the project repository using the following Git command:
```git clone https://github.com/gvstave/Zamtel-USSD-code-replica.git```
Or download the **ZIP** file form Github ans extract the contents into the folder of your choice.
## Step 3: Open the project in Code::Blocks
-Open Code::Blocks IDE.
-Go to **File - Open...** and select the folder where you cloned or extracted the project.
-Open the project file
## Step 4: **Build** and Run the Application
- Click on the build button to compile the code.
- Once the project is successfully build, click **Run** to execute the program.
- A terminal window will appear with the **USSD service menu** ready for interaction!
## Usage
- **Select an option** from menu using the keyboard.
- The app will display **simulated response** based on the selections and inputs
## Code Structure
The code is structured into components (functions) each perfoming its own function and then feeding in into the **main** function.
**Parent function**
*int main(){....};*
**Other functions**
*int string_compare(void);*
*int main_menu(void);*
*int choice(void);*
*int payment_method(void);*
*int validation_func();*
*int mobile_money_auth(void);*
*int vibez(void);*
*int supa_cheza(void);*
*int ni_yathu(void);*
*int freedom(void);*
*int data_offers(void);*
*int balance(void);*
*int today_special(void);*
*int velocity_lite(void);*
*int buy_4_others(void);*
## Contributing
We welcome contributions! If you'd like to improve this project, feel free to fork it, create a branch, and submit a pull request.
## Steps for contributing:
- **Fork** the repository.
- **Create a new branch** for your feature or fix.
- **Submit a pull request** with a detailed description of the changes.
# Licensing
**Note:** This project does not have an official license. By contributing, you agree to allow your contributions to be included under the project's terms (as specified or upon further clarification).
# Acknowledgment
- This project is inspired by the **Zamtel USSD service system**
