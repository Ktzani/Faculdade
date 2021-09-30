variable U: Type.

variables A B C: U → Prop.

lemma ex1c (H1: ∀ x, (A x → (B x ∨ C x))) 
            (H2: ¬ ∃ x, B x) : (∀ x, A x) → (∀ x, C x) :=

      assume H3: ∀ x, A x,
      
      show ∀ x, C x, 
      from (assume z,   
                      have H4: A z, from H3 z,
                      have H5: A z → B z ∨ C z, from H1 z,
                      have H6: B z ∨ C z, from H5 H4,

                      show C z, 
                          from (or.elim H6
                                    (assume H7: B z,
                                      show C z,
                                      from false.elim ( H2 (exists.intro z H7)))
                                                                           
                                    (assume Hn: C z, Hn))).
                                    
