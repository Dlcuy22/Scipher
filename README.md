# Scipher

## Description
A really lightweight **Caesar cipher decoder** that can run on **literally any system**! This program is implemented in **C** and designed to work on extremely low-resource systems with just a **300 MHz processor** and minimal memory. It is **platform-independent** and can be compiled and run on various systems, including **Linux**, **Windows**, and **macOS**.

## Features
- Decodes Caesar cipher text by applying a reverse shift.
- Handles both **uppercase** and **lowercase** letters.
- Very **lightweight** and efficient.
- Can be compiled and run on systems with very low specs (e.g., 300 MHz CPU, 1 MB RAM).
- **No external libraries** required—only the standard C library.

## System Requirements
- **Processor**: Minimum **300 MHz** or any modern processor.
- **RAM**: At least **1 MB** (will work on systems with as low as **640 KB**).
- **Operating System**: Any OS that supports **C** and **standard input/output** (Linux, Windows, macOS, etc.).
- **Disk Space**: Very minimal—less than **1 MB**.

## How to Compile and Run

### Linux/macOS:
1. Open a terminal and navigate to the directory where the C file is located.
2. Run the following command to compile the program:
   ```bash
   gcc caesar_decoder.c -o caesar_decoder
