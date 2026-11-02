/* Module: vegas30k.dll
   Function: cdr_ByteSwap16
   Address: 01099880
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall cdr_ByteSwap16(unsigned char *,unsigned int) */

void cdr_ByteSwap16(uchar *param_1,uint param_2)

{
  uchar uVar1;
  uchar *puVar2;
  uchar *puVar3;
  
                    /* 0x99880  589  ?cdr_ByteSwap16@@YGXPAEI@Z */
  if (param_2 != 0) {
    puVar2 = param_1;
    do {
      uVar1 = puVar2[1];
      puVar3 = puVar2 + 2;
      puVar2[1] = *puVar2;
      *puVar2 = uVar1;
      puVar2 = puVar3;
    } while (puVar3 < param_1 + param_2 * 2);
  }
  return;
}


