/* Module: sfcdi.dll
   Function: FUN_5bf0e1c0
   Address: 5bf0e1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5bf0e1c0(uint param_1,byte *param_2,int param_3)

{
  if (param_3 == 0) {
    return param_1;
  }
  do {
    param_1 = param_1 >> 8 ^ *(uint *)(&DAT_5bf63618 + (param_1 & 0xff ^ (uint)*param_2) * 4);
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return param_1;
}


