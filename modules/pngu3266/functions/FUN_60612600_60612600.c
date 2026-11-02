/* Module: pngu3266.dll
   Function: FUN_60612600
   Address: 60612600
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_60612600(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = FUN_60612503();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if (0x4b < param_1) {
      if (param_1 < 0x4e) {
        return 0;
      }
      if (param_1 == 0x4e) {
        param_1 = 0;
      }
      else if (param_1 == 0x4f) {
        param_1 = 1;
      }
      else if ((0x4f < param_1) && (param_1 < 0x52)) {
        return 1;
      }
    }
    iVar2 = GetSystemMetrics(param_1);
  }
  else {
    iVar2 = (*DAT_6064b170)(param_1);
  }
  return iVar2;
}


