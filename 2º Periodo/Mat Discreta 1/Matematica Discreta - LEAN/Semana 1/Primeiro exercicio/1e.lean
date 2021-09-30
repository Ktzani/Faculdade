variables P Q: Prop.

lemma ex1e (H1 : P) : Q → (P ∧ Q) :=

      assume H: Q,
        show P ∧ Q,
        from and.intro H1 (H).
        