/* Module: sfmarket2.dll
   Function: FUN_0041bda0
   Address: 0041bda0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0041bda0(uint param_1,uint param_2)

{
  return *(uint *)(&DAT_0049716c + (param_2 & 0xff ^ param_1 & 0xff) * 4) ^ param_2 >> 8;
}


