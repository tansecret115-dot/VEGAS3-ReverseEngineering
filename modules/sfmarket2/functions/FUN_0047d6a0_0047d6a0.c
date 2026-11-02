/* Module: sfmarket2.dll
   Function: FUN_0047d6a0
   Address: 0047d6a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047d6a0(int *param_1)

{
  int iVar1;
  size_t sVar2;
  uint uVar3;
  size_t sVar4;
  
  iVar1 = *(int *)((int)param_1 + 0x51);
  sVar4 = 0x1000 - *(int *)(iVar1 + 4);
  if (sVar4 != 0) {
    sVar2 = FUN_00447d00(*(void **)(iVar1 + 0x18),1,sVar4,*(int **)(iVar1 + 0x14));
    if (sVar2 != sVar4) {
      *(undefined4 *)(*param_1 + 0x14) = 0x24;
      (**(code **)*param_1)(param_1);
    }
  }
  FUN_00447d70(*(int **)(iVar1 + 0x14));
  uVar3 = FUN_00447dc0(*(int **)(iVar1 + 0x14));
  if (uVar3 != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x24;
    (**(code **)*param_1)(param_1);
  }
  return;
}


