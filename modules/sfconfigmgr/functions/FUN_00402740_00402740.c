/* Module: sfconfigmgr.dll
   Function: FUN_00402740
   Address: 00402740
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00402740(int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00402630(param_1);
  if (-1 < iVar1) {
    iVar1 = FUN_00402800(param_1,param_2);
    if (-1 < iVar1) {
      iVar1 = FUN_004029a0(param_1,param_2);
      if (-1 < iVar1) {
        iVar1 = FUN_00402bf0(param_1,param_2);
        if (-1 < iVar1) {
          FUN_00402d70(param_1,param_2);
        }
      }
    }
  }
  return;
}


