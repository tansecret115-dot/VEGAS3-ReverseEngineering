/* Module: vegas30k.dll
   Function: cdr_ByteSwap32
   Address: 010998b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall cdr_ByteSwap32(unsigned char *,unsigned int) */

void cdr_ByteSwap32(uchar *param_1,uint param_2)

{
  uchar uVar1;
  uchar uVar2;
  uchar *puVar3;
  uchar *puVar4;
  
                    /* 0x998b0  590  ?cdr_ByteSwap32@@YGXPAEI@Z */
  if (param_2 != 0) {
    puVar3 = param_1;
    do {
      puVar4 = puVar3 + 4;
      uVar1 = *puVar3;
      *puVar3 = puVar3[3];
      uVar2 = puVar3[2];
      puVar3[3] = uVar1;
      puVar3[2] = puVar3[1];
      puVar3[1] = uVar2;
      puVar3 = puVar4;
    } while (puVar4 < param_1 + param_2 * 4);
  }
  return;
}


