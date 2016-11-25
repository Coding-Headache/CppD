#include "stdafx.h"
#include "teleprinter.h"
#include <map>
using std::map;

teleprinter::teleprinter(lorenzMachine encryptor)
{
	this->encryptor = encryptor;

	//char to baudot conversions
	charToBaudot['A'] = 0b00011;
    charToBaudot['B'] = 0b11001;
	charToBaudot['C'] = 0b01110;
	charToBaudot['D'] = 0b01001;
	charToBaudot['E'] = 0b00001;
	charToBaudot['F'] = 0b01101;
	charToBaudot['G'] = 0b11010;
	charToBaudot['H'] = 0b10100;
	charToBaudot['I'] = 0b00110;
	charToBaudot['J'] = 0b01011;
	charToBaudot['K'] = 0b01111;
	charToBaudot['L'] = 0b10010;
	charToBaudot['M'] = 0b11100;
	charToBaudot['N'] = 0b01100;
	charToBaudot['O'] = 0b11000;
	charToBaudot['P'] = 0b10110;
	charToBaudot['Q'] = 0b10111;
	charToBaudot['R'] = 0b01010;
	charToBaudot['S'] = 0b00101;
    charToBaudot['T'] = 0b10000;
	charToBaudot['U'] = 0b00111;
	charToBaudot['V'] = 0b11110;
    charToBaudot['W'] = 0b10011;
	charToBaudot['X'] = 0b11101;
	charToBaudot['Y'] = 0b10101;
	charToBaudot['Z'] = 0b10001;
	charToBaudot['*'] = 0b00000;	//null
	charToBaudot[','] = 0b01000;	//carriage return
	charToBaudot['-'] = 0b00010;	//line feed
	charToBaudot['!'] = 0b11011;	//figures
	charToBaudot['.'] = 0b11111;	//letters
	charToBaudot[' '] = 0b00100;	//space

    //baudot to char conversions
	baudotToChar[0b00011] = 'A';
	baudotToChar[0b11001] = 'B';
	baudotToChar[0b01110] = 'C';
	baudotToChar[0b01001] = 'D';
	baudotToChar[0b00001] = 'E';
	baudotToChar[0b01101] = 'F';
	baudotToChar[0b11010] = 'G';
	baudotToChar[0b10100] = 'H';
	baudotToChar[0b00110] = 'I';
	baudotToChar[0b01011] = 'J';
	baudotToChar[0b01111] = 'K';
	baudotToChar[0b10010] = 'L';
	baudotToChar[0b11100] = 'M';
	baudotToChar[0b01100] = 'N';
	baudotToChar[0b11000] = 'O';
	baudotToChar[0b10110] = 'P';
	baudotToChar[0b10111] = 'Q';
	baudotToChar[0b01010] = 'R';
	baudotToChar[0b00101] = 'S';
	baudotToChar[0b10000] = 'T';
	baudotToChar[0b00111] = 'U';
	baudotToChar[0b11110] = 'V';
	baudotToChar[0b10011] = 'W';
	baudotToChar[0b11101] = 'X';
	baudotToChar[0b10101] = 'Y';
	baudotToChar[0b10001] = 'Z';
	baudotToChar[0b00000] = '*';	//null
	baudotToChar[0b01000] = ',';	//carriage return
	baudotToChar[0b00010] = '-';	//line feed
	baudotToChar[0b11011] = '!';	//figures
	baudotToChar[0b11111] = '.';	//letters
	baudotToChar[0b00100] = ' ';	//space
}

int teleprinter::getBaudotFromChar(char c)
{
	return charToBaudot[c];
}

char teleprinter::getCharFromBaudot(int b)
{
	return baudotToChar[b];
}

string teleprinter::encryptMessage(string message)
{
	string encMessage = "";
	for(int i=0;i<message.size();i++)
	{
		int baudot = getBaudotFromChar(message[i]);
		int encBaudot = encryptor.encryptChar(baudot);
		int encChar = getCharFromBaudot(encBaudot);
		encMessage.push_back(encChar);
	}

	return encMessage;
}