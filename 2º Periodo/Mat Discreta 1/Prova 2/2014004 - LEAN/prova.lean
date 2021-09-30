import init.data.set

open set

-- universo de discurso
variable {U : Type}

-- garantindo que o universo é não vazio
variable x : U

-- definindo dois conjuntos.
variables A B C : set U

-- definindo uma família

variable F : set (set U)

-- definindo a união de famílias

def Union (G : set (set U)) : set U :=
    {x | ∃ X, X ∈ G ∧ x ∈ X}

-- interseção de famílias 

def Intersection (G : set (set U)) : set U := 
  {x | ∀ X, X ∈ G → x ∈ X}

lemma ex1 : A \ (A \ B) ⊆ A ∩ B := 

     -- A \ B = x ∈ A ∧ x ∉ B 

    -- ¬(x ∈ A ∧ x ∉ B)

    -- x ∉ A ∨ x ∈ B  ==  x ∈ A → x ∈ B

    assume x,

    assume H1 : x ∈ A ∧ (x ∉ A ∨ x ∈ B),

    have H2: x ∈ A, from and.elim_left H1,

    have H3: x ∉ A ∨ x ∈ B, from and.elim_right H1,

    have H4: x ∈ B, from or.elim H3 
                                (assume Ha: x ∉ A, 
                                  show x ∈ B, from false.elim (Ha H2))

                                (assume Hb: x ∈ B, Hb),
                                
    show x ∈ A ∧ x ∈ B, from and.intro H2 H4.


lemma ex2 : A ∈ F → Intersection F ⊆ Union F := 

  assume H1: A ∈ F,

  assume x,

  assume H2: x ∈ Intersection F,

    have H3: A ∈ F → x ∈ A, from H2 A,

    have H4: x ∈ A, from H3 H1,

    show ∃ A, A ∈ F ∧ x ∈ A,     
              from exists.intro A(and.intro H1 H4).
     

lemma ex3 : A ∩ C ⊆ B ∧ x ∈ C → x ∉ A \ B := 

  assume (H1: A ∩ C ⊆ B ∧ x ∈ C),
      assume (H2: x ∈ A \ B),
      have Ha: x ∈ A, from and.elim_left H2,

      have Hnaob: x ∉ B, from and.elim_right H2,

      have Hc: x ∈ C, from and.elim_right H1,

      have H3: x ∈ A ∩ C, from and.intro Ha Hc,

      have H4: A ∩ C ⊆ B, from and.elim_left H1,

      have H5: x ∈ B, from H4 H3,

      show false, 
        from Hnaob H5.



lemma ex4 : A ⊆ B → A \ C ⊆ B \ C :=

  assume H1: ∀x, x ∈ A → x ∈ B,

  assume x, 

  assume H2: x ∈ A ∧ x ∉ C,
  
  have H3: x ∈ A → x ∈ B, from H1 x, 

  have H4: x ∈ A, from and.elim_left H2, 

  have H5: x ∈ B, from H3 H4, 

  have H6: x ∉ C, from and.elim_right H2, 

  show x ∈ B ∧ x ∉ C, from and.intro H5 H6.
