/* Module: vegas30k.dll
   Function: FUN_01113a50
   Address: 01113a50
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_01113a50(uint param_1,uint param_2,uint param_3,int param_4)

{
  if ((param_2 <= param_1) || (param_1 == param_3)) {
    if ((param_1 < 0xff01) && (param_2 <= param_1)) {
      if (param_3 < param_1 - param_2) {
        return param_1 - param_2;
      }
    }
    else if (param_4 != 0) {
      param_3 = 0xffff;
    }
  }
  return param_3;
}


