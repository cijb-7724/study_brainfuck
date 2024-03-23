use 7 cells

===== ===== ===== ===== 
xor(a b)
=!(a&b | !a&!b)
=!(a&b) & (a | b)
===== ===== ===== ===== 

(0)a; b 0 0 0 0

(4) = copy_(0) using (2)
[->>+>>+<<<<]>>[-<<+>>]
(0)a b 0; 0 a 0

(5) = copy_(1) using (2)
<
[->+>>>+<<<<]>[-<+>]
(0)a b 0; 0 a b

(2) = (0)&(1) and (0) = (1) = 0
<<
(0)a; b 0 0
[->[->+>+<<]>>[-<<+>>]<<<]>[-]>
(0)0 0 a&b; 0
(0)0 0 a&b; 0 a b

(3) = boolean_inversion_(2)
(0)bool; 0
>+<[[-]>-<]>
(0)0 !bool;
(0)0 0 0 !a&b; a b

(4) = (4)|(5)
>
(0)a; b
[->+<]>[[-]<+>]<
(0)a|b; 0
(0)0 0 0 !a&b a|b; 0

(5) = (3)&(4)
<
(3)!a&b; a|b 0 0
(0)a; b 0 0
[->[->+>+<<]>>[-<<+>>]<<<]>[-]>
(0)0 0 a&b; 0
(0)0 0 0 0 0 a^b; 0


when using

(0)a; b 0 0 0 0 0
[->>+>>+<<<<]>>[-<<+>>]<[->+>>>+<<<<]>[-<+>]
<<[->[->+>+<<]>>[-<<+>>]<<<]>[-]>
>+<[[-]>-<]>>[->+<]>[[-]<+>]<<
[->[->+>+<<]>>[-<<+>>]<<<]>[-]>
(0)0 0 0 0 0 a^b; 0