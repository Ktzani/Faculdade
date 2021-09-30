variables P Q R S T : Prop.

lemma ex1a (H1 : (P ∧ Q) ∧ R)
          (H2 : S ∧ T) : Q ∧ S :=

      and.intro
      
          (and.elim_right
            (and.elim_left H1))

          (and.elim_left H2).