/* Module: sfxpfx2.dll
   Function: FUN_5c8d5e20
   Address: 5c8d5e20
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5c8d5e20(uint param_1,uint param_2)

{
  return *(uint *)(&DAT_5c8e3f14 + (param_2 & 0xff ^ param_1 & 0xff) * 4) ^ param_2 >> 8;
}


