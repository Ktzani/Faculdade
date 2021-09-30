variables Q V S R P: Prop.

lemma ex1l (H1: P → Q)
            (H2: R → S) : (P ∨ R) → (Q ∨ S) :=

    assume H: P ∨ R,

    show Q ∨ S,
        
        from (or.elim H
                    (assume H4: P,
                      show Q ∨ S,
                      from (or.intro_left S (H1 H4)))
                                                

                    (assume H5: R,
                      show Q ∨ S, 
                      from (or.intro_right Q(H2 H5)))).
