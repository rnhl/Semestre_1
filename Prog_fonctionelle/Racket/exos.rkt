#lang racket

(define (exo1 x)
  (if (<= x 1)
      0
      (/ (sqrt (+ (* x x) 1)) (- x 1))
  )
)

(define (exo2 x)
  (if (<= x 1)
      1
      (+ (* x x) (exo2 (- x 1)))
  )
)
; remainder : reste de la division entière.

(define (exo3 x y)
  (if (= (+ x 1) y)
      (+ x y)
      (+ (exo3 x (- y 1)) y)
      ))

(define (exo4 x y)
  (if (and (<= x 1) (<= y 1))
           0
           (if (even? y)
               (+ y x (- y 2))
               y)
           (exo4 x (- y 1))
           )
 )

