#ifndef DEFINE_H
#define DEFINE_H

#define ARRAY_SIZE(_x) (sizeof(_x)/sizeof(_x[0]))

#include <string.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

/******************************************************************************/
/*** For electronical value                                                 ***/
/******************************************************************************/
#define PIN_HIGH   ((uint8)1)
#define PIN_LOW    ((uint8)0)

/******************************************************************************/
/*** To turn ON or OFF an output                                            ***/
/******************************************************************************/
#if !defined(ON)
#define ON		   ((uint8)0x01)
#endif /* #if !defined(ON) */
#if !defined(OFF)
#define OFF		   ((uint8)0x00)
#endif /* #if !defined(OFF) */

/* Min/Max macro definition *************************************************/
#define uMax(a, b)  (((a) > (b)) ? (a) : (b))
#define uMin(a, b)  (((a) > (b)) ? (b) : (a))

#define _BIT0   0x01        /* .... ...X */
#define _BIT1   0x02        /* .... ..X. */
#define _BIT2   0x04        /* .... .X.. */
#define _BIT3   0x08        /* .... X... */
#define _BIT4   0x10        /* ...X .... */
#define _BIT5   0x20        /* ..X. .... */
#define _BIT6   0x40        /* .X.. .... */
#define _BIT7   0x80        /* X... .... */

#define _BIT8   0x0100
#define _BIT9   0x0200
#define _BIT10  0x0400
#define _BIT11  0x0800
#define _BIT12  0x1000
#define _BIT13  0x2000
#define _BIT14  0x4000
#define _BIT15  0x8000
#define _BIT16  0x00010000
#define _BIT17  0x00020000
#define _BIT18  0x00040000
#define _BIT19  0x00080000
#define _BIT20  0x00100000
#define _BIT21  0x00200000
#define _BIT22  0x00400000
#define _BIT23  0x00800000
#define _BIT24  0x01000000
#define _BIT25  0x02000000
#define _BIT26  0x04000000
#define _BIT27  0x08000000
#define _BIT28  0x10000000
#define _BIT29  0x20000000
#define _BIT30  0x40000000
#define _BIT31  0x80000000


/******************************************************************************/
/*** Binaries defs   * HEX *  *   DEC *                                     ***/
/******************************************************************************/
#define _0000_0000b   (0x00)   /*    0  */
#define _0000_0001b   (0x01)   /*    1  */
#define _0000_0010b   (0x02)   /*    2  */
#define _0000_0011b   (0x03)   /*    3  */
#define _0000_0100b   (0x04)   /*    4  */
#define _0000_0101b   (0x05)   /*    5  */
#define _0000_0110b   (0x06)   /*    6  */
#define _0000_0111b   (0x07)   /*    7  */
#define _0000_1000b   (0x08)   /*    8  */
#define _0000_1001b   (0x09)   /*    9  */
#define _0000_1010b   (0x0a)   /*   10  */
#define _0000_1011b   (0x0b)   /*   11  */
#define _0000_1100b   (0x0c)   /*   12  */
#define _0000_1101b   (0x0d)   /*   13  */
#define _0000_1110b   (0x0e)   /*   14  */
#define _0000_1111b   (0x0f)   /*   15  */

#define _0001_0000b   (0x10)   /*   16  */
#define _0001_0001b   (0x11)   /*   17  */
#define _0001_0010b   (0x12)   /*   18  */
#define _0001_0011b   (0x13)   /*   19  */
#define _0001_0100b   (0x14)   /*   20  */
#define _0001_0101b   (0x15)   /*   21  */
#define _0001_0110b   (0x16)   /*   22  */
#define _0001_0111b   (0x17)   /*   23  */
#define _0001_1000b   (0x18)   /*   24  */
#define _0001_1001b   (0x19)   /*   25  */
#define _0001_1010b   (0x1a)   /*   26  */
#define _0001_1011b   (0x1b)   /*   27  */
#define _0001_1100b   (0x1c)   /*   28  */
#define _0001_1101b   (0x1d)   /*   29  */
#define _0001_1110b   (0x1e)   /*   30  */
#define _0001_1111b   (0x1f)   /*   31  */

#define _0010_0000b   (0x20)   /*   32  */
#define _0010_0001b   (0x21)   /*   33  */
#define _0010_0010b   (0x22)   /*   34  */
#define _0010_0011b   (0x23)   /*   35  */
#define _0010_0100b   (0x24)   /*   36  */
#define _0010_0101b   (0x25)   /*   37  */
#define _0010_0110b   (0x26)   /*   38  */
#define _0010_0111b   (0x27)   /*   39  */
#define _0010_1000b   (0x28)   /*   40  */
#define _0010_1001b   (0x29)   /*   41  */
#define _0010_1010b   (0x2a)   /*   42  */
#define _0010_1011b   (0x2b)   /*   43  */
#define _0010_1100b   (0x2c)   /*   44  */
#define _0010_1101b   (0x2d)   /*   45  */
#define _0010_1110b   (0x2e)   /*   46  */
#define _0010_1111b   (0x2f)   /*   47  */

