/* Module: vegas30k.dll
   Function: DtSwapEndianWideChar
   Address: 01017350
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall DtSwapEndianWideChar(unsigned short *,unsigned long) */

void DtSwapEndianWideChar(ushort *param_1,ulong param_2)

{
  ulong uVar1;
  
  for (uVar1 = param_2; uVar1 != 0; uVar1 = uVar1 - 1) {
    param_2._0_2_ = CONCAT11((char)*param_1,(char)(*param_1 >> 8));
    *param_1 = (ushort)param_2;
    param_1 = param_1 + 1;
  }
  return;
}


