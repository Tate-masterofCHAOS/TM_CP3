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

def clear(screen): # 
        screen.fill(BLACK)


def display(message, sec, screen, x=50, y=50, ): # Displays a message on the screen by itself for a certain amount of seconds
    font = pygame.font.Font(None, 36)
    surface = font.render(message, True, WHITE)
    screen.blit(surface, (x, y))
    pygame.display.flip()  # Update the display
    if sec != 0:
        pygame.time.delay(sec * 1000)  # Waits a certain amount of seconds before continuing

def main():
    screen = pygame.display.set_mode((1200, 800))
    pygame.init()
    screen.fill(BLACK)
    pygame.display.set_caption('MTT Quiz')


    topic = None
    display("Welcome to the MTT Quiz!", 2, screen)
    clear(screen)
    display("Press any key to start...", 2, screen)
    clear(screen)
    display("Choose a topic:", 2, screen)
    display("1. Full Metal Alchemist", 2, screen, x=500, y=100)
    display("2. Harry Potter", 2, screen, x=500, y=150)
    display("3. All", 2, screen, x=500, y=200)
    soulY = 100
    screen.blit(pygame.image.load('Programming-3\TM_CP3\Quiz_program\download (1).png'), (450, soulY))
    pygame.display.flip()
    
    waiting_for_selection = True
    while waiting_for_selection:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                pygame.quit()
                return
            elif event.type == pygame.KEYDOWN:
                if event.key == pygame.K_DOWN and soulY < 200:  # Prevent moving out of bounds
                    soulY += 50
                    clear(screen)
                    display("Choose a topic:", 0, screen)
                    display("1. Full Metal Alchemist", 0, screen, x=500, y=100)
                    display("2. Harry Potter", 0, screen, x=500, y=150)
                    display("3. All", 0, screen, x=500, y=200)
                    screen.blit(pygame.image.load('Programming-3\TM_CP3\Quiz_program\download (1).png'), (450, soulY))
                    pygame.display.flip()
                elif event.key == pygame.K_UP and soulY > 100:  # Prevent moving out of bounds
                    soulY -= 50
                    clear(screen)
                    display("Choose a topic:", 0, screen)
                    display("1. Full Metal Alchemist", 0, screen, x=500, y=100)
                    display("2. Harry Potter", 0, screen, x=500, y=150)
                    display("3. All", 0, screen, x=500, y=200)
                    screen.blit(pygame.image.load('Programming-3\TM_CP3\Quiz_program\download (1).png'), (450, soulY))
                    pygame.display.flip()
                elif event.key == pygame.K_RETURN:  # Confirm selection
                    if soulY == 100:
                        topic = 'Full Metal Alchemist'
                    elif soulY == 150:
                        topic = 'Harry Potter'
                    elif soulY == 200:
                        topic = 'All'
                    if topic:  # If a valid topic is selected
                        waiting_for_selection = False  # Exit the input loop
                elif event.key == pygame.K_ESCAPE:  # Exit the program
                    pygame.quit()
                    return
                
    if topic:
        clear(screen)
        display(f"You selected: {topic}", 2, screen)
        pygame.time.delay(1000)  # Wait for 1 second before starting the quiz
        clear(screen)
        questions = load_questions(topic)
        if not questions:
            display("No questions available for this topic.", 2, screen)
            pygame.time.delay(2000)

        random.shuffle(questions)
        score = 0

        for q in questions:
            random.shuffle(q['options'])
            display(f'Topic: {q["topic"]}',screen ,500,100)
            display(f'Question: {q["question"]}',screen ,500,100)
            for i, option in enumerate(q['options'], 1):
                display(f'{i}. {option}', screen, 500, 150 + i * 50)
            pygame.display.flip()
            screen.blit(pygame.image.load('Programming-3\TM_CP3\Quiz_program\download (1).png'), (450, soulY))
            pygame.display.flip()
            time.sleep(1)
            for event in pygame.event.get():
                if event.type == pygame.KEYDOWN:
                    if event.key == pygame.K_DOWN:
                        soulY += 50
                        screen.blit(pygame.image.load('Programming-3\TM_CP3\Quiz_program\download (1).png'), (450, soulY))
                    elif event.key == pygame.K_UP:
                        soulY -= 50
                        screen.blit(pygame.image.load('Programming-3\TM_CP3\Quiz_program\download (1).png'), (450, soulY))
                    elif event.key == pygame.K_RETURN:
                        if soulY == 100:
                            answer = q['options'][0]
                        elif soulY == 150:
                            answer = q['options'][1]
                        elif soulY == 200:
                            answer = q['options'][2]
                        elif soulY == 250:
                            answer = q['options'][3]
            screen.fill(BLACK)
            if answer == q['answer']:
                display("Correct!\n", 1, screen, 500, 100)
                score += 1
            else:
                display(f"Wrong! The correct answer was: {q['answer']}\n", 1, screen, 500, 100)
            pygame.display.flip()
            time.sleep(1)





        


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

main()