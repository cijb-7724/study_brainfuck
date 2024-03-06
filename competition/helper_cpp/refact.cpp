#include <iostream>
#include <string>
#include <set>
using namespace std;

string code = R"(
; : 参照しているメモリの場所
nmk : n minus k
npk : n plus k
(x) : 左から数えて0_indexでx番目のメモリ
(y) = (x) : 代入 (x)の値は保持されるとは限らない
(y) = copy_(x) : 複製 (x)の値は保持される保証がある
using (x) (y) : メモリ(x) (y)を使用している
dec_(x) : (x)をデクリメント
inc_(x) : (x)をインクリメント
booleanization_(x) : (x)を真理値化
boolean_inversion_(x) : (x)を真理値反転

===== ===== ===== ===== # start  初期化
+++++ +++++[
    -
    >>>>+++++ +++++
    >+++++ ++
    >+++++ ++
    >+++++ +++++
    >+++++ +++++ ++
    >+++++ +++++ ++
    <<<<< <<<<
]
(0)0; 0 0 0 100 70 70 100 120 120

>>>>+>---->>+++++>--->++<<<<< <<<<
(0)0; 0 0 0 101 66 70 105 117 122
(0)0; 0 0 0 101  B  F   i   u   z

+++++[
    -
    >>>>> >>>>>+
    >+
    >++
    >+++
    <<<<< <<<<< <<<
]
>>>>> >>>>>--
(10)3; 5 10 15

