import init.data.set

open set

variable {U: Type}

variables A B : set U  

theorem ex3 
    : A ⊆ B →  𝒫(A) ⊆ 𝒫(B) := 

    assume (H1: A ⊆ B),
    assume x,
    assume (H2: x ⊆ A),

    assume y,
    assume (H3: y ∈ x),

    have H4: y ∈ A, from H2 H3,

          show y ∈ B, from H1 H4.  

