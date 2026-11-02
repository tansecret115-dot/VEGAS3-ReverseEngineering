/* Module: sfppack2.dll
   Function: FUN_5cd49990
   Address: 5cd49990
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5cd49990(uint param_1,uint param_2)

{
  return *(uint *)(&DAT_5cd5b1e8 + (param_2 & 0xff ^ param_1 & 0xff) * 4) ^ param_2 >> 8;
}


