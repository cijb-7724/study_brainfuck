use 6 cells
x == 255 のとき正しくない

++>++<

(0)x; y 0 0 0 (5)0
+
[
    >
    (2) = copy_(1)
    [->+>+<<]>>[-<<+>>]
    <
    (0)xmk ymk ymk; 0
    
    (4) = bool_((2)ymk == (3)0)
    [
        -
        >-
        <
    ]
    >>+<
    [
        [-]
        >-
        <
    ]
    >
    (4)bool;

    if (4)
        inc_(5)
    [
        -
        >+<
    ]
    <<<<
    -
    >-
    <
]
>[-]>>>>
(0)0 0 0 0 0 (5)boolean;

when using

(0)x; y 0 0 0 (5)0
+[>[->+>+<<]>>[-<<+>>]<[->-<]>>+<[[-]>-<]>[->+<]<<<<->-<]>[-]>>>>
(0)0 0 0 0 0 (5)boolean;

