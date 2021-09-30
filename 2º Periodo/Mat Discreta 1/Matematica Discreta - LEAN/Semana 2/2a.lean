variables A B: Prop.

lemma ex2a (H1: ¬(A ∨ B)) : ¬ A ∧ ¬ B :=

      and.intro
          (assume H2: A, 
              show false,
              from (H1 (show A ∨ B, from(or.intro_left B(H2)))))
                
          (assume H3: B,
              show false,
              from (H1 (show A ∨ B, from (or.intro_right A(H3))))).
