/* Module: sfppack3.dll
   Function: FUN_5cc42840
   Address: 5cc42840
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc42840(int param_1,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined4 *puVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  puVar2 = (undefined4 *)(param_1 + 0x1c);
  for (iVar1 = 0x8a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x244) = 1;
  *(undefined4 *)(param_1 + 0x248) = 1;
  EnterCriticalSection(lpCriticalSection);
  if (*(uint *)(param_1 + 0x3c) < 2) {
    *(undefined4 *)(param_1 + 0x3c) = 2;
  }
  else if (0x20 < *(uint *)(param_1 + 0x3c)) {
    *(undefined4 *)(param_1 + 0x3c) = 0x20;
  }
  if (*(uint *)(param_1 + 0x140) < 2) {
    *(undefined4 *)(param_1 + 0x140) = 2;
  }
  else if (0x20 < *(uint *)(param_1 + 0x140)) {
    *(undefined4 *)(param_1 + 0x140) = 0x20;
  }
  if (*(int *)(param_1 + 0x24) < -600) {
    *(undefined4 *)(param_1 + 0x24) = 0xfffffda8;
  }
  else if (0 < *(int *)(param_1 + 0x24)) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x28) < -600) {
    *(undefined4 *)(param_1 + 0x28) = 0xfffffda8;
  }
  else if (0xf0 < *(int *)(param_1 + 0x28)) {
    *(undefined4 *)(param_1 + 0x28) = 0xf0;
  }
  FUN_5cc42930(param_1);
  FUN_5cc42960(param_1);
  FUN_5cc42990(param_1);
  FUN_5cc429c0(param_1);
  FUN_5cc42a20(param_1);
  FUN_5cc429f0(param_1);
  LeaveCriticalSection(lpCriticalSection);
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


