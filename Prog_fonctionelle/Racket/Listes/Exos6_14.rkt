#lang racket

;; Exos 6 8 10 12 14

;;Ex 6
(define (plat L)
  (cond
    ((empty? L) '() )
    ((list? (first L))
     (append (plat (first L))
             (plat (rest L))))
    (#t
    (cons (first L) (plat (rest L))
          ))
    )
  )

;Exo 10

(define (ajoutfin n l)
  (if (empty? l)
      (cons n '())
      (cons (first l) (ajoutfin n (rest l)))))

(define (renverse l)
  (if (empty? l)
  '()
  (ajoutfin (first l) (renverse (rest l)))))

(define (cop l)
  (if (empty? l) '()
      (cons (first l) (cons (first l) (cop (rest l))))))

(define (rev-dup l)
  (renverse (cop l)))


(define (n-eme l n)
  (if (= n 1)
      (first l)
      (n-eme (rest l) (- n 1))))


;Exo 12
(define (remove l a)
  (cond ((null? l) '())
        ((equal? (first l) a)
         (remove (rest l) a))
        (else (cons (first l) (remove (rest l) a)))))