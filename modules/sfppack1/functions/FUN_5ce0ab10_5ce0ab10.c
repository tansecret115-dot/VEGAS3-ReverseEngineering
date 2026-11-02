/* Module: sfppack1.dll
   Function: FUN_5ce0ab10
   Address: 5ce0ab10
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5ce0ab10(uint param_1,uint param_2)

{
  return *(uint *)(&DAT_5ce1b4c4 + (param_2 & 0xff ^ param_1 & 0xff) * 4) ^ param_2 >> 8;
}


