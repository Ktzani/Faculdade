variables A B: Prop.

lemma ex2b (H1: ¬A ∧ ¬B) : ¬(A ∨ B) :=

      assume H2: A ∨ B, 
          show false,
          from (and.elim_left H1
                      (show A,
                      from (or.elim H2 
                            (assume H3: A, H3)

                            (assume H4: B, 
                                show A,
                                from (false.elim (and.elim_right H1 H4)))))).
                                              