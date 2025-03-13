# GPTer 🤖✨

A **Miniature ChatGPT Voice Assistant** powered by ESP32-S3 and ChatGPT technology!  
Built by students of Keshav Memorial Institute of Technology, Hyderabad, as part of a B.Tech project in Computer Science and Engineering (AI & ML).  

---

## 🎯 Purpose  
GPTer is a compact, voice-activated assistant designed to bring intuitive, human-like interactions to your fingertips. Leveraging the power of ChatGPT and ESP32-S3, it’s perfect for:  
- 🌐 IoT applications  
- ♿ Accessibility enhancements  
- 📚 Educational tools  
- 🚀 Fostering innovation in voice-enabled projects  

---

## 🌟 Features  
- **Voice Interaction** 🎙️: Speak naturally and get human-like responses powered by GPT-3.5 Turbo.  
- **Compact Design** 📏: Built on the tiny XIAO ESP32S3 for portability and versatility.  
- **Graphical UI** 🖥️: LVGL-based interface on a 1.28-inch round touch display.  
- **Audio Processing** 🔊: Record, process, and store audio with I2S and SD card support.  
- **Wi-Fi Enabled** 📡: Connects to the cloud for real-time ChatGPT responses.  
- **Modular Code** 💻: Clean, organized, and maintainable Arduino-based codebase.  

---

## 🛠️ Hardware Requirements  
| Component                | Description                                      |  
|--------------------------|--------------------------------------------------|  
| **XIAO ESP32S3**         | Dual-core processor with Wi-Fi & Bluetooth       |  
| **Round Display**        | 1.28-inch, 240x240, touch-enabled (Seeed Studio) |  
| **Micro SD Card**        | Up to 32GB for audio storage                     |  
| **Battery**              | Li-ion for portable power                        |  
| **Jumper Wires**         | For easy prototyping                             |  
| **Breadboard**           | For circuit assembly                             |  

---

## 📦 Software Stack  
- **Arduino IDE** 🖌️: Code, compile, and upload with ease.  
- **LVGL** 🎨: Lightweight GUI framework for the display.  
- **Google Speech-to-Text API** 🗣️: Converts voice to text.  
- **ChatGPT API** 💬: Powers natural language understanding.  
- **Node.js Server** 🌐: Handles audio uploads and API calls.  

---

## 🚀 How It Works  
1. 🎤 **Voice Input**: Record audio via the microphone using I2S.  
2. 📡 **Speech-to-Text**: Send audio to a local server, which uses Google’s API to transcribe it.  
3. 🤖 **ChatGPT Magic**: The transcribed text is processed by ChatGPT for a smart response.  
4. 🖥️ **Display**: View responses on the round touchscreen.  

---
## 🔧 Setup Instructions  
1. **Hardware**: Assemble the ESP32-S3, display, SD card, and microphone on a breadboard.  
2. **Software**: Install Arduino IDE and required libraries (see [References](#-references)).  
3. **Wi-Fi**: Update `ssid` and `password` in the code.  
4. **API Keys**: Add your OpenAI and Google API keys.  
5. **Upload**: Flash the code to ESP32-S3 via Arduino IDE.  

---

## 💡 Future Enhancements  
- 🎵 Add Text-to-Speech (TTS) for full voice interaction.  
- ⚡ Optimize power consumption for longer battery life.  
- 🌍 Support multiple languages.  
- 📲 Integrate with mobile apps via Bluetooth.  

---

# ⚠️NOTE: This Project was done by forking the XIAO ESP32 S3 "Miniature Chatgpt voice assistant".
