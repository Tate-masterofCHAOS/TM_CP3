#Mettaton quiz game
#This is a simple quiz game where the player answers questions to progress.
import random
import time

#Quiz topics and questions
quiz_topics = {
    "Full Metal Alchemist": [
        {
            "question": "What is the main goal of Edward and Alphonse Elric?",
            "options": ["To become the strongest alchemists", "To get their bodies back", "To defeat Father", "To save their mother"],
            "answer": "To get their bodies back"
        },
        {
            "question": "Who is the main antagonist in Full Metal Alchemist?",
            "options": ["Armstrong", "Roy Mustang", "Edward Elric", "Alphonse Elric"],
            "answer": "Edward Elric"
        },
        {
            "question": "What is the Philosopher's Stone made of?",
            "options": ["Human souls", "Gold", "rock", "Alchemical energy"],
            "answer": "Human souls"
        },
        {
            "question": "What is the name of the Elric brothers' mentor?",
            "options": ["Izumi Curtis", "Roy Mustang", "Maes Hughes", "Riza Hawkeye"],
            "answer": "Izumi Curtis"
        },
        {
            "question": "What is the name of the country where Full Metal Alchemist takes place?",
            "options": ["Amestris", "Xerxes", "Drachma", "Creta"],
            "answer": "Amestris"
        }
    ],
    "Undertale": [
        {
            "question": "Who is the main character in Undertale?",
            "options": ["Frisk", "Sans", "Papyrus", "Mettaton"],
            "answer": "Frisk"
        },
        {
            "question": "What is the name of the taller of the two skeleton brothers you meet?",
            "options": ["Sans", "Papyrus", "Mettaton", "Asgore"],
            "answer": "Papyrus"
        },
        {
            "question": "What is the name of the first human to have fallen?",
            "options": ["Frisk", "Chara", "Asriel", "Clover"],
            "answer": "Chara"
        },
        {
            "question": "What is the name of the underground where the game takes place?",
            "options": ["The Ruins", "Snowdin", "Waterfall", "The Underground"],
            "answer": "The Underground"
        },
        {
            "question": "What is the name of the character who is a robot and hosts a quiz show?",
            "options": ["Mettaton", "Alphys", "Undyne", "Asgore"],
            "answer": "Mettaton"
        }
    ],
    "Deltarune Chapter 1": [
        {
            "question": "What is the name of the character you control in Deltarune?",
            "options": ["Kris", "Ralsei", "Susie", "The Soul"],
            "answer": "The Soul"
        },
        {
            "question": "What is the Seam in the light world?",
            "options": ["Playing Card", "Stuffed Animal", "Figuring", "Button and Thread"],
            "answer": "Stuffed Animal"
        },
        {
            "question": "Who is the main antagonist in Deltarune Chapter 1?",
            "options": ["Lancer", "Ralsei", "Susie", "The King"],
            "answer": "The King"
        },
        {
            "question": "What is the name of the town where Deltarune takes place?",
            "options": ["Hometown", "Dark World", "Light World", "Cyber City"],
            "answer": "Hometown"
        },
        {
            "question": "What is the name of the character who is a prince and helps you in your journey?",
            "options": ["Lancer", "Ralsei", "Susie", "Kris"],
            "answer": "Ralsei"
        }
    ]
}


def main():
    print("Welcome to the Mettaton Quiz Game!")
    time.sleep(2)
    print("You will be asked questions from various topics. Answer correctly to get more questions!")
    time.sleep(2)
    
    topic = input("Choose a topic (Full Metal Alchemist, Undertale, Deltarune Chapter 1, or Random): ").strip()
    if topic not in quiz_topics and topic != "Random":
        print("Invalid topic. Please try again.")
        return
    elif topic == "Random":
        topic = random.choice(list(quiz_topics.keys()))
        print("You have chosen a random topic. Let's get started!")
        time.sleep(2)
    else:
        print(f"You have chosen the topic: {topic}. Let's get started!")
        time.sleep(2)
    # Select a random topic
    topic = random.choice(list(quiz_topics.keys()))
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