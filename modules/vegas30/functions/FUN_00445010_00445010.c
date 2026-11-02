/* Module: vegas30.exe
   Function: FUN_00445010
   Address: 00445010
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00445010(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined1 local_104 [260];
  
  piVar1 = (int *)FUN_004452b0(param_1);
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    if (param_2 < 0) {
      param_2 = 0;
    }
    else {
      iVar2 = *piVar1 + -1;
      if (iVar2 < param_2) {
        param_2 = iVar2;
      }
    }
    iVar2 = FUN_00508960(local_104,*(undefined4 *)(piVar1[2] + param_2 * 4),0x104);
    if (iVar2 != 0) {
      FUN_0050ab70(local_104,param_3,param_4);
    }
  }
  return;
}


