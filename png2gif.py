from PIL import Image
import datetime
import glob

# Array that will hold the images/frames.
frames = []

# "images" has been assigned the type .png and will only see this type of file.
images = glob.glob("*.png")

# Go through the images in the folder.
for i in images:

    # Open the image and append it to the frames array.
    new_frame = Image.open(i)
    frames.append(new_frame)

# Get the current time and convert it into a string.
time = datetime.datetime.now()
stringTime = time.strftime("%m_%d_%Y_ %H_%M_%S")

# Convert the extension to .gif.
name = stringTime + '.gif'

# Save the file with following arguments.
frames[0].save(name, format='GIF', append_images=frames[1:], save_all=True, duration=10, loop=0)
