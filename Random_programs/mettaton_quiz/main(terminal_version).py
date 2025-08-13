#Mettaton quiz game
#This is a simple quiz game where the player answers questions to progress.
import random
import time
from question_database import quiz_topics

def main():
    print("Welcome to the Mettaton Quiz Game!")
    time.sleep(2)
    print("You will be asked questions from various topics. Answer correctly to get more questions!")
    time.sleep(2)
    
    topic = input("Choose a topic (Full Metal Alchemist, Undertale, Deltarune Chapter 1, or Random): ").strip()
    if topic not in quiz_topics and topic != "Random":
        print("Invalid topic. Please try again.")
        main()
    elif topic == "Random":
        topic = random.choice(list(quiz_topics.keys()))
        print("You have chosen a random topic. Let's get started!")
        time.sleep(2)
    else:
        print(f"You have chosen the topic: {topic}. Let's get started!")
        time.sleep(2)
    print(f"\nToday's topic is: {topic}\n")
    time.sleep(2)
    questions = quiz_topics[topic]
    score = 0
    health = 15
    
    for q in questions:
        print(q["question"])
        for i, option in enumerate(q["options"], 1):
            print(f"{i}. {option}")
        
        answer = input("Your answer (type the option number): ")
        
        if q["options"][int(answer) - 1] == q["answer"]:
            print("Correct!\n")
            score += 1
        else:
            print(f"Wrong! The correct answer was: {q['answer']}\n")
            health -= 5
            print(f"Your health is now: {health}")
    
        if health <= 0:
            print("Game Over! You have lost all your health.")
            return
    print(f"Quiz finished! Your score: {score}/{len(questions)}")
    print("Thank you for playing the Mettaton Quiz Game!")
    restart = input("Play again? (Press Enter to exit)")
    if restart == "":
        print("Thanks for playing!")
        return
    else:
        main()




main()