import re

def is_valid_email(email):
    # Define a regex pattern for a valid email address
    pattern = r'^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$'
    
    # Match the pattern with the given email
    if re.match(pattern, email):
        return True
    else:
        return False

# Test the function
email = "example@gmail.com"
if is_valid_email(email):
    print(f"'{email}' is a valid email address.")
else:
    print(f"'{email}' is not a valid email address.")