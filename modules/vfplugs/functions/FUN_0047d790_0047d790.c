/* Module: vfplugs.dll
   Function: FUN_0047d790
   Address: 0047d790
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0047d790(uint param_1,uint param_2)

{
  return *(uint *)(&DAT_0048fbc8 + (param_2 & 0xff ^ param_1 & 0xff) * 4) ^ param_2 >> 8;
}


