/* Module: sfcd.cdd
   Function: FUN_0042f970
   Address: 0042f970
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042f970(uint param_1,int param_2,uchar *param_3)

{
  if ((param_2 < 1) && ((param_2 < 0 || (param_1 < 0x400)))) {
    FUN_00420aa0(param_3,(BYTE *)"%d bytes");
    return;
  }
  if (param_2 < 1) {
    if ((param_2 < 0) || (param_1 < 0xfa000)) {
      FUN_00420aa0(param_3,(BYTE *)"$.2f KB");
      return;
    }
    if ((param_2 < 1) && ((param_2 < 0 || (param_1 < 0x3d090000)))) {
      FUN_00420aa0(param_3,(BYTE *)"$.2f MB");
      return;
    }
  }
  FUN_00420aa0(param_3,(BYTE *)"$.2f GB");
  return;
}


