#lang racket

(define (bt a) (list a))
(define (bt a b) (list a b))
(define (bt a b c) (list a b c))
(define (bt? T) (list? T))
(define (btroot T) (list T))
(define (bt-L T) (first (rest T)))
(define (bt-R T) (first (rest (rest T))))
(define (bt-L? T) (> (length T) 1))
(define (bt-R? T) (> (length T) 2))



(bt 1 (bt 2(bt 3 4)))

; (bt 5 6 (bt 7 8 (bt 9 10)))

;          5
;         /  \
;        6    7
;            / \
;           8   9
;              /
;             10


; (bt 1 2(bt 4(bt 5 6 7)))

;           1
;          /  \
;         2    4
;             /  
;            5    
;           /  \
;          6    7
          

(define (bt-nbn T)
;  (if (not (bt? T)) 1
      (if (bt-R? T) (+ 1(bt-nbn (bt-L T))
                       (bt-nbn (bt-R T)))
          (if (bt-L? T) (+ 1 (bt-nbn (bt-L T)))
              1)
          ))


(define (bn-nbf T)
  (if (bt-R? T)
      (+ (bt-nbf (bt-L T))
         (bt-nbf (nt-R T)))
      (if (bt-L? T)
          (bt-nbf (bt-L T))
          1
          )))

(define (bt-NBG T)
  (if (bt-R? T)
      (+ 1 (bt-NBG (bt-L T)) (bt-NBG (bt-NBG (bt-R T)))
         (if (bt-L? T) (+1 (bt-NBG (bt-L T)))
             0
             )))