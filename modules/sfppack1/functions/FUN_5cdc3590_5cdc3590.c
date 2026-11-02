/* Module: sfppack1.dll
   Function: FUN_5cdc3590
   Address: 5cdc3590
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdc3590(int param_1,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  EnterCriticalSection(lpCriticalSection);
  puVar4 = (undefined4 *)(param_1 + 0x1c);
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  bVar1 = true;
  *(undefined4 *)(param_1 + 0x30) = 1;
  *(undefined4 *)(param_1 + 0x34) = 1;
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0x28) < -800) {
    *(undefined4 *)(param_1 + 0x28) = 0xfffffce0;
  }
  else {
    if (*(int *)(param_1 + 0x28) < 1) goto LAB_5cdc35e2;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  bVar1 = false;
LAB_5cdc35e2:
  iVar3 = FUN_5cdc3640(param_1);
  iVar2 = FUN_5cdc3670(param_1);
  LeaveCriticalSection(lpCriticalSection);
  if ((2 - (uint)(iVar3 != 0)) + (uint)!bVar1 != (uint)(iVar2 != 0)) {
    LeaveCriticalSection(lpCriticalSection);
    return 0x80004005;
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


