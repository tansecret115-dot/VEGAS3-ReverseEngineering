/* Module: rnco3260.dll
   Function: FUN_63763718
   Address: 63763718
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_63763718(uint param_1,uint param_2,uint param_3,uint param_4)

{
  DAT_6379a410 = param_3 & 0xffff;
  DAT_6379a414 = param_4 & 0xffff;
  _DAT_6379a428 = param_2 * 0x2d0 + param_1;
  _DAT_6379a42c = (param_2 >> 1) * 0x2d0 + (param_1 >> 1);
  return;
}


