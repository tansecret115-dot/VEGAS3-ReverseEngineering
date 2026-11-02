/* Module: sftrans1.dll
   Function: FUN_0052dd20
   Address: 0052dd20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052dd20(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0052dcd0();
  if (-1 < iVar1) {
    iVar1 = FUN_0052dce0(*param_1,param_1[2],param_1[1],0);
    if (-1 < iVar1) {
      iVar1 = FUN_0052dce0(*param_1,param_1[2],param_1[3],2);
      if (-1 < iVar1) {
        iVar1 = FUN_0052dce0(param_1[1],param_1[3],*param_1,1);
        if (-1 < iVar1) {
          FUN_0052dce0(param_1[1],param_1[3],param_1[2],3);
        }
      }
    }
  }
  return;
}


