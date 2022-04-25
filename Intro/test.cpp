#include <iostream>



int main()
{
	std::cout << "Hello world!";

	return 0;
}





// https://code.visualstudio.com/docs/languages/cpp
// https://www.msys2.org/

// https://github.com/msys2/msys2-installer/releases/download/2022-01-18/msys2-x86_64-20220118.exe
// pacman -Syu
// pacman -Su
// pacman -S --needed base-devel mingw-w64-x86_64-toolchain
// C:\msys64\mingw64\bin


// {
//     "cmd": ["g++.exe", "-std=c++14", "-o", "$file_base_name", "$file", "&&", "start", "cmd", "/c", "$file_base_name & echo. & echo. & pause"],
//     "shell": true,
//     "selector": "source.c++"
// }


// {
//     "shell_cmd": "g++ \"${file}\" -o \"${file_path}/${file_base_name}\"",
//     "file_regex": "^(..[^:]*):([0-9]+):?([0-9]+)?:? (.*)$",
//     "working_dir": "${file_path}",
//     "selector": "source.c, source.c++",

//     "variants":
//     [
//         {
//             "name": "Run",
//             "shell_cmd": "g++ \"${file}\" -o \"${file_path}/${file_base_name}\" && \"${file_path}/${file_base_name}\""
//         }
//     ]
// }