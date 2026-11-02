/* Module: sftrkfx1.dll
   Function: FUN_5cba2e00
   Address: 5cba2e00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cba2e00(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStackY_38 [8];
  undefined4 uStackY_18;
  
  uStackY_18 = 0x5cba2e12;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  iVar2 = *(int *)(param_1 + 0x260);
  puVar3 = (undefined4 *)&stack0x00000008;
  puVar4 = (undefined4 *)(param_1 + 0x238);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x264) != 0)) {
    puVar3 = (undefined4 *)&stack0x00000008;
    puVar4 = auStackY_38;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_5cba6f70(param_1);
  }
  uStackY_18 = 0x5cba2e55;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


