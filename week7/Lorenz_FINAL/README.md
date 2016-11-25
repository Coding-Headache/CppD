## Debugging Issues

#### main.cpp
In order to handle a message that may contain a space character the cin line needs changing from:

```c++
  string message;
  cout << "Type your message (using CAPITALS): ";
  cin >> message;
```
to:
```c++
  string message;
  cout << "Type your message (using CAPITALS): ";
  getline(cin, message);
```
Plus a `system("pause")` was inserted at the end of **main.cpp** so that it is possible to see the final message.

#### lorenzMachine.cpp
the `this` list needed swapping around from:

```c++
  this->chi = psi;
  this->psi = chi;
```
to:
```c++
  this->chi = chi;
  this->psi = psi;
```
then line 24 from:
```c++
  if(m37.getCurrentPin() == 1)
```
to:
```c++
  if(m61.getCurrentPin() == 1)
```

#### wheelGroup.cpp
On line 15 there is a `-1` that needs removing so the line reads:
```c++
  for(int i=0;i<wheels.size();i++)
```
With a second edit on line 28:
```c++
  result |= wheels[i].getCurrentPin();
```
the original file performed a bitwise AND operation rather than the OR which is needed for encryption.

#### wheel.Cpp
For this file lines `10` and `12` needed editing from:
```c++
  pins.push_back(pinSet[i]);

  this->pinSetting=this->pinSetting;
```
to:
```c++
  pins.push_back(pinSet[i] - '0');

  this->pinSetting=pinSetting;
```

#### teleprinter.cpp
The original file used a `hex` look-up tables for the conversions, however, the application will need binary code to work correctly. Therefore all of the values within the look-up tables were changed

The next edit was line 96:
```c++
	int encChar = getCharFromBaudot(encBaudot);
```
The initial file called `getBaudotFromChar(encBaudot)`
