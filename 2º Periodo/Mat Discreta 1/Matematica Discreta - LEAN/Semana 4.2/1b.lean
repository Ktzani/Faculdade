variable U: Type.

variables Q P: U → Prop.

lemma ex1b (H1 : ∀ x, P x → ¬Q x) : ¬(∃ x, P x ∧ Q x ) :=

  assume H2 : ∃ x, P x ∧ Q x, 

      show false,
        from exists.elim 
                    H2
                   (assume z,
                    assume H3: P z ∧ Q z,

                    have H4: P z → ¬ Q z, from H1 z,
                    have H5: P z, from and.elim_left H3, 
                    have H6: ¬ Q z, from H4 H5,
                    have H7: Q z, from and.elim_right H3,

                      show false, 
                      from H6 H7).




        


