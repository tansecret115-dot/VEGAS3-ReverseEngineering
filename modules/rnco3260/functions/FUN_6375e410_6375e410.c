/* Module: rnco3260.dll
   Function: FUN_6375e410
   Address: 6375e410
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_6375e410(byte param_1,int param_2,int param_3,byte param_4,int param_5,int param_6,int param_7,
            int param_8,byte param_9,int param_10,int param_11,byte param_12,int param_13,
            int param_14,int param_15,int param_16,undefined4 *param_17,undefined4 *param_18)

{
  if ((((((((param_1 & 3) == 0) && ((param_4 & 3) == 0)) && ((param_9 & 3) == 0)) &&
        (((param_12 & 3) == 0 && (0 < param_2)))) &&
       (((0 < param_3 && ((0 < param_10 && (0 < param_11)))) && (-1 < param_5)))) &&
      ((((-1 < param_6 && (0 < param_7)) && (0 < param_8)) &&
       (((-1 < param_13 && (-1 < param_14)) &&
        ((0 < param_15 && ((0 < param_16 && (param_5 + param_7 <= param_2)))))))))) &&
     ((param_8 + param_6 <= param_3 &&
      ((param_13 + param_15 <= param_10 && (param_14 + param_16 <= param_11)))))) {
    if (param_7 == param_15) {
      *param_17 = 1;
    }
    else {
      if (param_7 != param_15 * 2) {
        return 0;
      }
      *param_17 = 2;
    }
    if (param_8 == param_16) {
      *param_18 = 1;
      return 1;
    }
    if (param_8 == param_16 * 2) {
      *param_18 = 2;
      return 1;
    }
  }
  return 0;
}


