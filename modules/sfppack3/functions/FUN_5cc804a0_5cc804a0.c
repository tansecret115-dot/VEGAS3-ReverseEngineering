/* Module: sfppack3.dll
   Function: FUN_5cc804a0
   Address: 5cc804a0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5cc804a0(uint param_1,uint param_2)

{
  return *(uint *)(&DAT_5cc8f954 + (param_2 & 0xff ^ param_1 & 0xff) * 4) ^ param_2 >> 8;
}


