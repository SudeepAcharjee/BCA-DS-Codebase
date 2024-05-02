import datetime

# Function to validate date format
def validate_date(date_text):
    try:
        datetime.datetime.strptime(date_text, "%Y-%m-%d")
        return True
    except ValueError:
        return False

# Taking user input for name and date of birth (DOB)
name = input("Enter your name: ")
dob_input = input("Enter your date of birth (YYYY-MM-DD or DD/MM/YYYY): ")

# Validate date format
while not validate_date(dob_input):
    dob_input = input("Invalid date format. Please enter your date of birth in either YYYY-MM-DD format: ")

# Converting DOB input to datetime object
dob = datetime.datetime.strptime(dob_input, "%Y-%m-%d")

# Calculating age based on current date and DOB
current_date = datetime.datetime.now()
age = current_date.year - dob.year - ((current_date.month, current_date.day) < (dob.month, dob.day))

# Checking eligibility to vote
if age >= 18:
    print(f"Hello {name}, you are {age} years old and eligible to vote.")
else:
    print(f"Hello {name}, you are {age} years old and not eligible to vote yet.")