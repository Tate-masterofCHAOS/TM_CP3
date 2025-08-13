import pygame
import csv
import random
import time
import os

def pystart(): # 
        pygame.init()
        # Set up the display
        screen = pygame.display.set_mode((1200, 800))
        pygame.display.set_caption('MTT Quiz')
       
        return(screen)

#colors
WHITE = (255, 255, 255)
BLACK = (0, 0, 0)
YELLOW = (255, 255, 0)
RED = (255, 0, 0)
screen = pystart()

def display(message, sec, x=50, y=50): # Displays a message on the screen by itself for a certain amount of seconds
    font = pygame.font.Font(None, 36)
    surface = font.render(message, True, (0, 0, 0))
    screen.blit(surface, (x, y))
    pygame.display.flip()  # Update the display
    if sec != 0:
        pygame.time.delay(sec * 1000)  # Waits a certain amount of seconds before continuing


def load_questions(filename):
    questions = []
    with open(filename, 'r') as file:
        reader = csv.DictReader(file)
        for row in reader:
            questions.append({
                'topic': row['topic'],
                'question': row['question'],
                'options': [row['option1'], row['option2'], row['option3'], row['option4']],
                'answer': row['answer']
            })
    return questions




def main():

    pygame.init()
    screen = pystart()
    screen.fill(BLACK)
    screen.blit(pygame.image.load("logo.png"), (0, 0))
    while True:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                raise SystemExit
            
main()
