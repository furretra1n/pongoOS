/*

	Font from here: https://robey.lag.net/2010/01/23/tiny-monospace-font.html
	Converted with bdf2c and some regex magic.
	The characters are unfortunately all aligned to top :( (think hyphen here °°°)
	I have edited the ones I use manually (a-z;+-,.)
	I suppose I should have utilized this info: "// width 4, bbx 0, bby 4, bbw 3, bbh 1"
	bbx - probably offset from the left (already in there)
	bby - probably offset from the bottom (5th line from top is 0, 6th is -1) (mostly not in there)
	so - the bitmap must be adjusted so that the bottom of the bounding box is at bby
	Let me know if you want to look at that.
	Maybe a fork of bdf2c, or a script to do the regex fun + parse bb*?

*/

#ifndef FONT_H_   /* Include guard */
#define FONT_H_
#define FONTW 4
#define FONTH 6

unsigned char letters[203][6] = {
//  32 'space'---
{
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000
},
//  33 'e1clam'---
{
	0b01000000,
	0b01000000,
	0b01000000,
	0b00000000,
	0b01000000,
	0b00000000
},
//  34 'quotedbl'---
{
	0b10100000,
	0b10100000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000
},
//  35 'numbersign'---
{
	0b10100000,
	0b11100000,
	0b10100000,
	0b11100000,
	0b10100000,
	0b00000000
},
//  36 'dollar'---
{
	0b01100000,
	0b11000000,
	0b01100000,
	0b11000000,
	0b01000000,
	0b00000000
},
//  37 'percent'---
{
	0b10000000,
	0b00100000,
	0b01000000,
	0b10000000,
	0b00100000,
	0b00000000
},
//  38 'ampersand'---
{
	0b11000000,
	0b11000000,
	0b11100000,
	0b10100000,
	0b01100000,
	0b00000000
},
//  39 'quotesingle'---
{
	0b01000000,
	0b01000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000
},
//  40 'parenleft'---
{
	0b00100000,
	0b01000000,
	0b01000000,
	0b01000000,
	0b00100000,
	0b00000000
},
//  41 'parenright'---
{
	0b10000000,
	0b01000000,
	0b01000000,
	0b01000000,
	0b10000000,
	0b00000000
},
//  42 'asterisk'---
{
	0b10100000,
	0b01000000,
	0b10100000,
	0b00000000,
	0b00000000,
	0b00000000
},
//  43 'plus'---
{
	0b00000000,
	0b01000000,
	0b11100000,
	0b01000000,
	0b00000000,
	0b00000000
},
//  44 'comma'---
{
	0b00000000,
	0b00000000,
	0b00000000,
	0b01000000,
	0b10000000,
	0b00000000
},
//  45 'hyphen'---
{
	
	0b00000000,
	0b00000000,
	0b11100000,
	0b00000000,
	0b00000000,
	0b00000000
},
//  46 'period'---
{
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b01000000,
	0b00000000
},
//  47 'slash'---
{
	0b00100000,
	0b00100000,
	0b01000000,
	0b10000000,
	0b10000000,
	0b00000000
},
//  48 'zero'---
{
	0b01100000,
	0b10100000,
	0b10100000,
	0b10100000,
	0b11000000,
	0b00000000
},
//  49 'one'---
{
	0b01000000,
	0b11000000,
	0b01000000,
	0b01000000,
	0b01000000,
	0b00000000
},
//  50 'two'---
{
	0b11000000,
	0b00100000,
	0b01000000,
	0b10000000,
	0b11100000,
	0b00000000
},
//  51 'three'---
{
	0b11000000,
	0b00100000,
	0b01000000,
	0b00100000,
	0b11000000,
	0b00000000
},
//  52 'four'---
{
	0b10100000,
	0b10100000,
	0b11100000,
	0b00100000,
	0b00100000,
	0b00000000
},
//  53 'five'---
{
	0b11100000,
	0b10000000,
	0b11000000,
	0b00100000,
	0b11000000,
	0b00000000
},
//  54 'si1'---
{
	0b01100000,
	0b10000000,
	0b11100000,
	0b10100000,
	0b11100000,
	0b00000000
},
//  55 'seven'---
{
	0b11100000,
	0b00100000,
	0b01000000,
	0b10000000,
	0b10000000,
	0b00000000
},
//  56 'eight'---
{
	0b11100000,
	0b10100000,
	0b11100000,
	0b10100000,
	0b11100000,
	0b00000000
},
//  57 'nine'---
{
	0b11100000,
	0b10100000,
	0b11100000,
	0b00100000,
	0b11000000,
	0b00000000
},
//  58 'colon'---
{
	0b01000000,
	0b00000000,
	0b01000000,
	0b00000000,
	0b00000000,
	0b00000000
},
//  59 'semicolon'---
{
	0b01000000,
	0b00000000,
	0b01000000,
	0b10000000,
	0b00000000,
	0b00000000
},
//  60 'less'---
{
	0b00100000,
	0b01000000,
	0b10000000,
	0b01000000,
	0b00100000,
	0b00000000
},
//  61 'equal'---
{
	0b11100000,
	0b00000000,
	0b11100000,
	0b00000000,
	0b00000000,
	0b00000000
},
//  62 'greater'---
{
	0b10000000,
	0b01000000,
	0b00100000,
	0b01000000,
	0b10000000,
	0b00000000
},
//  63 'question'---
{
	0b11100000,
	0b00100000,
	0b01000000,
	0b00000000,
	0b01000000,
	0b00000000
},
//  64 'at'---
{
	0b01000000,
	0b10100000,
	0b11100000,
	0b10000000,
	0b01100000,
	0b00000000
},
//  65 'A'---
{
	0b01000000,
	0b10100000,
	0b11100000,
	0b10100000,
	0b10100000,
	0b00000000
},
//  66 'B'---
{
	0b11000000,
	0b10100000,
	0b11000000,
	0b10100000,
	0b11000000,
	0b00000000
},
//  67 'C'---
{
	0b01100000,
	0b10000000,
	0b10000000,
	0b10000000,
	0b01100000,
	0b00000000
},
//  68 'D'---
{
	0b11000000,
	0b10100000,
	0b10100000,
	0b10100000,
	0b11000000,
	0b00000000
},
//  69 'E'---
{
	0b11100000,
	0b10000000,
	0b11100000,
	0b10000000,
	0b11100000,
	0b00000000
},
//  70 'F'---
{
	0b11100000,
	0b10000000,
	0b11100000,
	0b10000000,
	0b10000000,
	0b00000000
},
//  71 'G'---
{
	0b01100000,
	0b10000000,
	0b11100000,
	0b10100000,
	0b01100000,
	0b00000000
},
//  72 'H'---
{
	0b10100000,
	0b10100000,
	0b11100000,
	0b10100000,
	0b10100000,
	0b00000000
},
//  73 'I'---
{
	0b11100000,
	0b01000000,
	0b01000000,
	0b01000000,
	0b11100000,
	0b00000000
},
//  74 'J'---
{
	0b00100000,
	0b00100000,
	0b00100000,
	0b10100000,
	0b01000000,
	0b00000000
},
//  75 'K'---
{
	0b10100000,
	0b10100000,
	0b11000000,
	0b10100000,
	0b10100000,
	0b00000000
},
//  76 'L'---
{
	0b10000000,
	0b10000000,
	0b10000000,
	0b10000000,
	0b11100000,
	0b00000000
},
//  77 'M'---
{
	0b10100000,
	0b11100000,
	0b11100000,
	0b10100000,
	0b10100000,
	0b00000000
},
//  78 'N'---
{
	0b10100000,
	0b11100000,
	0b11100000,
	0b11100000,
	0b10100000,
	0b00000000
},
//  79 'O'---
{
	0b01000000,
	0b10100000,
	0b10100000,
	0b10100000,
	0b01000000,
	0b00000000
},
//  80 'P'---
{
	0b11000000,
	0b10100000,
	0b11000000,
	0b10000000,
	0b10000000,
	0b00000000
},
//  81 'Q'---
{
	0b01000000,
	0b10100000,
	0b10100000,
	0b11100000,
	0b01100000,
	0b00000000
},
//  82 'R'---
{
	0b11000000,
	0b10100000,
	0b11100000,
	0b11000000,
	0b10100000,
	0b00000000
},
//  83 'S'---
{
	0b01100000,
	0b10000000,
	0b01000000,
	0b00100000,
	0b11000000,
	0b00000000
},
//  84 'T'---
{
	0b11100000,
	0b01000000,
	0b01000000,
	0b01000000,
	0b01000000,
	0b00000000
},
//  85 'U'---
{
	0b10100000,
	0b10100000,
	0b10100000,
	0b10100000,
	0b01100000,
	0b00000000
},
//  86 'V'---
{
	0b10100000,
	0b10100000,
	0b10100000,
	0b01000000,
	0b01000000,
	0b00000000
},
//  87 'W'---
{
	0b10100000,
	0b10100000,
	0b11100000,
	0b11100000,
	0b10100000,
	0b00000000
},
//  88 '1'---
{
	0b10100000,
	0b10100000,
	0b01000000,
	0b10100000,
	0b10100000,
	0b00000000
},
//  89 'Y'---
{
	0b10100000,
	0b10100000,
	0b01000000,
	0b01000000,
	0b01000000,
	0b00000000
},
//  90 'Z'---
{
	0b11100000,
	0b00100000,
	0b01000000,
	0b10000000,
	0b11100000,
	0b00000000
},
//  91 'bracketleft'---
{
	0b11100000,
	0b10000000,
	0b10000000,
	0b10000000,
	0b11100000,
	0b00000000
},
//  92 'backslash'---
{
	0b10000000,
	0b01000000,
	0b00100000,
	0b00000000,
	0b00000000,
	0b00000000
},
//  93 'bracketright'---
{
	0b11100000,
	0b00100000,
	0b00100000,
	0b00100000,
	0b11100000,
	0b00000000
},
//  94 'asciicircum'---
{
	0b01000000,
	0b10100000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000
},
//  95 'underscore'---
{
	0b11100000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000
},
//  96 'grave'---
{
	0b10000000,
	0b01000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000
},
//  97 'a'---
{
	0b00000000,
	0b11000000,
	0b01100000,
	0b10100000,
	0b11100000,
	0b00000000
},
//  98 'b'---
{
	0b10000000,
	0b11000000,
	0b10100000,
	0b10100000,
	0b11000000,
	0b00000000
},
//  99 'c'---
{
	0b00000000,
	0b01100000,
	0b10000000,
	0b10000000,
	0b01100000,
	0b00000000
},
// 100 'd'---
{
	0b00100000,
	0b01100000,
	0b10100000,
	0b10100000,
	0b01100000,
	0b00000000
},
// 101 'e'---
{
	0b00000000,
	0b01100000,
	0b10100000,
	0b11000000,
	0b01100000,
	0b00000000
},
// 102 'f'---
{
	0b00100000,
	0b01000000,
	0b11100000,
	0b01000000,
	0b01000000,
	0b00000000
},
// 103 'g'---
{
	0b00000000,
	0b01100000,
	0b10100000,
	0b11100000,
	0b00100000,
	0b01000000
},
// 104 'h'---
{
	0b10000000,
	0b11000000,
	0b10100000,
	0b10100000,
	0b10100000,
	0b00000000
},
// 105 'i'---
{
	0b01000000,
	0b00000000,
	0b01000000,
	0b01000000,
	0b01000000,
	0b00000000
},
// 106 'j'---
{
	0b00100000,
	0b00000000,
	0b00100000,
	0b00100000,
	0b10100000,
	0b01000000
},
// 107 'k'---
{
	0b10000000,
	0b10100000,
	0b11000000,
	0b11000000,
	0b10100000,
	0b00000000
},
// 108 'l'---
{
	0b11000000,
	0b01000000,
	0b01000000,
	0b01000000,
	0b11100000,
	0b00000000
},
// 109 'm'---
{
	0b00000000,
	0b11100000,
	0b11100000,
	0b11100000,
	0b10100000,
	0b00000000
},
// 110 'n'---
{
	0b00000000,
	0b11000000,
	0b10100000,
	0b10100000,
	0b10100000,
	0b00000000
},
// 111 'o'---
{
	0b00000000,
	0b01000000,
	0b10100000,
	0b10100000,
	0b01000000,
	0b00000000
},
// 112 'p'---
{
	0b00000000,
	0b11000000,
	0b10100000,
	0b10100000,
	0b11000000,
	0b10000000
},
// 113 'q'---
{
	0b00000000,
	0b01100000,
	0b10100000,
	0b10100000,
	0b01100000,
	0b00100000
},
// 114 'r'---
{
	0b00000000,
	0b01100000,
	0b10000000,
	0b10000000,
	0b10000000,
	0b00000000
},
// 115 's'---
{
	0b00000000,
	0b01100000,
	0b11000000,
	0b01100000,
	0b11000000,
	0b00000000
},
// 116 't'---
{
	0b01000000,
	0b11100000,
	0b01000000,
	0b01000000,
	0b01100000,
	0b00000000
},
// 117 'u'---
{
	0b00000000,
	0b10100000,
	0b10100000,
	0b10100000,
	0b01100000,
	0b00000000
},
// 118 'v'---
{
	0b00000000,
	0b10100000,
	0b10100000,
	0b11100000,
	0b01000000,
	0b00000000
},
// 119 'w'---
{
	0b00000000,
	0b10100000,
	0b11100000,
	0b11100000,
	0b11100000,
	0b00000000
},
// 120 'x'---
{
	0b00000000,
	0b10100000,
	0b01000000,
	0b01000000,
	0b10100000,
	0b00000000
},
// 121 'y'---
{
	0b00000000,
	0b10100000,
	0b10100000,
	0b01100000,
	0b00100000,
	0b01000000
},
// 122 'z'---
{
	0b00000000,
	0b11100000,
	0b01100000,
	0b11000000,
	0b11100000,
	0b00000000
},
// 123 'braceleft'---
{
	0b01100000,
	0b01000000,
	0b10000000,
	0b01000000,
	0b01100000,
	0b00000000
},
// 124 'bar'---
{
	0b01000000,
	0b01000000,
	0b00000000,
	0b01000000,
	0b01000000,
	0b00000000
},
// 125 'braceright'---
{
	0b11000000,
	0b01000000,
	0b00100000,
	0b01000000,
	0b11000000,
	0b00000000
},
// 126 'asciitilde'---
{
	0b01100000,
	0b11000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000
},
// 161 'e1clamdown'---
{
	0b01000000,
	0b00000000,
	0b01000000,
	0b01000000,
	0b01000000,
	0b00000000
},
// 162 'cent'---
{
	0b01000000,
	0b11100000,
	0b10000000,
	0b11100000,
	0b01000000,
	0b00000000
},
// 163 'sterling'---
{
	0b01100000,
	0b01000000,
	0b11100000,
	0b01000000,
	0b11100000,
	0b00000000
},
// 164 'currency'---
{
	0b10100000,
	0b01000000,
	0b11100000,
	0b01000000,
	0b10100000,
	0b00000000
},
// 165 'yen'---
{
	0b10100000,
	0b10100000,
	0b01000000,
	0b11100000,
	0b01000000,
	0b00000000
},
// 166 'brokenbar'---
{
	0b01000000,
	0b01000000,
	0b00000000,
	0b01000000,
	0b01000000,
	0b00000000
},
// 167 'section'---
{
	0b01100000,
	0b01000000,
	0b10100000,
	0b01000000,
	0b11000000,
	0b00000000
},
// 168 'dieresis'---
{
	0b10100000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000
},
// 169 'copyright'---
{
	0b01100000,
	0b10000000,
	0b01100000,
	0b00000000,
	0b00000000,
	0b00000000
},
// 170 'ordfeminine'---
{
	0b01100000,
	0b10100000,
	0b11100000,
	0b00000000,
	0b11100000,
	0b00000000
},
// 171 'guillemotleft'---
{
	0b01000000,
	0b10000000,
	0b01000000,
	0b00000000,
	0b00000000,
	0b00000000
},
// 172 'logicalnot'---
{
	0b11100000,
	0b00100000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000
},
// 173 'softhyphen'---
{
	0b11000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000
},
// 174 'registered'---
{
	0b11000000,
	0b11000000,
	0b10100000,
	0b00000000,
	0b00000000,
	0b00000000
},
// 175 'macron'---
{
	0b11100000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000
},
// 176 'degree'---
{
	0b01000000,
	0b10100000,
	0b01000000,
	0b00000000,
	0b00000000,
	0b00000000
},
// 177 'plusminus'---
{
	0b01000000,
	0b11100000,
	0b01000000,
	0b00000000,
	0b11100000,
	0b00000000
},
// 178 'twosuperior'---
{
	0b11000000,
	0b01000000,
	0b01100000,
	0b00000000,
	0b00000000,
	0b00000000
},
// 179 'threesuperior'---
{
	0b11100000,
	0b01100000,
	0b11100000,
	0b00000000,
	0b00000000,
	0b00000000
},
// 180 'acute'---
{
	0b00100000,
	0b01000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000
},
// 181 'mu'---
{
	0b10100000,
	0b10100000,
	0b10100000,
	0b11000000,
	0b10000000,
	0b00000000
},
// 182 'paragraph'---
{
	0b01100000,
	0b10100000,
	0b01100000,
	0b01100000,
	0b01100000,
	0b00000000
},
// 183 'periodcentered'---
{
	0b11100000,
	0b11100000,
	0b11100000,
	0b00000000,
	0b00000000,
	0b00000000
},
// 184 'cedilla'---
{
	0b01000000,
	0b00100000,
	0b11000000,
	0b00000000,
	0b00000000,
	0b00000000
},
// 185 'onesuperior'---
{
	0b01000000,
	0b01000000,
	0b01000000,
	0b00000000,
	0b00000000,
	0b00000000
},
// 186 'ordmasculine'---
{
	0b01000000,
	0b10100000,
	0b01000000,
	0b00000000,
	0b11100000,
	0b00000000
},
// 187 'guillemotright'---
{
	0b01000000,
	0b00100000,
	0b01000000,
	0b00000000,
	0b00000000,
	0b00000000
},
// 188 'onequarter'---
{
	0b10000000,
	0b10000000,
	0b00000000,
	0b01100000,
	0b00100000,
	0b00000000
},
// 189 'onehalf'---
{
	0b10000000,
	0b10000000,
	0b00000000,
	0b11000000,
	0b01100000,
	0b00000000
},
// 190 'threequarters'---
{
	0b11000000,
	0b11000000,
	0b00000000,
	0b01100000,
	0b00100000,
	0b00000000
},
// 191 'questiondown'---
{
	0b01000000,
	0b00000000,
	0b01000000,
	0b10000000,
	0b11100000,
	0b00000000
},
// 192 'Agrave'---
{
	0b01000000,
	0b00100000,
	0b01000000,
	0b11100000,
	0b10100000,
	0b00000000
},
// 193 'Aacute'---
{
	0b01000000,
	0b10000000,
	0b01000000,
	0b11100000,
	0b10100000,
	0b00000000
},
// 194 'Acircumfle1'---
{
	0b11100000,
	0b00000000,
	0b01000000,
	0b11100000,
	0b10100000,
	0b00000000
},
// 195 'Atilde'---
{
	0b01100000,
	0b11000000,
	0b01000000,
	0b11100000,
	0b10100000,
	0b00000000
},
// 196 'Adieresis'---
{
	0b10100000,
	0b01000000,
	0b10100000,
	0b11100000,
	0b10100000,
	0b00000000
},
// 197 'Aring'---
{
	0b11000000,
	0b11000000,
	0b10100000,
	0b11100000,
	0b10100000,
	0b00000000
},
// 198 'AE'---
{
	0b01100000,
	0b11000000,
	0b11100000,
	0b11000000,
	0b11100000,
	0b00000000
},
// 199 'Ccedilla'---
{
	0b01100000,
	0b10000000,
	0b10000000,
	0b01100000,
	0b00100000,
	0b01000000
},
// 200 'Egrave'---
{
	0b01000000,
	0b00100000,
	0b11100000,
	0b11000000,
	0b11100000,
	0b00000000
},
// 201 'Eacute'---
{
	0b01000000,
	0b10000000,
	0b11100000,
	0b11000000,
	0b11100000,
	0b00000000
},
// 202 'Ecircumfle1'---
{
	0b11100000,
	0b00000000,
	0b11100000,
	0b11000000,
	0b11100000,
	0b00000000
},
// 203 'Edieresis'---
{
	0b10100000,
	0b00000000,
	0b11100000,
	0b11000000,
	0b11100000,
	0b00000000
},
// 204 'Igrave'---
{
	0b01000000,
	0b00100000,
	0b11100000,
	0b01000000,
	0b11100000,
	0b00000000
},
// 205 'Iacute'---
{
	0b01000000,
	0b10000000,
	0b11100000,
	0b01000000,
	0b11100000,
	0b00000000
},
// 206 'Icircumfle1'---
{
	0b11100000,
	0b00000000,
	0b11100000,
	0b01000000,
	0b11100000,
	0b00000000
},
// 207 'Idieresis'---
{
	0b10100000,
	0b00000000,
	0b11100000,
	0b01000000,
	0b11100000,
	0b00000000
},
// 208 'Eth'---
{
	0b11000000,
	0b10100000,
	0b11100000,
	0b10100000,
	0b11000000,
	0b00000000
},
// 209 'Ntilde'---
{
	0b11000000,
	0b01100000,
	0b10100000,
	0b11100000,
	0b10100000,
	0b00000000
},
// 210 'Ograve'---
{
	0b01000000,
	0b00100000,
	0b11100000,
	0b10100000,
	0b11100000,
	0b00000000
},
// 211 'Oacute'---
{
	0b01000000,
	0b10000000,
	0b11100000,
	0b10100000,
	0b11100000,
	0b00000000
},
// 212 'Ocircumfle1'---
{
	0b11100000,
	0b00000000,
	0b11100000,
	0b10100000,
	0b11100000,
	0b00000000
},
// 213 'Otilde'---
{
	0b11000000,
	0b01100000,
	0b11100000,
	0b10100000,
	0b11100000,
	0b00000000
},
// 214 'Odieresis'---
{
	0b10100000,
	0b00000000,
	0b11100000,
	0b10100000,
	0b11100000,
	0b00000000
},
// 215 'multiply'---
{
	0b10100000,
	0b01000000,
	0b10100000,
	0b00000000,
	0b00000000,
	0b00000000
},
// 216 'Oslash'---
{
	0b01100000,
	0b10100000,
	0b11100000,
	0b10100000,
	0b11000000,
	0b00000000
},
// 217 'Ugrave'---
{
	0b10000000,
	0b01000000,
	0b10100000,
	0b10100000,
	0b11100000,
	0b00000000
},
// 218 'Uacute'---
{
	0b00100000,
	0b01000000,
	0b10100000,
	0b10100000,
	0b11100000,
	0b00000000
},
// 219 'Ucircumfle1'---
{
	0b11100000,
	0b00000000,
	0b10100000,
	0b10100000,
	0b11100000,
	0b00000000
},
// 220 'Udieresis'---
{
	0b10100000,
	0b00000000,
	0b10100000,
	0b10100000,
	0b11100000,
	0b00000000
},
// 221 'Yacute'---
{
	0b00100000,
	0b01000000,
	0b10100000,
	0b11100000,
	0b01000000,
	0b00000000
},
// 222 'Thorn'---
{
	0b10000000,
	0b11100000,
	0b10100000,
	0b11100000,
	0b10000000,
	0b00000000
},
// 223 'germandbls'---
{
	0b01100000,
	0b10100000,
	0b11000000,
	0b10100000,
	0b11000000,
	0b10000000
},
// 224 'agrave'---
{
	0b01000000,
	0b00100000,
	0b01100000,
	0b10100000,
	0b11100000,
	0b00000000
},
// 225 'aacute'---
{
	0b01000000,
	0b10000000,
	0b01100000,
	0b10100000,
	0b11100000,
	0b00000000
},
// 226 'acircumfle1'---
{
	0b11100000,
	0b00000000,
	0b01100000,
	0b10100000,
	0b11100000,
	0b00000000
},
// 227 'atilde'---
{
	0b01100000,
	0b11000000,
	0b01100000,
	0b10100000,
	0b11100000,
	0b00000000
},
// 228 'adieresis'---
{
	0b10100000,
	0b00000000,
	0b01100000,
	0b10100000,
	0b11100000,
	0b00000000
},
// 229 'aring'---
{
	0b01100000,
	0b01100000,
	0b01100000,
	0b10100000,
	0b11100000,
	0b00000000
},
// 230 'ae'---
{
	0b01100000,
	0b11100000,
	0b11100000,
	0b11000000,
	0b00000000,
	0b00000000
},
// 231 'ccedilla'---
{
	0b01100000,
	0b10000000,
	0b01100000,
	0b00100000,
	0b01000000,
	0b00000000
},
// 232 'egrave'---
{
	0b01000000,
	0b00100000,
	0b01100000,
	0b11100000,
	0b01100000,
	0b00000000
},
// 233 'eacute'---
{
	0b01000000,
	0b10000000,
	0b01100000,
	0b11100000,
	0b01100000,
	0b00000000
},
// 234 'ecircumfle1'---
{
	0b11100000,
	0b00000000,
	0b01100000,
	0b11100000,
	0b01100000,
	0b00000000
},
// 235 'edieresis'---
{
	0b10100000,
	0b00000000,
	0b01100000,
	0b11100000,
	0b01100000,
	0b00000000
},
// 236 'igrave'---
{
	0b01000000,
	0b00100000,
	0b01000000,
	0b01000000,
	0b01000000,
	0b00000000
},
// 237 'iacute'---
{
	0b01000000,
	0b10000000,
	0b01000000,
	0b01000000,
	0b01000000,
	0b00000000
},
// 238 'icircumfle1'---
{
	0b11100000,
	0b00000000,
	0b01000000,
	0b01000000,
	0b01000000,
	0b00000000
},
// 239 'idieresis'---
{
	0b10100000,
	0b00000000,
	0b01000000,
	0b01000000,
	0b01000000,
	0b00000000
},
// 240 'eth'---
{
	0b01100000,
	0b11000000,
	0b01100000,
	0b10100000,
	0b01100000,
	0b00000000
},
// 241 'ntilde'---
{
	0b11000000,
	0b01100000,
	0b11000000,
	0b10100000,
	0b10100000,
	0b00000000
},
// 242 'ograve'---
{
	0b01000000,
	0b00100000,
	0b01000000,
	0b10100000,
	0b01000000,
	0b00000000
},
// 243 'oacute'---
{
	0b01000000,
	0b10000000,
	0b01000000,
	0b10100000,
	0b01000000,
	0b00000000
},
// 244 'ocircumfle1'---
{
	0b11100000,
	0b00000000,
	0b01000000,
	0b10100000,
	0b01000000,
	0b00000000
},
// 245 'otilde'---
{
	0b11000000,
	0b01100000,
	0b01000000,
	0b10100000,
	0b01000000,
	0b00000000
},
// 246 'odieresis'---
{
	0b10100000,
	0b00000000,
	0b01000000,
	0b10100000,
	0b01000000,
	0b00000000
},
// 247 'divide'---
{
	0b01000000,
	0b00000000,
	0b11100000,
	0b00000000,
	0b01000000,
	0b00000000
},
// 248 'oslash'---
{
	0b01100000,
	0b11100000,
	0b10100000,
	0b11000000,
	0b00000000,
	0b00000000
},
// 249 'ugrave'---
{
	0b10000000,
	0b01000000,
	0b10100000,
	0b10100000,
	0b01100000,
	0b00000000
},
// 250 'uacute'---
{
	0b00100000,
	0b01000000,
	0b10100000,
	0b10100000,
	0b01100000,
	0b00000000
},
// 251 'ucircumfle1'---
{
	0b11100000,
	0b00000000,
	0b10100000,
	0b10100000,
	0b01100000,
	0b00000000
},
// 252 'udieresis'---
{
	0b10100000,
	0b00000000,
	0b10100000,
	0b10100000,
	0b01100000,
	0b00000000
},
// 253 'yacute'---
{
	0b00100000,
	0b01000000,
	0b10100000,
	0b01100000,
	0b00100000,
	0b01000000
},
// 254 'thorn'---
{
	0b10000000,
	0b11000000,
	0b10100000,
	0b11000000,
	0b10000000,
	0b00000000
},
// 255 'ydieresis'---
{
	0b10100000,
	0b00000000,
	0b10100000,
	0b01100000,
	0b00100000,
	0b01000000
},
// 285 'gcircumfle1'---
{
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000
},
// 338 'OE'---
{
	0b01100000,
	0b11000000,
	0b11100000,
	0b11000000,
	0b01100000,
	0b00000000
},
// 339 'oe'---
{
	0b01100000,
	0b11100000,
	0b11000000,
	0b11100000,
	0b00000000,
	0b00000000
},
// 352 'Scaron'---
{
	0b10100000,
	0b01100000,
	0b11000000,
	0b01100000,
	0b11000000,
	0b00000000
},
// 353 'scaron'---
{
	0b10100000,
	0b01100000,
	0b11000000,
	0b01100000,
	0b11000000,
	0b00000000
},
// 376 'Ydieresis'---
{
	0b10100000,
	0b00000000,
	0b10100000,
	0b01000000,
	0b01000000,
	0b00000000
},
// 381 'Zcaron'---
{
	0b10100000,
	0b11100000,
	0b01100000,
	0b11000000,
	0b11100000,
	0b00000000
},
// 382 'zcaron'---
{
	0b10100000,
	0b11100000,
	0b01100000,
	0b11000000,
	0b11100000,
	0b00000000
},
// 3748 'uni0EA4'---
{
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000
},
// 5024 'uni13A0'---
{
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000
},
// 8226 'bullet'---
{
	0b01000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000
},
// 8230 'ellipsis'---
{
	0b10100000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000
},
// 8364 'Euro'---
{
	0b01100000,
	0b11100000,
	0b11100000,
	0b11000000,
	0b01100000,
	0b00000000,
}
};

int font_index(char a) {
int ret = a - 32;
return ret;
}

#endif