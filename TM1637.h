/* License

Copyright (c) 2022 ElecompTech

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated 
documentation files (the "Software"), to deal in the Software without restriction, including without limitation 
the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, 
and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
*/
/*
 * TM1637_.c
 *
 *  Created and Modified on: 2022/4/2
 *  Author: Amin Hosseini
 */

#ifndef _TM1637_H_
#define _TM1637_H_

void TM1637_SetBrightness(char brightness);
void TM1637_DisplayDec(int v, int displaySeparator);

#endif /* _TM1637_H_ */
