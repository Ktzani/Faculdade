assume H1 : x ∈ A ∧ (x ∈ A → x ∈ B),

assume H1 : x ∈ A \ (A \ B),




have H3: x ∉ A → x ∈ B, from or.elim 
                                    ,

    have H4: x ∈ B, from H3 H2,

    show x ∈ A ∧ x ∈ B, from and.intro H2 H4.
