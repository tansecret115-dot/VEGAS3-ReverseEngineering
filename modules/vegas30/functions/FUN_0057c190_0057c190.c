/* Module: vegas30.exe
   Function: FUN_0057c190
   Address: 0057c190
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0057c190(uint param_1,byte *param_2,int param_3)

{
  if (param_3 == 0) {
    return param_1;
  }
  do {
    param_1 = param_1 >> 8 ^ *(uint *)(&DAT_00645720 + (param_1 & 0xff ^ (uint)*param_2) * 4);
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return param_1;
}


