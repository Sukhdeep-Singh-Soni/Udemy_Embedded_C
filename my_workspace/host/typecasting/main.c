/*
 * main.c
 *
 *  Created on: Oct 25, 2024
 *      Author: deep
 */

#include <stdio.h>

int main() {
	/*compiler takes 0x87 and 0xff00 as int which is 4 bytes, info loss*/
	unsigned char a = 0x87 + 0xff00; //0x00000087 | 0x0000ff00;
	float var = 100 / 8; //int / int = int (decimal truncated and info loss)
	printf("%d\n%f\n",a,var);

	unsigned char b = 0x01 + 0x0089; //0x00000001 | 0x00000089 = 0x0000008A; no info loss so no warning
	float var1 = 100 / 8; //int / int = int (decimal truncated and info loss)
	printf("%x\n%f\n",b,var1);

	unsigned char c = (unsigned char)(0x87 + 0xff00); //explicitly say to truncate so no warning
	float var2 = (float)100 / 8; //int / int = int (decimal truncated and info loss)
	printf("%d\n%f\n",c,var2);

	unsigned char d = 0x00ffffffff89 + 0xff00; //6 byte(compiler long long int) + 2 byte(int 4byte) implicit to long long int
	float var3 = 100 / (float)8; //int / int = int (decimal truncated and info loss)
	printf("%d\n%f\n",d,var3);


}


