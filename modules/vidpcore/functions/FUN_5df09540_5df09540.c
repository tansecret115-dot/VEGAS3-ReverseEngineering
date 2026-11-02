/* Module: vidpcore.dll
   Function: FUN_5df09540
   Address: 5df09540
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5df09540(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_5df094f0();
  if (-1 < iVar1) {
    iVar1 = FUN_5df09500(*param_1,param_1[2],param_1[1],0);
    if (-1 < iVar1) {
      iVar1 = FUN_5df09500(*param_1,param_1[2],param_1[3],2);
      if (-1 < iVar1) {
        iVar1 = FUN_5df09500(param_1[1],param_1[3],*param_1,1);
        if (-1 < iVar1) {
          FUN_5df09500(param_1[1],param_1[3],param_1[2],3);
        }
      }
    }
  }
  return;
}


