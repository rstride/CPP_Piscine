/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 19:13:28 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:47:31 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <ostream>
#include <cstring>

std::string fileRead(std::ifstream &readFile)
{
	std::string s;

	readFile.seekg(1, std::ios::end);
	int size = readFile.tellg();
	s.resize(size);
	readFile.seekg(0, std::ios::beg);
	readFile.read(&s[0], size);

	return (s);
}

void ftReplace(std::ifstream &readFile, std::string &contents, char *s1, char *s2)
{
	std::string::size_type targetStrLen = (strlen(s1));
	std::string::size_type pos;

	pos = contents.find(s1,0, targetStrLen);
	while(pos != std::string::npos)
	{
		contents.erase(pos, targetStrLen);
		contents.insert(pos,s2);

		pos = pos + targetStrLen;
		pos = contents.find(s1,pos, targetStrLen);
	}
}


int main(int argc, char **argv)
{
	std::ifstream readFile;
	std::ofstream writeFile;
	std::string newFile;

	if (argc != 4)
	{
		std::cout << "[Error] 인자값의 수가 맞지 않습니다." << std::endl;
		exit(1);
	}

	newFile = argv[1];
	newFile.append(".replace");
	readFile.open(argv[1]);
	writeFile.open(newFile);

	if (!readFile || !(readFile.is_open()) | !(writeFile.is_open()))
	{
		std::cout << "[Error] 파일을 읽을 수 없습니다." << std::endl;
		readFile.close();
		exit(1);
	}

	std::string FileContents;
	FileContents = fileRead(readFile);

	ftReplace(readFile, FileContents, argv[2], argv[3]);

	writeFile.write(FileContents.c_str(), FileContents.size());

	readFile.close();
	writeFile.close();
}