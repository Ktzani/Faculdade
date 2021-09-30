variable U: Type.

variables Q  P: U → Prop.

lemma ex1f (H1: ∀ x , P x → Q x) : (∀ x, P x) → (∀ x, Q x) :=

    assume H2: ∀ x, P x,
    show ∀ x, Q x,
    from (assume z,
            have H3 : P z → Q z, from H1 z,
            have H4 : P z, from H2 z,

            show Q z, from H3 H4).
                              

      