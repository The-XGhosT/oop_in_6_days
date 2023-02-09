# import smtplib

sender_email = "learnn2023@gmail.com"
password = "qqaabbaall"

recipient_email = ["qabbalilyas@gmail.com"]

# message = """Subject: Simple Email Test

# This is a test email sent from Python."""

# try:
#     server = smtplib.SMTP("smtp.gmail.com", 587)
#     server.ehlo()
#     server.starttls()
#     server.login(sender_email, password)
#     for recipient_email in recipient_emails:
#         server.sendmail(sender_email, recipient_email, message)
#     server.close()
#     print("Email sent successfully!")
# except Exception as e:
#     print("An error occurred while sending the email:", e)


# donald.rifo
# steven.vano2

# import smtplib

# sender_email = "donald.rifo@hotmail.com"
# recipient_email = "steven.vano2@hotmail.com"
# password = "hamza2023"
# message = "Subject: Hello from Python\n\nThis is a test email sent from a Python script."

# server = smtplib.SMTP("smtp.live.com", 587)
# server.ehlo()
# server.starttls()
# server.ehlo()
# server.login(sender_email, password)
# server.sendmail(sender_email, recipient_email, message)
# server.quit()


import smtplib
from email.mime.text import MIMEText

smtp_ssl_host =  'smtp.gmail.com' #'smtp.live.com'   # smtp.mail.yahoo.com
smtp_ssl_port = 465
username = sender_email
password = password
sender = sender_email
targets = recipient_email

msg = MIMEText('Hi, how are you today?')
msg['Subject'] = 'Hello'
msg['From'] = sender
msg['To'] = ', '.join(targets)

server = smtplib.SMTP_SSL(smtp_ssl_host, smtp_ssl_port)
server.login(username, password)
server.sendmail(sender, targets, msg.as_string())
server.quit()