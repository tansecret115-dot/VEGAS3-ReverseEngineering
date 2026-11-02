/* Module: oggplug.dll
   Function: FUN_00419950
   Address: 00419950
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00419950(uint param_1,int param_2,uchar *param_3)

{
  if ((param_2 < 1) && ((param_2 < 0 || (param_1 < 0x400)))) {
    FUN_00410930(param_3,(BYTE *)"%d bytes");
    return;
  }
  if (param_2 < 1) {
    if ((param_2 < 0) || (param_1 < 0xfa000)) {
      FUN_00410930(param_3,(BYTE *)"$.2f KB");
      return;
    }
    if ((param_2 < 1) && ((param_2 < 0 || (param_1 < 0x3d090000)))) {
      FUN_00410930(param_3,(BYTE *)"$.2f MB");
      return;
    }
  }
  FUN_00410930(param_3,(BYTE *)"$.2f GB");
  return;
}


