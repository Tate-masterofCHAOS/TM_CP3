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


def load_questions(topic):
    questions = []
    with open('TM_CP3/Quiz_program/Questions.csv', 'r') as file:
        reader = csv.DictReader(file)
        for row in reader:
            if topic == 'All' or row['topic'] == topic:
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
            


def Terminal_test():
    topic = input("Enter topic (Full Metal Alchemist, Harry Potter, All): ")
    questions = load_questions(topic)
    if not questions:
        print("No questions available for this topic.")
        return

    random.shuffle(questions)
    score = 0

    for q in questions:
        random.shuffle(q['options'])
        print(f'Topic: {q["topic"]}')
        print(f'Question: {q["question"]}')
        for i, option in enumerate(q['options'], 1):
            print(f'{i}. {option}')
        answer = input("Your answer: ")
        if answer == q['answer']:
            print("Correct!\n")
            score += 1
        else:
            print(f"Wrong! The correct answer was: {q['answer']}\n")
        time.sleep(1)

    print(f"\nYour final score is: {score}/{len(questions)}")
    
Terminal_test()
