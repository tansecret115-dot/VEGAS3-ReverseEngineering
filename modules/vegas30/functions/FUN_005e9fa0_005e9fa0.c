/* Module: vegas30.exe
   Function: FUN_005e9fa0
   Address: 005e9fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005e9fa0(undefined4 param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_4;
  
  iVar4 = 0;
  if (*(int *)(param_2 + 0x244) == 0) {
    if (*(uint **)(param_2 + 0x234) == (uint *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = **(uint **)(param_2 + 0x234);
    }
  }
  else {
    uVar1 = FUN_005d0420(param_2);
  }
  iVar2 = 0;
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      iVar4 = FUN_005e9e80(param_1,param_2,uVar3,&local_4);
      if (iVar4 < 0) {
        return iVar4;
      }
      iVar2 = iVar2 + local_4;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
    if (iVar4 < 0) {
      return iVar4;
    }
  }
  *param_3 = iVar2;
  return iVar4;
}


