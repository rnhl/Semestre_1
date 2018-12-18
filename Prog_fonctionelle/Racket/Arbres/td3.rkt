#lang racket
(require graphics/turtles)
(turtles #t)


;Exercice 1
(define (carre taille_cote)
  (begin
    (draw taille_cote)
    (turn 90)
    (draw taille_cote)
    (turn 90)
    (draw taille_cote)
    (turn 90)
    (draw taille_cote)
    (turn 90)
  )
)


(define (polygone cote taille_cote [c 0])
  (if (< c cote)
      (begin
        (draw taille_cote)
        (turn (/ 360 cote))
        (polygone cote taille_cote (add1 c))
      )
      void
  )
)


(define (shape1 taille_cote [pentagones 0])
  (if (<= pentagones 10)
      (begin
        (polygone 5 taille_cote)
        (turn 36)
        (shape1 taille_cote (add1 pentagones))
      )
      void
  )
)


;Pour les exercices suivants j'ai triché en regardant la formule mathématique sur Internet
;Exercice 2
(define (Koch1 size)
  (let [(SIZE (/ size 3))]
    (begin
      (draw size)
      (turn 180)
      (move (* 2 SIZE))
      (turn 180)
      (polygone 3 SIZE)
      (erase SIZE)
      (move SIZE)
    )
  )
)

(define (Koch2 size)
  (let [(SIZE (/ size 3))]
    (begin
      (Koch1 SIZE)
      (turn 60)
      (Koch1 SIZE)
      (turn -120)
      (Koch1 SIZE)
      (turn 60)
      (Koch1 SIZE)
    )
  )
)
           
(define (Koch3 size)
  (let [(SIZE (/ size 3))]
    (begin
      (Koch2 SIZE)
      (turn 60)
      (Koch2 SIZE)
      (turn -120)
      (Koch2 SIZE)
      (turn 60)
      (Koch2 SIZE)
    )
  )
)


;Exercice 3

(turn 90)

(define (ARBRECASSER1 size)
  (let [(SIZE (/ size 2))]
    (begin
      (draw size)
      (turn -30)
      (draw SIZE)
      (turn 180)
      (move SIZE)
      (turn -120)
      (draw SIZE)
      (turn 180)
      (move SIZE)
      (turn -30)
      (move size)
      (turn 180)
    )
  )
)


(define (ARBRECASSER2 size)
  (let [(SIZE (/ size 2))]
    (begin
      (draw size)
      (turn -30)
      (ARBRECASSER1 SIZE)
      (turn 60)
      (ARBRECASSER1 SIZE)
    )
  )
)


(define (ARBRECASSER3 size)