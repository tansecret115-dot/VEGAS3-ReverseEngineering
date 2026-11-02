/* Module: vegas30k.dll
   Function: FUN_01113a90
   Address: 01113a90
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_01113a90(uint param_1,uint param_2,uint param_3,int param_4)

{
  if ((param_3 != 0) && (param_4 == 0)) {
    param_3 = param_3 - 1;
  }
  if (0xfeff < param_1) {
    param_1 = 0;
    param_2 = param_2 - 1;
  }
  if (((param_1 < param_3) && (param_2 < param_3)) && (param_1 + param_2 < param_3)) {
    param_3 = param_1 + param_2;
  }
  return param_3;
}


