import pygame
import csv
import random
import time
import os



#colors
WHITE = (255, 255, 255)
BLACK = (0, 0, 0)
YELLOW = (255, 255, 0)
RED = (255, 0, 0)


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
    screen = pygame.display.set_mode((1200, 800))
    pygame.init()
    screen.fill(BLACK)
    pygame.display.set_caption('MTT Quiz')
    screen.blit(pygame.image.load("logo.png"), (0, 0))
    while True:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                raise SystemExit
            
main()
