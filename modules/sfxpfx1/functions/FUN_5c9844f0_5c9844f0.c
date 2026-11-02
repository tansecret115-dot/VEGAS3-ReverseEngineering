/* Module: sfxpfx1.dll
   Function: FUN_5c9844f0
   Address: 5c9844f0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5c9844f0(uint param_1,uint param_2)

{
  return *(uint *)(&DAT_5c992c2c + (param_2 & 0xff ^ param_1 & 0xff) * 4) ^ param_2 >> 8;
}


