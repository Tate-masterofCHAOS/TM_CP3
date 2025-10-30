# TM CP3 Pygame notes
import pygame

pygame.init()

screen = pygame.display.set_mode((1200,720))
pygame.display.set_caption("Pygame Tutorial")
pos_x = 600
pos_y = 802

ufo = pygame.image.load(r'Notes\pygame_notes\ufo.jpg')
ufo_rect = ufo.get_rect(topleft = (pos_x, pos_y))
while True:
    #Body
    screen.fill((109,157,114))

    #Eyes
    pygame.draw.circle(screen, (250,250,250), (200, 250), 150)
    pygame.draw.rect(screen, (0,0,0), (100, 200, 200, 100))
    pygame.draw.circle(screen, (250,250,250), (1000, 250), 150)
    pygame.draw.rect(screen, (0,0,0), (900, 200, 200, 100))


    #UFO
    screen.blit(ufo)



    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            exit()

        keys = pygame.key.get_pressed()
        if keys[pygame.K_LEFT]:
                pos_x -= 5
        if keys[pygame.K_RIGHT]:
                pos_x += 5
        if keys[pygame.K_UP]:
                pos_y -= 5
        if keys[pygame.K_DOWN]:
                pos_y += 5


    pygame.display.flip()