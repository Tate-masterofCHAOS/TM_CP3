
#Import needed libraries
import cv2 #For video
import pygame
from pygame import mixer 
import time



choice = input("What number. \n1. Golden \n2. Period. FMAB")
vid = input("1. Sound. \n2. Video + Sound\n")

time.sleep(1)

# Starting the mixer 
mixer.init() 

# Loading the song 
if choice == "1":
    mixer.music.load(r"Random_programs\Music_files\videoplayback.mp3") 
elif choice == "2":
    mixer.music.load(r"Random_programs\Music_files\Fullmetal Alchemist Brotherhood Opening 4 (Chemistry - Period).mp3") 

# Setting the volume 
mixer.music.set_volume(1) 

# Start playing the song 
mixer.music.play() 

if vid == "2":
    if choice == "1":
        cap = cv2.VideoCapture(r"Random_programs\Music_files\videoplayback.mp4")
        while True:
            ret, frame = cap.read()
            if not ret:
                break # End of video
            cv2.imshow('Video Playback', frame)
            if cv2.waitKey(25) & 0xFF == ord('q'): # Adjust delay (25ms) and 'q' to quit
                break
    if choice == "2":
        cap = cv2.VideoCapture(r"Random_programs\Music_files\Fullmetal Alchemist Brotherhood Opening 4 (Chemistry - Period).mp4")
        while True:
            ret, frame = cap.read()
            if not ret:
                break # End of video
            cv2.imshow('Video Playback', frame)
            if cv2.waitKey(25) & 0xFF == ord('q'): # Adjust delay (25ms) and 'q' to quit
                break
    success, img = cap.read()
    shape = img.shape[1::-1]
    wn = pygame.display.set_mode(shape)
    clock = pygame.time.Clock()

while success:
    clock.tick(60)
    success, img = cap.read()
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            success = False
    wn.blit(pygame.image.frombuffer(img.tobytes(), shape, "BGR"), (0, 0))
    pygame.display.update()

