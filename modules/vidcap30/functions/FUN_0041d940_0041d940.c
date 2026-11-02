/* Module: vidcap30.exe
   Function: FUN_0041d940
   Address: 0041d940
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0041d940(uint param_1,byte *param_2,int param_3)

{
  if (param_3 == 0) {
    return param_1;
  }
  do {
    param_1 = param_1 >> 8 ^ *(uint *)(&DAT_005b3f10 + (param_1 & 0xff ^ (uint)*param_2) * 4);
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return param_1;
}


