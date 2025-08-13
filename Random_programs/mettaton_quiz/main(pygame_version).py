#Mettaton quiz game
#This is a simple quiz game where the player answers questions to progress.
import random
import pygame
import time

# Initialize Pygame
pygame.init()
screen = pygame.display.set_mode((800, 600))
pygame.display.set_caption("Mettaton Quiz")
font = pygame.font.Font(None, 36)
