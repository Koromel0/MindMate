# MindMate
MindMate is an unofficial application for ChatGPT. The app supports chat settings, can send system messages, delete and edit messages.

![Main window](https://github.com/KoromeloDev/MindMate/blob/main/screenshots/MainWindow.png?raw=true)

## How to install
### Linux:
You can install MindMate using flatpak. To do this, you can go to [Flathub](https://flathub.org/apps/io.github.koromelodev.mindmate) or install using the terminal:
```bash
flatpak install flathub io.github.koromelodev.mindmate
```

### Windows:
You can install MindMate using the [Microsoft Store.](https://www.microsoft.com/store/apps/9PC99CMCJLNF)

## How to install from source code
<h3 align="center">
  Dependencies
</h3>

<p align="center">
  <img src="https://img.shields.io/badge/qt--base-6.5.0-blue" alt="qt-base 6.5.0"/>
  <img src="https://img.shields.io/badge/qt--svg-6.5.0-blue" alt="qt-svg 6.5.0"/>
  <img src="https://img.shields.io/badge/qt--multimedia-6.5.0-blue" alt="qt-multimedia 6.5.0"/>
  <img src="https://img.shields.io/badge/qt--translations-6.5.0-blue" alt="qt-translations 6.5.0"/>
</p>

### Linux:
```bash
git clone https://github.com/KoromeloDev/MindMate.git ;\
cd MindMate ;\
cmake . -DCMAKE_BUILD_TYPE=MinSizeRel ;\
cmake --build . ;\
sudo cmake --install .
```

### Windows:
```bash
git clone https://github.com/KoromeloDev/MindMate.git &^
cd MindMate &^
cmake . -DCMAKE_BUILD_TYPE=MinSizeRel &^
cmake --build . &^
cmake --install .
```

## How to use
To use the program, you will need an [OpenAI account](https://platform.openai.com/signup) to get an API key and enter it into the settings.

### Setup
1. Go to global settings

![Step1](https://github.com/KoromeloDev/MindMate/blob/main/screenshots/HowToUseSettings1.png?raw=true)

2. Go to the "Chat" tab

![Step2](https://github.com/KoromeloDev/MindMate/blob/main/screenshots/HowToUseSettings2.png?raw=true)

3. Click on the API key edit button

![Step3](https://github.com/KoromeloDev/MindMate/blob/main/screenshots/HowToUseSettings3.png?raw=true)

4. Insert the API key into the input field and click "OK" button

![Step4](https://github.com/KoromeloDev/MindMate/blob/main/screenshots/HowToUseSettings4.png?raw=true)

Done!

### Configuration
To configure the application, you can go to global settings. These settings affect the entire application.

![GeneralSettings](https://github.com/KoromeloDev/MindMate/blob/main/screenshots/GlobalSettingsWindow1.png?raw=true)
![ChatSettings](https://github.com/KoromeloDev/MindMate/blob/main/screenshots/GlobalSettingsWindow2.png?raw=true)

You can also configure each chat individually.

![ChatSettings](https://github.com/KoromeloDev/MindMate/blob/main/screenshots/HowToUseChatSettings.png?raw=true)
![ChatSettings](https://github.com/KoromeloDev/MindMate/blob/main/screenshots/ChatSettingsWindow.png?raw=true)

### Message role
Each message has a role. There are three roles in total:
1. User - a regular user message
2. System - used to guide the behavior of your model throughout the conversation
3. Assistant - ChatGPT returns a response using this role

![Role](https://github.com/KoromeloDev/MindMate/blob/main/screenshots/SystemMessageDescription.png?raw=true)
