/* Module: sfppack2.dll
   Function: FUN_5ccddaa0
   Address: 5ccddaa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ccddaa0(int param_1,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined4 *puVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  EnterCriticalSection(lpCriticalSection);
  puVar2 = (undefined4 *)(param_1 + 0x1c);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x34) = 1;
  *(undefined4 *)(param_1 + 0x38) = 1;
  *(undefined4 *)(param_1 + 0x3c) = 1;
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0x20) < 0x14) {
    *(undefined4 *)(param_1 + 0x20) = 0x14;
  }
  else if (0x5622 < *(int *)(param_1 + 0x20)) {
    *(undefined4 *)(param_1 + 0x20) = 0x5622;
  }
  if (*(int *)(param_1 + 0x24) < 1) {
    *(undefined4 *)(param_1 + 0x24) = 1;
  }
  else if (0x32 < *(int *)(param_1 + 0x24)) {
    *(undefined4 *)(param_1 + 0x24) = 0x32;
  }
  if (*(int *)(param_1 + 0x28) < -600) {
    *(undefined4 *)(param_1 + 0x28) = 0xfffffda8;
  }
  else if (200 < *(int *)(param_1 + 0x28)) {
    *(undefined4 *)(param_1 + 0x28) = 200;
  }
  FUN_5ccddb50();
  LeaveCriticalSection(lpCriticalSection);
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


