variables P Q : Prop.

lemma ex1c (H1 : P)
           (H2 : P → (P → Q)) : Q :=

      show Q,
      from ((show P → Q,
                from (H2 H1))H1).