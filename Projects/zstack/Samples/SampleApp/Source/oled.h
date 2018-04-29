#ifndef __OLEDQRWWEWJGIJSJP_H_
#define __OLEDQRWWEWJGIJSJP_H_


void LCD_Init(void);
void LCD_Fill(unsigned char bmp_dat);
void LCD_CLS(void);
void LCD_P6x8Str(unsigned char x, unsigned char y,unsigned char ch[]);
void LCD_P8x16Str(unsigned char x, unsigned char y,unsigned char ch[]);
void LCD_P16x16Ch(unsigned char x, unsigned char y, unsigned char N);

#endif