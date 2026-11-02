/* Module: rmbe3260.dll
   Function: FUN_66059a00
   Address: 66059a00
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_66059a00(uint param_1,uint param_2)

{
  return param_1 / (param_2 & 0xffff) >> 1;
}