#define _0011_0000b   (0x30)   /*   48  */
#define _0011_0001b   (0x31)   /*   49  */
#define _0011_0010b   (0x32)   /*   50  */
#define _0011_0011b   (0x33)   /*   51  */
#define _0011_0100b   (0x34)   /*   52  */
#define _0011_0101b   (0x35)   /*   53  */
#define _0011_0110b   (0x36)   /*   54  */
#define _0011_0111b   (0x37)   /*   55  */
#define _0011_1000b   (0x38)   /*   56  */
#define _0011_1001b   (0x39)   /*   57  */
#define _0011_1010b   (0x3a)   /*   58  */
#define _0011_1011b   (0x3b)   /*   59  */
#define _0011_1100b   (0x3c)   /*   60  */
#define _0011_1101b   (0x3d)   /*   61  */
#define _0011_1110b   (0x3e)   /*   62  */
#define _0011_1111b   (0x3f)   /*   63  */

#define _0100_0000b   (0x40)   /*   64  */
#define _0100_0001b   (0x41)   /*   65  */
#define _0100_0010b   (0x42)   /*   66  */
#define _0100_0011b   (0x43)   /*   67  */
#define _0100_0100b   (0x44)   /*   68  */
#define _0100_0101b   (0x45)   /*   69  */
#define _0100_0110b   (0x46)   /*   70  */
#define _0100_0111b   (0x47)   /*   71  */
#define _0100_1000b   (0x48)   /*   72  */
#define _0100_1001b   (0x49)   /*   73  */
#define _0100_1010b   (0x4a)   /*   74  */
#define _0100_1011b   (0x4b)   /*   75  */
#define _0100_1100b   (0x4c)   /*   76  */
#define _0100_1101b   (0x4d)   /*   77  */
#define _0100_1110b   (0x4e)   /*   78  */
#define _0100_1111b   (0x4f)   /*   79  */

#define _0101_0000b   (0x50)   /*   80  */
#define _0101_0001b   (0x51)   /*   81  */
#define _0101_0010b   (0x52)   /*   82  */
#define _0101_0011b   (0x53)   /*   83  */
#define _0101_0100b   (0x54)   /*   84  */
#define _0101_0101b   (0x55)   /*   85  */
#define _0101_0110b   (0x56)   /*   86  */
#define _0101_0111b   (0x57)   /*   87  */
#define _0101_1000b   (0x58)   /*   88  */
#define _0101_1001b   (0x59)   /*   89  */
#define _0101_1010b   (0x5a)   /*   90  */
#define _0101_1011b   (0x5b)   /*   91  */
#define _0101_1100b   (0x5c)   /*   92  */
#define _0101_1101b   (0x5d)   /*   93  */
#define _0101_1110b   (0x5e)   /*   94 */
#define _0101_1111b   (0x5f)   /*   95 */

#define _0110_0000b   (0x60)   /*   96  */
#define _0110_0001b   (0x61)   /*   97  */
#define _0110_0010b   (0x62)   /*   98  */
#define _0110_0011b   (0x63)   /*   99  */
#define _0110_0100b   (0x64)   /*  100  */
#define _0110_0101b   (0x65)   /*  101  */
#define _0110_0110b   (0x66)   /*  102  */
#define _0110_0111b   (0x67)   /*  103  */
#define _0110_1000b   (0x68)   /*  104  */
#define _0110_1001b   (0x69)   /*  105  */
#define _0110_1010b   (0x6a)   /*  106  */
#define _0110_1011b   (0x6b)   /*  107  */
#define _0110_1100b   (0x6c)   /*  108  */
#define _0110_1101b   (0x6d)   /*  109  */
#define _0110_1110b   (0x6e)   /*  110  */
#define _0110_1111b   (0x6f)   /*  111  */

#define _0111_0000b   (0x70)   /*  112  */
#define _0111_0001b   (0x71)   /*  113  */
#define _0111_0010b   (0x72)   /*  114  */
#define _0111_0011b   (0x73)   /*  115  */
#define _0111_0100b   (0x74)   /*  116  */
#define _0111_0101b   (0x75)   /*  117  */
#define _0111_0110b   (0x76)   /*  118  */
#define _0111_0111b   (0x77)   /*  119  */
#define _0111_1000b   (0x78)   /*  120  */
#define _0111_1001b   (0x79)   /*  121  */
#define _0111_1010b   (0x7a)   /*  122  */
#define _0111_1011b   (0x7b)   /*  123  */
#define _0111_1100b   (0x7c)   /*  124  */
#define _0111_1101b   (0x7d)   /*  125  */
#define _0111_1110b   (0x7e)   /*  126  */
#define _0111_1111b   (0x7f)   /*  127  */

