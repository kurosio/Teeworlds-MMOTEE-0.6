Added it just like an archive memory. I do not recommend use the code.
And if you have little knowledge of C++, then studying it will only complicate the general idea of c++.

*I am not going to take care of it and host it for players. I developer in my free time for the sake of my experience.
If anyone has any motivation to develop a new mod, would be happy to participate.*

Building on Linux (CMake)
==========================

Installing dependencies
-----------------------

    # Debian/Ubuntu
    sudo apt install build-essential cmake git libicu-dev libssl-dev libcurl4-openssl-dev libboost-dev libmariadbclient-dev libmysqlcppconn-dev


Downloading repository
----------------------

    git clone https://github.com/kurosio/Teeworlds-Mmotee-Old --recurse-submodules
    cd Teeworlds-Mmotee-Old

    # If you already cloned the repository before, use:
    git submodule update --init


Building
--------

    mkdir -p build
    cd build
    cmake ..
    make

On subsequent builds, you only have to repeat the `make` step.
You can then run the server with `./Mmotee-Server`.


# Building on Windows with Visual Studio & CMake
Download and install some version of Microsoft Visual Studio (as of writing, MSVS Community 2019) with the following components:

Desktop development with C++ (on the main page)
Python development (on the main page)
Git for Windows (in Individual Components → Code tools)
Run Visual Studio. Open the Team Explorer (View → Team Explorer, Ctrl+^, Ctrl+M). Click Clone (in the Team Explorer, Connect → Local Git Repositories). Enter https://github.com/kurosio/Teeworlds-Mmotee-Old into the first input box. Wait for the download to complete (terminals might pop up).

Wait until the CMake configuration is done (watch the Output windows at the bottom).

Select Mmotee-Server.exe in the Select Startup Item… combobox next to the green arrow. Wait for the compilation to finish.

For subsequent builds you only have to click the button with the green arrow again.
