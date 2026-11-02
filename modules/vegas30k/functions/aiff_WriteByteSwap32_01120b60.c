/* Module: vegas30k.dll
   Function: aiff_WriteByteSwap32
   Address: 01120b60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall aiff_WriteByteSwap32,8 */

void aiff_WriteByteSwap32(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
                    /* 0x120b60  1360  _aiff_WriteByteSwap32@8 */
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