#define _1000_0000b   (0x80)   /*  128  */
#define _1000_0001b   (0x81)   /*  129  */
#define _1000_0010b   (0x82)   /*  130  */
#define _1000_0011b   (0x83)   /*  131  */
#define _1000_0100b   (0x84)   /*  132  */
#define _1000_0101b   (0x85)   /*  133  */
#define _1000_0110b   (0x86)   /*  134  */
#define _1000_0111b   (0x87)   /*  135  */
#define _1000_1000b   (0x88)   /*  136  */
#define _1000_1001b   (0x89)   /*  137  */
#define _1000_1010b   (0x8a)   /*  138  */
#define _1000_1011b   (0x8b)   /*  139  */
#define _1000_1100b   (0x8c)   /*  140  */
#define _1000_1101b   (0x8d)   /*  141  */
#define _1000_1110b   (0x8e)   /*  142  */
#define _1000_1111b   (0x8f)   /*  143  */

#define _1001_0000b   (0x90)   /*  144  */
#define _1001_0001b   (0x91)   /*  145  */
#define _1001_0010b   (0x92)   /*  146  */
#define _1001_0011b   (0x93)   /*  147  */
#define _1001_0100b   (0x94)   /*  148  */
#define _1001_0101b   (0x95)   /*  149  */
#define _1001_0110b   (0x96)   /*  150  */
#define _1001_0111b   (0x97)   /*  151  */
#define _1001_1000b   (0x98)   /*  152  */
#define _1001_1001b   (0x99)   /*  153  */
#define _1001_1010b   (0x9a)   /*  154  */
#define _1001_1011b   (0x9b)   /*  155  */
#define _1001_1100b   (0x9c)   /*  156  */
#define _1001_1101b   (0x9d)   /*  157  */
#define _1001_1110b   (0x9e)   /*  158  */
#define _1001_1111b   (0x9f)   /*  159  */

#define _1010_0000b   (0xa0)   /*  160  */
#define _1010_0001b   (0xa1)   /*  161  */
#define _1010_0010b   (0xa2)   /*  162  */
#define _1010_0011b   (0xa3)   /*  163  */
#define _1010_0100b   (0xa4)   /*  164  */
#define _1010_0101b   (0xa5)   /*  165  */
#define _1010_0110b   (0xa6)   /*  166  */
#define _1010_0111b   (0xa7)   /*  167  */
#define _1010_1000b   (0xa8)   /*  168  */
#define _1010_1001b   (0xa9)   /*  169  */
#define _1010_1010b   (0xaa)   /*  170  */
#define _1010_1011b   (0xab)   /*  171  */
#define _1010_1100b   (0xac)   /*  172  */
#define _1010_1101b   (0xad)   /*  173  */
#define _1010_1110b   (0xae)   /*  174  */
#define _1010_1111b   (0xaf)   /*  175  */

#define _1011_0000b   (0xb0)   /*  176  */
#define _1011_0001b   (0xb1)   /*  177  */
#define _1011_0010b   (0xb2)   /*  178  */
#define _1011_0011b   (0xb3)   /*  179  */
#define _1011_0100b   (0xb4)   /*  180  */
#define _1011_0101b   (0xb5)   /*  181  */
#define _1011_0110b   (0xb6)   /*  182  */
#define _1011_0111b   (0xb7)   /*  183  */
#define _1011_1000b   (0xb8)   /*  184  */
#define _1011_1001b   (0xb9)   /*  185  */
#define _1011_1010b   (0xba)   /*  186  */
#define _1011_1011b   (0xbb)   /*  187  */
#define _1011_1100b   (0xbc)   /*  188  */
#define _1011_1101b   (0xbd)   /*  189  */
#define _1011_1110b   (0xbe)   /*  190  */
#define _1011_1111b   (0xbf)   /*  191  */

#define _1100_0000b   (0xc0)   /*  192  */
#define _1100_0001b   (0xc1)   /*  193  */
#define _1100_0010b   (0xc2)   /*  194  */
#define _1100_0011b   (0xc3)   /*  195  */
#define _1100_0100b   (0xc4)   /*  196  */
#define _1100_0101b   (0xc5)   /*  197  */
#define _1100_0110b   (0xc6)   /*  198  */
#define _1100_0111b   (0xc7)   /*  199  */
#define _1100_1000b   (0xc8)   /*  200  */
#define _1100_1001b   (0xc9)   /*  201  */
#define _1100_1010b   (0xca)   /*  202  */
#define _1100_1011b   (0xcb)   /*  203  */
#define _1100_1100b   (0xcc)   /*  204  */
#define _1100_1101b   (0xcd)   /*  205  */
#define _1100_1110b   (0xce)   /*  206  */
#define _1100_1111b   (0xcf)   /*  207  */

