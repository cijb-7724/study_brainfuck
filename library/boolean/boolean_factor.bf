use 6 cells
x == 0 : (0)true
y == 0 : (0)false
++++++>++<

(0)x; y 0 0 0 0

>
(0)x; 0 0
[->+>+<<]>>[-<<+>>]<
(0)x x; 0
<<

(0)x; y y 0

n k k でn mod kの判定ができる
n; 3 3
[
    破壊空間の初期化 and dec_(0) and dec_(2)
    ->>->[-]>[-]>[-]<<<
    nm1 3 2; 0 0 0

    (3) = copy_(2) using (2) (3) (4)
    {
        (3) = (2) and (4) = (2) and (2) = 0
        [->+>+<<]>>
        nm1 3 0 2 2; 0

        (2) = (4) and (4) = 0
        [-<<+>>]<
        nm1 3 2 2; 0 0
    }

    (4) = booleanization_(3) and (3) = 0
    [[-]>+<]>
    nm1 3 2 0 1; 0

    (5) = boolean_inversion_(4) and (4) = 0
    >+<[[-]>-<]>
    nm1 3 2 0 0 0;

    if id5=true id2 = id1
    if (5) == true
    [
        <<<<
        nmk 3; 0 0 0 1
        (2) = copy_(1) using (1) (2) (3)
        [->+>+<<]>>[-<<+>>]
        nmk 3 3 0; 0 1

        (5) = 0
        >>-
        nmk 3 3 0 0 0;
    ]
    <<<<<
    nmk; 3 2 0 0 0
]
0; 3 k 0 0 0

###
    (0)==n and (2)==mでスタートして
    (0)==0になるまで(2)を3ずつデクリメントした
    (0)==0のとき(2)==(1)==mならば n mod m == 0である
###

>
(2) = (2) minus (1) and (1) = 0
[->-<]
0 0; km3 0 0 0

if (2) == 0 { (1) = 1 }
else { (1) = 0 }
+>[[-]<->]<
0 1/0; 0 0 0 0
[-<+>]
<
(0)bool; 0 0 0 0 0


when using


(0)x; y 0 0 0 0
>[->+>+<<]>>[-<<+>>]<<<[->>->[-]>[-]>[-]<<<[->+>+<<]
>>[-<<+>>]<[[-]>+<]>>+<[[-]>-<]>[<<<<
[->+>+<<]>>[-<<+>>]>>-]<<<<<]>[->-<]+>[[-]<->]<[-<+>]<
(0)bool; 0 0 0 0 0

