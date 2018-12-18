#lang racket

(define (send-last-aux list last)
  (if (empty? list)
      last
      (send-last-aux (rest list) (first list))
  )
)
(define (send-last list)
  (send-last-aux list (first list))
)

(define (add-elem liste elem)
  (if (empty? liste)
      (cons elem '())
      (cons (first liste) (add-elem (rest liste) elem))
  )
)
(add-elem '(1 2 3) 4)


(define (del-0 liste)
  (if (empty? liste)
      '()
      (if (= (first liste) 0)
          (del-0 (rest liste))
          (cons (first liste) (del-0 (rest liste)))
      )
  )
)

(del-0 '(0 1 2 3 4 0 4 0 5))


(define (plus-grand-aux liste last)
  (if (empty? liste)
      last
      (if (> (first liste) last)
          (plus-grand-aux (rest liste) (first liste))
          (plus-grand-aux (rest liste) last)
      )
  )
)

(define (plus-grand liste)
  (plus-grand-aux liste (first liste))
)

(plus-grand '(1 2 5 4 7 8 3 4 2))


(define (add-ordered nombre liste)
  (if (empty? liste)
      (cons nombre '())
      (if (< nombre (first liste))
          (cons nombre liste)
          (cons (first liste) (add-ordered nombre (rest liste)))
      )
  )
)

(define (sort-aux liste liste-aux)
  (if (empty? (rest liste))
      (add-ordered (first liste) liste-aux)
      (cons (add-ordered (first liste) liste-aux) (sort-aux (rest liste) (add-ordered (first liste) liste-aux)))
  )
)

(define (sort liste)
  (sort-aux liste '())
)

(sort '(1 3 6 4 5 2 10 46 35 24))

(define (esttriee liste)
  (if (or (empty? liste) (empty? (rest liste)))
      #t
      (esttriee (rest liste))
  )
)