#define _1101_0000b   (0xd0)   /*  208  */
#define _1101_0001b   (0xd1)   /*  209  */
#define _1101_0010b   (0xd2)   /*  210  */
#define _1101_0011b   (0xd3)   /*  211  */
#define _1101_0100b   (0xd4)   /*  212  */
#define _1101_0101b   (0xd5)   /*  213  */
#define _1101_0110b   (0xd6)   /*  214  */
#define _1101_0111b   (0xd7)   /*  215  */
#define _1101_1000b   (0xd8)   /*  216  */
#define _1101_1001b   (0xd9)   /*  217  */
#define _1101_1010b   (0xda)   /*  218  */
#define _1101_1011b   (0xdb)   /*  219  */
#define _1101_1100b   (0xdc)   /*  220  */
#define _1101_1101b   (0xdd)   /*  221  */
#define _1101_1110b   (0xde)   /*  222  */
#define _1101_1111b   (0xdf)   /*  223  */

#define _1110_0000b   (0xe0)   /*  224  */
#define _1110_0001b   (0xe1)   /*  225  */
#define _1110_0010b   (0xe2)   /*  226  */
#define _1110_0011b   (0xe3)   /*  227  */
#define _1110_0100b   (0xe4)   /*  228  */
#define _1110_0101b   (0xe5)   /*  229  */
#define _1110_0110b   (0xe6)   /*  230  */
#define _1110_0111b   (0xe7)   /*  231  */
#define _1110_1000b   (0xe8)   /*  232  */
#define _1110_1001b   (0xe9)   /*  233  */
#define _1110_1010b   (0xea)   /*  234  */
#define _1110_1011b   (0xeb)   /*  235  */
#define _1110_1100b   (0xec)   /*  236  */
#define _1110_1101b   (0xed)   /*  237  */
#define _1110_1110b   (0xee)   /*  238  */
#define _1110_1111b   (0xef)   /*  239  */

#define _1111_0000b   (0xf0)   /*  240  */
#define _1111_0001b   (0xf1)   /*  241  */
#define _1111_0010b   (0xf2)   /*  242  */
#define _1111_0011b   (0xf3)   /*  243  */
#define _1111_0100b   (0xf4)   /*  244  */
#define _1111_0101b   (0xf5)   /*  245  */
#define _1111_0110b   (0xf6)   /*  246  */
#define _1111_0111b   (0xf7)   /*  247  */
#define _1111_1000b   (0xf8)   /*  248  */
#define _1111_1001b   (0xf9)   /*  249  */
#define _1111_1010b   (0xfa)   /*  250  */
#define _1111_1011b   (0xfb)   /*  251  */
#define _1111_1100b   (0xfc)   /*  252  */
#define _1111_1101b   (0xfd)   /*  253  */
#define _1111_1110b   (0xfe)   /*  254  */
#define _1111_1111b   (0xff)   /*  255  */

#ifndef LOBYTE
#define LOBYTE(x)       ((uint8)((x) & 0xff))
#endif
#ifndef HIBYTE
#define HIBYTE(x)       ((uint8)(((x)>>8) & 0xff))
#endif
#ifndef LOWORD
#define LOWORD(x)       ((uint8)((x) & 0xffff))
#endif
#ifndef HIWORD
#define HIWORD(x)       ((uint8)(((x)>>16) & 0xffff))
#endif

#ifndef NULL
#define NULL ((void*)0)
#endif
/******************************************************************************
* TYPE DEFINITIONS
******************************************************************************/
typedef signed char         sint8;          /*        -128 .. +127           */
typedef unsigned char       uint8;          /*           0 .. 255            */
typedef signed short        sint16;         /*      -32768 .. +32767         */
typedef unsigned short      uint16;         /*           0 .. 65535          */
typedef signed long         sint32;         /* -2147483648 .. +2147483647    */
typedef unsigned long       uint32;         /*           0 .. 4294967295     */
typedef float               float32_t;
typedef double              float64_t;
typedef unsigned char 		boolean;

typedef	void	(* fn_void_t)( uint32 arg );
typedef	uint32	(* fn_int_t)( uint32 arg );
typedef	uint32	(* fn_pchar_t)( sint8* arg );

typedef void (* fn_interrupt_t)(void);
#endif