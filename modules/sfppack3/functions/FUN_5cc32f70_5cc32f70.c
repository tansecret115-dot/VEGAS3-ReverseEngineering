/* Module: sfppack3.dll
   Function: FUN_5cc32f70
   Address: 5cc32f70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc32f70(int param_1,int *param_2)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  int *piVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  piVar1 = (int *)(param_1 + 0x1c);
  piVar3 = piVar1;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = *param_2;
    param_2 = param_2 + 1;
    piVar3 = piVar3 + 1;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x38) = 1;
  *(undefined4 *)(param_1 + 0x3c) = 1;
  EnterCriticalSection(lpCriticalSection);
  if (*piVar1 < 0) {
    *piVar1 = 0;
  }
  else if (2 < *piVar1) {
    *piVar1 = 2;
  }
  if (*(int *)(param_1 + 0x24) < -800) {
    *(undefined4 *)(param_1 + 0x24) = 0xfffffce0;
  }
  else if (0x78 < *(int *)(param_1 + 0x24)) {
    *(undefined4 *)(param_1 + 0x24) = 0x78;
  }
  if (*(int *)(param_1 + 0x20) < -800) {
    *(undefined4 *)(param_1 + 0x20) = 0xfffffce0;
  }
  else if (0x78 < *(int *)(param_1 + 0x20)) {
    *(undefined4 *)(param_1 + 0x20) = 0x78;
  }
  if (*(int *)(param_1 + 0x28) < 1) {
    *(undefined4 *)(param_1 + 0x28) = 1;
  }
  else if (20000 < *(int *)(param_1 + 0x28)) {
    *(undefined4 *)(param_1 + 0x28) = 20000;
  }
  FUN_5cc33040(param_1);
  FUN_5cc33070(param_1);
  FUN_5cc330a0(param_1);
  LeaveCriticalSection(lpCriticalSection);
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


