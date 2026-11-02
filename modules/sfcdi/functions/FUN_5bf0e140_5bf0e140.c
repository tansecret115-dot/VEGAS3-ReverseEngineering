/* Module: sfcdi.dll
   Function: FUN_5bf0e140
   Address: 5bf0e140
   Source: Ghidra pseudocode (Stage 10 batch) */


ushort FUN_5bf0e140(ushort param_1,byte *param_2,int param_3)

{
  if (param_3 == 0) {
    return param_1;
  }
  do {
    param_1 = *(ushort *)(&DAT_5bf55834 + ((uint)(param_1 >> 8) ^ (uint)*param_2) * 2) ^
              param_1 << 8;
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return param_1;
}


