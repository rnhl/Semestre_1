#lang racket

(require graphics/turtles)
(turtles #t)
(define (T a) (turn a))
(define (D a) (draw a))

(define (f1 a b) (begin (move a)(draw b)))
                        
       

(f1 1 50)


