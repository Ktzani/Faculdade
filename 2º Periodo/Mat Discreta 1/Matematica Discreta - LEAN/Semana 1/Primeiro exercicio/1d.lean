variables P Q : Prop.

lemma ex1d : (P ∧ Q) → P :=

      assume H: P ∧ Q,
        (and.elim_left H).