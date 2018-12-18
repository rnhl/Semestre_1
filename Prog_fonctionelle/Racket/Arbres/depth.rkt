#lang racket
(define bintree list)
(define (leaf e) e)
(define (leaf? e) (not (list? e)))
(define (not-leaf? e) (list? e))
(define (root T) (first T))
(define (L-subtree T) (first (rest T)))
(define (R-subtree T) (first (rest (rest T))))
(define (has-L-subtree? T) (> (length T) 1))
(define (has-R-subtree? T) (> (length T) 2))
  


;;Exo 9
(define (depth2 A)
  (if (leaf? A) 0
      (if (has-R-subtree? A) 
          (+ 1 (max (depth2 (L-subtree A)) (depth2 (R-subtree A))))
          (+ 1 (depth2 (L-subtree A)))
         )))



(define T1 (bintree 17 (bintree 7 1 11) (bintree 111 71 171)))
;;  (nbn T1)
(define T2 (bintree 71 (bintree 11 (bintree 7 (bintree 1)) 17) (bintree 111 (bintree 171))
                      ))
;;  (nbn T2)