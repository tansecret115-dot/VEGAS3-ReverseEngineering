/* Module: vidcap30.exe
   Function: FUN_00554480
   Address: 00554480
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00554480(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)((int)param_1 + 0x51);
  iVar3 = 0x1000 - *(int *)(iVar2 + 4);
  if (iVar3 != 0) {
    iVar1 = FUN_0052cee0(*(undefined4 *)(iVar2 + 0x18),1,iVar3,*(undefined4 *)(iVar2 + 0x14));
    if (iVar1 != iVar3) {
      *(undefined4 *)(*param_1 + 0x14) = 0x24;
      (**(code **)*param_1)(param_1);
    }
  }
  FUN_0052cf50(*(undefined4 *)(iVar2 + 0x14));
  iVar2 = FUN_0052cfa0(*(undefined4 *)(iVar2 + 0x14));
  if (iVar2 != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x24;
    (**(code **)*param_1)(param_1);
  }
  return;
}


