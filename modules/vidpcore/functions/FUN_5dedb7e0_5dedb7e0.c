/* Module: vidpcore.dll
   Function: FUN_5dedb7e0
   Address: 5dedb7e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5dedb7e0(uint param_1,int param_2,LPSTR param_3)

{
  double local_10;
  
  if ((param_2 < 1) && ((param_2 < 0 || (param_1 < 0x400)))) {
    wsprintfA(param_3,"%d");
    return;
  }
  if (param_2 < 1) {
    if ((param_2 < 0) || (param_1 < 0xfa000)) {
      local_10 = (double)CONCAT44(param_2,param_1) * _DAT_5df34fa8;
      if (local_10 < _DAT_5df1a910) {
        local_10 = 0.01;
      }
      FUN_5deb5050(param_3,"$.2fKB",local_10._0_4_,(int)((ulonglong)local_10 >> 0x20));
      return;
    }
    if ((param_2 < 1) && ((param_2 < 0 || (param_1 < 0x3d090000)))) {
      FUN_5deb5050(param_3,"$.2fMB",(double)CONCAT44(param_2,param_1) * _DAT_5df34f98);
      return;
    }
  }
  FUN_5deb5050(param_3,"$.2fGB",(double)CONCAT44(param_2,param_1) * _DAT_5df34f88);
  return;
}


