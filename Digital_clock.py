
import tkinter as tk
from time import strftime

# Create the main window
root = tk.Tk()
root.title("Digital Clock")

# Define a function to update the time
def update_time():
    current_time = strftime('%H:%M:%S %p')  # Format: HH:MM:SS AM/PM
    label.config(text=current_time)         # Update the label with the current time
    label.after(1000, update_time)          # Call this function again after 1 second

# Create and configure a label for the clock
label = tk.Label(root, font=('calibri', 40, 'bold'), background='black', foreground='white')
label.pack(anchor='center')

# Start the clock
update_time()

# Run the main event loop
root.mainloop()