(17) = copy_(4) using (3) 101をコピー
<<<<< <
[
    -
    <+
    >>>>> >>>>> >>>>+
    <<<<< <<<<< <<<
]
<
[
    -
    >+
    <
]
(0)0 0 0 0; 101 ''' (17)101

(25) = copy_(13) using (15) 15をコピー
>>>>> >>>>>
[
    -
    >>+
    >>>>> >>>>>+
    <<<<< <<<<< <<
]
>>
[
    -
    <<+
    >>
]
(15)0;

(33) = copy_(10) using (15) 3をコピー
<<<<<
[
    -
    >>>>>+
    >>>>> >>>>> >>>>> >>>+
    <<<<< <<<<< <<<<< <<<<< <<<
]
>>>>>
[
    -
    <<<<<+
    >>>>>
]
(15)0;

(41) = copy_(11) using (15) 5をコピー
<<<<
[
    -
    >>>>+
    >>>>> >>>>> >>>>> >>>>> >>>>> >+
    <<<<< <<<<< <<<<< <<<<< <<<<< <<<<<
]
>>>>
[
    -
    <<<<+
    >>>>
]
(15)0;

(57) = copy_(12) using (15) 10をコピー
<<<
[
    -
    >>>+
    >>>>> >>>>> >>>>> >>>>> >>>>> >>>>>
    >>>>> >>>>> >>+
    <<<<< <<<<< <<<<< <<<<< <<<<< <<<<<
    <<<<< <<<<< <<<<<
]
>>>
[
    -
    <<<+
    >>>
]
(15)0;

===== ===== ===== ===== # end  初期化

===== ===== ===== ===== # start ループ

>+
(16)1;
[
    (18) = copy_(17) using (15)
    >
    [
        -
        >+
        <<<+
        >>
    ]
    <<
    [
        -
        >>+
        <<
    ]
    (15)0;

    (19) = copy_(16) using (15)
    >
    [
        -
        >>>+
        <<<<+
        >
    ]
    <
    [
        -
        >+
        <
    ]
    (15)0;

    (20) = (18) minus (19) and
    (18) = 0 and
    (19) = 0
    >>>
    [
        -
        >>+
        <<
    ]
    >
    [
        -
        >-
        <
    ]
    (19)0; (18)m(19)

    (21) = boolean_inversion_(20)
    >>+<
    [
        [-]
        >-<
    ]
    >
    (21)bool 0;

    if (21)
        (16) = 0
    >+<
    [
        [-]
        >-<
        <<<<<[-]
        >>>>>
    ]
    else
    >
    [
        -
        (22)0; 0 0 15

        ===== ===== ===== ===== ## start FizzBuzz

        ===== ===== ===== ===== ### start 15で割れるか判定

        (24) = copy_(16) using (23)
        <<<<< <
        [
            -
            >>>>> >>+
            >+
            <<<<< <<<
        ]
        >>>>> >>
        [
            -
            <<<<< <<+
            >>>>> >>
        ]
        (23)0;

        (26) = copy_(25) using (23)
        >>
        [
            -
            <<+
            >>>+
            <
        ]
        <<
        [
            -
            >>+
            <<
        ]
        (23)0; n 15 15
        >
        [
            破壊空間の初期化 and dec_(24) and dec_(26)
            ->>->[-]>[-]>[-]<<<
            (24)nm1 15 14; 0 0 0

            (27) = copy_(26) using (28)
            [
                -
                >+
                >+
                <<
            ]
            >>
            [
                -
                <<+
                >>
            ]
            <
            (24)nm1 15 14 14; 0 0
            
            (28) = booleanization_(27) and (27) = 0
            [
                [-]
                >+
                <
            ]
            >
            (24)nm1 15 14 0 1; 0

            (29) = boolean_inversion_(28) and (28) = 0
            >+<
            [
                [-]
                >-
                <
            ]
            >
            (24)nm1 15 14 0 0 0;

            if (29)
                (26) = copy_(25) using (27)
            [
                -
                <<<<
                (24)nmk 15; 0 0 0 0

                (26) = copy_(25) using (27)
                [
                    -
                    >+
                    >+
                    <<
                ]
                >>
                [
                    -
                    <<+
                    >>
                ]
                (24)nmk 15 15 0; 0 0

                >>
                (24)nmk 15 15 0 0 0;
            ]
            <<<<<
            (24)nmk; 15 14 0 0 0
        ]
        (24)0; 15 k 0 0 0

        ###
            (24)==n and (26) == mでスタートして
            (24)==0になるまで(26)を(25)==15ずつデクリメントした
            (24)==0のとき(26)==(25)==mならば n mod m == 0である
        ###
        
        (27) = copy_(25) using (28)
        >
        [
            -
            >>+
            >+
            <<<
        ]
        >>>
        [
            -
            <<<+
            >>>
        ]
        (28)0;

        (26) = (26)m(27) and (27) = 0
        <
        [
            -
            <-
            >
        ]
        (24)0 15 km15 0; 0 0


        if (26) == 0
            (27) = 1
        else
            (27) = 0
        +<
        [
            [-]
            >-
            <
        ]
        >
        (24)0 15 0 bool; 0 0
        

        (27)bool == 1 ならば 15の倍数
        else そうではない
        (48) = copy_(27) and (27) = 0
        [
            -
            >>>>> >>>>> >>>>> >>>>> >+
            <<<<< <<<<< <<<<< <<<<< <
        ]
        (24)0 15 0 0; 0 0

        ===== ===== ===== ===== ### end 15で割れるか判定

        (27);
        <<<<<
        (22);

        ===== ===== ===== ===== ### start 3で割れるか判定

        <<<<< <
        (16)n;

        (32) = copy_(16) using (15)
        [
            -
            <+
            >>>>> >>>>> >>>>> >>+
            <<<<< <<<<< <<<<< <
        ]
        <
        [
            -
            >+
            <
        ]
        (15)0;

        (34) = copy_(33) using (31)
        >>>>> >>>>> >>>>> >>>
        [
            -
            >+
            <<<+
            >>
        ]
        <<
        [
            -
            >>+
            <<
        ]
        (31)0; n 3 3
        >
        [
            破壊空間の初期化 and dec_(32) and dec_(34)
            ->>->[-]>[-]>[-]<<<
            (32)nm1 3 2; 0 0 0

            (35) = copy_(34) using (36)
            [
                -
                >+
                >+
                <<
            ]
            >>
            [
                -
                <<+
                >>
            ]
            <
            (32)nm1 3 2 2; 0 0
            
            (36) = booleanization_(35) and (35) = 0
            [
                [-]
                >+
                <
            ]
            >
            (32)nm1 3 2 0 1; 0

            (37) = boolean_inversion_(36) and (36) = 0
            >+<
            [
                [-]
                >-
                <
            ]
            >
            (32)nm1 3 2 0 0 0;

            if (37)
                (34) = copy_(33) using (35)
            [
                -
                <<<<
                (32)nmk 3; 0 0 0 0

                (34) = copy_(33) using (35)
                [
                    -
                    >+
                    >+
                    <<
                ]
                >>
                [
                    -
                    <<+
                    >>
                ]
                (32)nmk 3 3 0; 0 0

                >>
                (32)nmk 3 3 0 0 0;
            ]
            <<<<<
            (32)nmk; 3 2 0 0 0
        ]
        (32)0; 3 k 0 0 0

        ###
            (32)==n and (34) == mでスタートして
            (32)==0になるまで(34)を(33)==3ずつデクリメントした
            (32)==0のとき(34)==(33)==mならば n mod m == 0である
        ###
        
        (35) = copy_(33) using (36)
        >
        [
            -
            >>+
            >+
            <<<
        ]
        >>>
        [
            -
            <<<+
            >>>
        ]
        (36)0;

        (34) = (34)m(35) and (35) = 0
        <
        [
            -
            <-
            >
        ]
        (32)0 3 km3 0; 0 0


        if (34) == 0
            (35) = 1
        else
            (35) = 0
        +<
        [
            [-]
            >-
            <
        ]
        >
        (32)0 3 0 bool; 0 0
        

        (35)bool == 1 ならば 3の倍数
        else そうではない
        (49) = copy_(35) and (35) = 0
        [
            -
            >>>>> >>>>> >>>>+
            <<<<< <<<<< <<<<
        ]
        (32)0 15 0 0; 0 0

        ===== ===== ===== ===== ### end 3で割れるか判定

        (35);
        <<<<< <<<<< <<<
        (22);

        ===== ===== ===== ===== ### start 5で割れるか判定

        <<<<< <
        (16)n;

        (40) = copy_(16) using (15)
        [
            -
            <+
            >>>>> >>>>> >>>>> >>>>> >>>>>+
            <<<<< <<<<< <<<<< <<<<< <<<<
        ]
        <
        [
            -
            >+
            <
        ]
        (15)0;

        (42) = copy_(41) using (39)
        >>>>> >>>>> >>>>> >>>>> >>>>> >
        [
            -
            >+
            <<<+
            >>
        ]
        <<
        [
            -
            >>+
            <<
        ]
        (39)0; n 5 5
        >
        [
            破壊空間の初期化 and dec_(40) and dec_(42)
            ->>->[-]>[-]>[-]<<<
            (40)nm1 5 4; 0 0 0

            (43) = copy_(42) using (44)
            [
                -
                >+
                >+
                <<
            ]
            >>
            [
                -
                <<+
                >>
            ]
            <
            (40)nm1 5 4 4; 0 0
            
            (44) = booleanization_(43) and (43) = 0
            [
                [-]
                >+
                <
            ]
            >
            (40)nm1 5 4 0 1; 0

            (45) = boolean_inversion_(44) and (44) = 0
            >+<
            [
                [-]
                >-
                <
            ]
            >
            (40)nm1 5 4 0 0 0;

            if (45)
                (42) = copy_(41) using (43)
            [
                -
                <<<<
                (40)nmk 5; 0 0 0 0

                (42) = copy_(41) using (43)
                [
                    -
                    >+
                    >+
                    <<
                ]
                >>
                [
                    -
                    <<+
                    >>
                ]
                (40)nmk 5 5 0; 0 0

                >>
                (40)nmk 5 5 0 0 0;
            ]
            <<<<<
            (40)nmk; 5 4 0 0 0
        ]
        (40)0; 5 k 0 0 0

        ###
            (40)==n and (42) == mでスタートして
            (40)==0になるまで(42)を(41)==5ずつデクリメントした
            (40)==0のとき(42)==(41)==mならば n mod m == 0である
        ###
        
        (43) = copy_(41) using (44)
        >
        [
            -
            >>+
            >+
            <<<
        ]
        >>>
        [
            -
            <<<+
            >>>
        ]
        (44)0;

        (42) = (42)m(43) and (43) = 0
        <
        [
            -
            <-
            >
        ]
        (40)0 5 km5 0; 0 0

        if (42) == 0
            (43) = 1
        else
            (43) = 0
        +<
        [
            [-]
            >-
            <
        ]
        >
        (40)0 5 0 bool; 0 0
        
        (43)bool == 1 ならば 5の倍数
        else そうではない
        (50) = copy_(43) and (43) = 0
        [
            -
            >>>>> >>+
            <<<<< <<
        ]
        (40)0 5 0 0; 0 0

        ===== ===== ===== ===== ### end 5で割れるか判定

        ===== ===== ===== ===== ### start FizzBuzzまたは数字を表示

        >>>>> >>>+
        <<<
        (48)bool_15; bool_3 bool_5 bool_num

        if bool_15
        [
            -
            >[-]>[-]>[-]
            (51)0;
            
            ===== ===== ===== ===== #### start put FizzBuzz\n
            
            <<<<< <<<<< <<<<< <<<<<
            <<<<< <<<<< <<<<< <<<<<
            <<<<<
            (6)F;
            .>.>>..<<<<.>>>.>..>>>.
            (12)10;

            ===== ===== ===== ===== #### end put FizzBuzz\n

            >>>>> >>>>> >>>>> >>>>>
            >>>>> >>>>> >>>>> >
            (48);
        ]
        else if bool_3
        >
        [
            -
            >[-]>[-]
            (51)0;
            
            ===== ===== ===== ===== #### start put Fizz\n

            <<<<< <<<<< <<<<< <<<<<
            <<<<< <<<<< <<<<< <<<<<
            <<<<<
            (6)F;
            .>.>>..>>>.
            (12)10;

            ===== ===== ===== ===== #### end put Fizz\n

            >>>>> >>>>> >>>>> >>>>>
            >>>>> >>>>> >>>>> >>
            (49);
        ]
        else if bool_5
        >
        [
            -
            >[-]
            (51)0;
            
            ===== ===== ===== ===== #### start put Buzz\n

            <<<<< <<<<< <<<<< <<<<<
            <<<<< <<<<< <<<<< <<<<<
            <<<<< <
            (5)B;
            .>>>.>..>>>.
            (12)10;

            ===== ===== ===== ===== #### end put Buzz\n

            >>>>> >>>>> >>>>> >>>>>
            >>>>> >>>>> >>>>> >>>
            (50);
        ]
        else
        >
        [
            -
            (51)0;
            
            ===== ===== ===== ===== #### start put Number\n

            <<<<< <<<<< <<<<< <<<<<
            <<<<< <<<<< <<<<<
            (16)n;

            (56) = copy_(16) using (15)
            [
                -
                <+
                >>>>> >>>>> >>>>> >>>>>
                >>>>> >>>>> >>>>> >>>>> >+
                <<<<< <<<<< <<<<< <<<<<
                <<<<< <<<<< <<<<< <<<<<
            ]
            <
            [
                -
                >+
                <
            ]
            (15)0;

            (58) = copy_(57) using (55)
            >>>>> >>>>> >>>>> >>>>>
            >>>>> >>>>> >>>>> >>>>> >>
            [
                -
                >+
                <<<+
                >>
            ]
            <<
            [
                -
                >>+
                <<
            ]
            (55)0; n 10 10
            >
            [
                破壊空間の初期化 and dec_(56) and dec_(58)
                ->>->[-]>[-]>[-]<<<
                (56)nm1 10 9; 0 0 0

                (59) = copy_(58) using (60)
                [
                    -
                    >+
                    >+
                    <<
                ]
                >>
                [
                    -
                    <<+
                    >>
                ]
                <
                (56)nm1 10 9 9; 0 0
                
                (60) = booleanization_(59) and (59) = 0
                [
                    [-]
                    >+
                    <
                ]
                >
                (56)nm1 10 9 0 1; 0

                (61) = boolean_inversion_(60) and (60) = 0
                >+<
                [
                    [-]
                    >-
                    <
                ]
                >
                (56)nm1 10 9 0 0 0;

                if (61)
                    (58) = copy_(57) using (59)
                [
                    -
                    <<<<
                    (56)nmk 10; 0 0 0 0

                    (58) = copy_(57) using (59)
                    [
                        -
                        >+
                        >+
                        <<
                    ]
                    >>
                    [
                        -
                        <<+
                        >>
                    ]
                    (56)nmk 10 10 0; 0 0

                    inc_(62) : 10で割り切れた回数=10の位が保持される
                    >>>+
                    <
                    (56)nmk 10 10 0 0 0; t
                ]
                <<<<<
                (56)nmk; 10 9 0 0 0 t
            ]
            (56)0; 10 k 0 0 0 t

            ###
                n=36の場合
                (56)36 10 10
                To
                (56)0; 10 4 0 0 0 3
                になっている
            ###

            (63) = 10
            >>>>> >>+++++ +++++
            (56)0 10 4 0 0 0 3 10;

            (63) = (63)m(58)
            <<<<<
            [
                -
                >>>>>-
                <<<<<
            ]
            (56)0 10 0; 0 0 0 3 6

            (64) = copy_(62) using (65)
            >>>>
            [
                -
                >>+
                >+
                <<<
            ]
            >>>
            [
                -
                <<<+
                >>>
            ]
            (56)0 10 0 0 0 0 3 6 3 0;

            (65) = booleanization_(64)
            <
            [
                [-]
                >+
                <
            ]
            >
            (56)0 10 0 0 0 0 3 6 0 1;

            (66) = 48
            >>+++++ +++
            [
                -
                <+++++ +
                >
            ]
            <
            (56)0 10 0 0 0 0 3 6 0 1 48;

            (62) = (62)p(66) and
            (63) = (63)p(66) and
            (66) = 0
            [
                -
                <<<+
                <+
                >>>>
            ]
            (56)0 10 0 0 0 0 3p48 6p48 0 1 0;

            if (65)
                put (62)
            <
            [
                -
                <<<.
                >>>
            ]
            (56)0 10 0 0 0 0 3p48 6p48 0 0; 0

            (62) = 0
            <<<[-]
            (56)0 10 0 0 0 0 0; 6p48 0 0 0

            put (63)
            >.
            [-]
            (56)0 10 0 0 0 0 0 0; 0 0 0

            put \n
            +++++ +++++.[-]

            ===== ===== ===== ===== #### end put Number\n

            <<<<< <<<<< <<
            (51);
        ]

        ===== ===== ===== ===== ### end FizzBuzzまたは数字を表示

        <<<<< <<<<< <<<<< <<<<<
        <<<<< <<<<

        ===== ===== ===== ===== ## start FizzBuzz

        (22);
        <<<<< <
        inc_(16)
        +
        >>>>> >
        (22);
    ]
    <<<<< <
]

===== ===== ===== ===== # end ループ

)";



int main() {
    string transformed_code = "";
    set<char> literal = {'[', ']', '<', '>', ',', '.', '+', '-'};
    int width = 80;
    for (auto c: code) {
        if (literal.count(c)) {
            transformed_code.push_back(c);
        }
    }
    for (int i=0; i<transformed_code.size(); ++i) {
        cout << transformed_code[i];
        if ((i+1) % width == 0) cout << endl;
    }
    cout << endl;
}