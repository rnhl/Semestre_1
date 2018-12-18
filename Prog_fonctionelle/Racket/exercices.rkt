#lang racket
(define (f x)
  (if (<= x 1)
      0
      (/ (sqrt (+ (* x x) 1)) (- x 1))
      )
  )

(define (ex2 x)
  (if (< x 2)
      x
      (+ (* x x) (ex2 (- x 1)))
      )
  )

(define (ex3 x y)
  (if (= x y)
      x
      (+ x (ex3 (+ x 1) y))
      )
  )

(ex3 1 10)



(define (est-pair x)
  (if (= 0 (modulo x 2))
      #t
      #f))

(est-pair 5)

;(ex5 2 8)