/* Module: wavplug.dll
   Function: FUN_5f3c37e0
   Address: 5f3c37e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f3c37e0(uint param_1,uint param_2)

{
  return *(uint *)(&DAT_5f3d1894 + (param_2 & 0xff ^ param_1 & 0xff) * 4) ^ param_2 >> 8;
}


