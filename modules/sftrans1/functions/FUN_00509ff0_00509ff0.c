/* Module: sftrans1.dll
   Function: FUN_00509ff0
   Address: 00509ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00509ff0(uint param_1,int param_2,LPSTR param_3)

{
  double local_10;
  
  if ((param_2 < 1) && ((param_2 < 0 || (param_1 < 0x400)))) {
    wsprintfA(param_3,"%d");
    return;
  }
  if (param_2 < 1) {
    if ((param_2 < 0) || (param_1 < 0xfa000)) {
      local_10 = (double)CONCAT44(param_2,param_1) * _DAT_00565320;
      if (local_10 < _DAT_0055d670) {
        local_10 = 0.01;
      }
      FUN_004c6ae0(param_3,"$.2fKB",local_10._0_4_,(int)((ulonglong)local_10 >> 0x20));
      return;
    }
    if ((param_2 < 1) && ((param_2 < 0 || (param_1 < 0x3d090000)))) {
      FUN_004c6ae0(param_3,"$.2fMB",(double)CONCAT44(param_2,param_1) * _DAT_0056b730);
      return;
    }
  }
  FUN_004c6ae0(param_3,"$.2fGB",(double)CONCAT44(param_2,param_1) * _DAT_0056b720);
  return;
}


