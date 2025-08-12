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
        }
    ]
}