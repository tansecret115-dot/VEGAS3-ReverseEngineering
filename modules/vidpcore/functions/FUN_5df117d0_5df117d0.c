/* Module: vidpcore.dll
   Function: FUN_5df117d0
   Address: 5df117d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5df117d0(uint param_1,uint param_2)

{
  return *(uint *)(&DAT_5df37be8 + (param_2 & 0xff ^ param_1 & 0xff) * 4) ^ param_2 >> 8;
}


