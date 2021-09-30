variables P R Q: Prop.

lemma ex1m (H1: Q → R) : (P → Q) → (P → R) :=

    assume H2: P → Q,
      assume H3: P,

      show R,
      from (H1
              (show Q,
                  from (H2 H3)))
