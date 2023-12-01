ORG $8000 ; Starting address in ROM

; Sequence 1
LDA #$00 ; Load accumulator with 00
STA $1000 ; Store accumulator value at memory address 1000
LDA #$10 ; Load accumulator with 10
STA $1001 ; Store accumulator value at memory address 1001
LDA #$00 ; Load accumulator with 00
STA $1002 ; Store accumulator value at memory address 1002
LDA #$20 ; Load accumulator with 20
STA $1003 ; Store accumulator value at memory address 1003
LDA #$4 ; Load accumulator with 4
STA $1004 ; Store accumulator value at memory address 1004
LDA #$92 ; Load accumulator with 92
STA $1005 ; Store accumulator value at memory address 1005
LDA #$82 ; Load accumulator with 82
STA $1006 ; Store accumulator value at memory address 1006
LDA #$72 ; Load accumulator with 72
STA $1007 ; Store accumulator value at memory address 1007
LDA #$66 ; Load accumulator with 66
STA $1008 ; Store accumulator value at memory address 1008
LDA #$36 ; Load accumulator with 36
STA $1009 ; Store accumulator value at memory address 1009
LDA #$FF ; Load accumulator with FF
STA $100A ; Store accumulator value at memory address 100A
LDA #$86 ; Load accumulator with 86
STA $100B ; Store accumulator value at memory address 100B

; Sequence 2
LDA #$01 ; Load accumulator with 01
STA $1100 ; Store accumulator value at memory address 1100
LDA #$11 ; Load accumulator with 11
STA $1101 ; Store accumulator value at memory address 1101
LDA #$04 ; Load accumulator with 04
STA $1102 ; Store accumulator value at memory address 1102
LDA #$83 ; Load accumulator with 83
STA $1103 ; Store accumulator value at memory address 1103
LDA #$5 ; Load accumulator with 5
STA $1104 ; Store accumulator value at memory address 1104
LDA #$00 ; Load accumulator with 00
STA $1105 ; Store accumulator value at memory address 1105
LDA #$82 ; Load accumulator with 82
STA $1106 ; Store accumulator value at memory address 1106
LDA #$29 ; Load accumulator with 29
STA $1107 ; Store accumulator value at memory address 1107
LDA #$28 ; Load accumulator with 28
STA $1108 ; Store accumulator value at memory address 1108
LDA #$90 ; Load accumulator with 90
STA $1109 ; Store accumulator value at memory address 1109
LDA #$A6 ; Load accumulator with A6
STA $110A ; Store accumulator value at memory address 110A

END ; End of code
