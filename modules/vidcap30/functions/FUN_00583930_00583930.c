/* Module: vidcap30.exe
   Function: FUN_00583930
   Address: 00583930
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00583930(int param_1,undefined4 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00584b88;
  local_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x58);
  ExceptionList = &local_c;
  EnterCriticalSection(lpCriticalSection);
  local_4 = 0;
  puVar1 = (undefined4 *)FUN_00404b00(*(int *)(param_1 + 0x50) * 4 + 4);
  if (puVar1 == (undefined4 *)0x0) {
    LeaveCriticalSection(lpCriticalSection);
    ExceptionList = local_c;
    return 0x8007000e;
  }
  if (*(undefined4 **)(param_1 + 0x54) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_1 + 0x54);
    puVar5 = puVar1;
    for (uVar2 = *(uint *)(param_1 + 0x50) & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    puVar1[*(int *)(param_1 + 0x50)] = param_2;
    FUN_00404b20(*(undefined4 *)(param_1 + 0x54));
  }
  *(undefined4 **)(param_1 + 0x54) = puVar1;
  puVar1[*(int *)(param_1 + 0x50)] = param_2;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_c;
  return 0;
}


