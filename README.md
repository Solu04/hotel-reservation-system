# HotelHub - Hotel Reservation System

HotelHub is a premier hotel reservation system that allows users to book accommodations at top-rated hotels worldwide. This system provides a user-friendly interface to manage room reservations, display room availability, and free up rooms when needed. With HotelHub, users can easily book their desired rooms and enjoy a seamless hotel booking experience.

## Table of Contents

- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Authors](#Authors)

## Features

- Display a graphical presentation of the hotel reservation system using ASCII art.
- View the current date and time.
- Display the authors' names.
- Prompt the user to continue with the program.
- Clear the console screen for better readability.
- Initialize hotel rooms and set their occupancy status.
- Display the list of available rooms with their details.
- Reserve a room for a guest, checking its availability.
- Free up a room by canceling its reservation.

## Installation

1. Clone the repository:

   ```shell
   git clone https://github.com/Solu04/hotel-reservation-system.git
   ```

2. Change into the project directory:

   ```shell
   cd hotel-reservation-system
   ```

3. Compile the source files:

   ```shell
   gcc -o hotel main.c display_header.c display_rooms.c free_room.c initialize_rooms.c landing_page.c reserve_room.c
   ```

4. Run the program:

   ```shell
   ./hotel
   ```

## Usage

1. Upon running the program, you will be greeted with the HotelHub landing page, which displays the system's logo, current date and time, and the authors' names.

2. Press any key to continue and clear the console screen.

3. The main menu will be displayed with the following options:

   - Display Rooms: View the list of hotel rooms and their occupancy status.
   - Reserve Room: Reserve a room for a guest.
   - Free Room: Cancel a room reservation and make it vacant.
   - Exit: Exit the program.
4. Choose an option by entering the corresponding number and pressing Enter.

5. Follow the on-screen prompts to perform the desired action.

6. After each action, you will be returned to the main menu. Repeat the process to perform additional actions or choose "0" to exit the program.

## Authors
**Ataboh Hamza**
**Maryam Maitambari**
