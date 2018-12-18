#lang racket

(define (strsize S)
  (if (string=? S "") 0
      (+ 1 (strsize (substring S 1)))
      ))


(define S (strsize "abcd"))
;(strsize S)

(define (nbo S)
  (if (string=? S (string "")) 0
      (if (equal? #\o (string-ref S 0))
          (+1 (nbo (substring S 1)))
          (nbo (substring S 1))
          ))
  )