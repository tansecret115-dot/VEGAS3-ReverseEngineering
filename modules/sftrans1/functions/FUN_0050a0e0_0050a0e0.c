/* Module: sftrans1.dll
   Function: FUN_0050a0e0
   Address: 0050a0e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050a0e0(uint param_1,int param_2,undefined4 param_3)

{
  double local_10;
  
  if ((param_2 < 1) && ((param_2 < 0 || (param_1 < 0x400)))) {
    FUN_004c6ae0(param_3,"%d bytes",param_1);
    return;
  }
  if (param_2 < 1) {
    if ((param_2 < 0) || (param_1 < 0xfa000)) {
      local_10 = (double)CONCAT44(param_2,param_1) * _DAT_00565320;
      if (local_10 < _DAT_0055d670) {
        local_10 = 0.01;
      }
      FUN_004c6ae0(param_3,"$.2f KB",local_10._0_4_,(int)((ulonglong)local_10 >> 0x20));
      return;
    }
    if ((param_2 < 1) && ((param_2 < 0 || (param_1 < 0x3d090000)))) {
      FUN_004c6ae0(param_3,"$.2f MB",(double)CONCAT44(param_2,param_1) * _DAT_0056b730);
      return;
    }
  }
  FUN_004c6ae0(param_3,"$.2f GB",(double)CONCAT44(param_2,param_1) * _DAT_0056b720);
  return;
}


