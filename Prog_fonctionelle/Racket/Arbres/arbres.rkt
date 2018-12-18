#lang racket

(define (nbleaves T)
  (if (list? T)
      (if (empty? T) 0
          (if (= (length T) 1)
              (nbleaves (first T))
              (+ (nbleaves (first T))
                 (nbleaves (rest T)))))
          1))

(nbleaves '(1 (2 3)))
(nbleaves '(1 (2 3) 4))

;prédicats de définition

(define abef list)
(define sag? list?)
(define (sad? T) (=(length T) 2) )
(define (sag T) (first T) )
(define (sad T) (first (rest T)) )


;Ex2 nb-leaves calcule les feuilles de l'arbre
(define (nb-leaves T)
  (if (sag? T)
      (if (sad? T)
          (+ (nb-leaves (sag T))
         (nb-leaves (sad T)))
      (nb-leaves (sag T))
      )
  1))
          
     

(nb-leaves (abef 1 (abef 2 3)))


; Ex3 nb-nodes calcule les branches d'un arbre 
(define (nb-nodes T)
  (if (sag? T)
      (if (sad? T)
          (+ 1 (nb-nodes (sag T))
         (nb-nodes (sad T)))
      (+ 1 (nb-nodes (sag T)))
      )
  1))

(nb-nodes (abef 1 (abef 2 3)))


; Ex4 calcul de la hauteur d'un arbre
(define (hauteur T)
  (if (sag? T)
      (if (sad? T)
          (+ 1 (max (hauteur (sag T)) (hauteur (sad T))) )
      (+ 1 (hauteur (sag T)))
      )
  0))

(hauteur (abef 1 (abef 2 3)))

; Ex5 nombre de noeuds intermédiares
(define (nb-ni T)
  (if (sag? T)
      (if (sad? T)
          (+ 1 (nb-ni (sag T)) (hauteur (sad T)))
      (+ 1 (nb-ni (sag T)))
      )
  0))

(nb-ni (abef 1 (abef 2 3)))

;; interface bintree (prédicats)
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



(define T1 (bintree 17 (bintree 7 (bintree 1) (bintree 111)) (bintree 111 (bintree 71) (bintree 171))))
(define T2 (bintree 71 (bintree 11 (bintree 7 (bintree 1)) 17) (bintree 111 (bintree 171))))
                

;;Exo 10
(define (nbn A)
  ;;(if (bintree-empty? A) 0
      (if (has-R-subtree? A)
          (+ 1 (nbn (L-subtree A)) (nbn (R-subtree A)))
          (if (has-L-subtree? A)
              (+ 1 (nbn (L-subtree A)))
              1)
          ))

(nbn T1)
;;(nbn T2)

;; Exo 11
(define (add-leaf T e)
  (if (> (nbn (R-subtree T))
         (nbn (L-subtree T)))
      (bintree (rest T) (add-leaf (L-subtree T) e)
               (R-subtree T))
      (bintree (rest T) (L-subtree T)
               (add-leaf (R-subtree T) e)
               
               )))

(nb-leaves (abef 1 (abef 2 3)))