/* Module: vegas30.exe
   Function: FUN_005c1ea0
   Address: 005c1ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005c1ea0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_ESI;
  int *piVar4;
  int *piVar5;
  undefined4 local_4;
  
  iVar2 = param_3;
  piVar1 = (int *)(param_3 + 8);
  local_4 = 0;
  piVar4 = param_1;
  piVar5 = piVar1;
  (**(code **)(*param_1 + 0xc))(param_1,piVar1,4,&param_3);
  if (999 < *piVar1) {
    return 0;
  }
  if (*piVar1 != 0xc) {
    return 0x8004e008;
  }
  uVar3 = (**(code **)(*param_1 + 0xc))(param_1,&stack0xffffffe8,8,&local_4);
  if (unaff_ESI != 8) {
    return 0x8004e008;
  }
  *piVar1 = (int)piVar4;
  *(int **)(iVar2 + 0xc) = piVar5;
  return uVar3;
}


