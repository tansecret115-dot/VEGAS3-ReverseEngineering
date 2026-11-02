/* Module: sftrkfx1.dll
   Function: FUN_5cbfdfc0
   Address: 5cbfdfc0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5cbfdfc0(uint param_1,uint param_2)

{
  return *(uint *)(&DAT_5cc0b76c + (param_2 & 0xff ^ param_1 & 0xff) * 4) ^ param_2 >> 8;
}


