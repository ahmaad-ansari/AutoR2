import os
import sys
from Rosmaster_Lib import Rosmaster

# Save the original stdout
original_stdout = sys.stdout

# Redirect stdout to null device
sys.stdout = open(os.devnull, 'w')

# Create the Rosmaster object
bot = Rosmaster()

# Create and start the receiving thread
bot.create_receive_threading()

# Restore original stdout
sys.stdout = original_stdout

# Read version number
version = bot.get_version()
print("Version:", version)

# Read the battery voltage
voltage = bot.get_battery_voltage()
print("Battery Voltage:", voltage)

# Clean up: delete the object to avoid conflicts
del bot
