variable U: Type.

variables Q P: U → Prop.


lemma ex1a (H1: ∀ x, P x → Q x ) : (∀ x, ¬Q x) → (∀x, ¬P x ) :=

    assume H2: ∀ x , ¬ Q x,
    assume z,
    assume Hp: P z, 
              have H3: ¬ Q z, from H2 z,
              have H4: P z → Q z, from H1 z,
          
                show false, 
                    from (H3(show Q z, from H4 Hp)).

                    
            
            
            
            
    

