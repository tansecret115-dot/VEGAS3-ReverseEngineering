/* Module: sfppack2.dll
   Function: FUN_5ccface0
   Address: 5ccface0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ccface0(int param_1,int *param_2)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  int *piVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  piVar1 = (int *)(param_1 + 0x1c);
  piVar3 = piVar1;
  for (iVar2 = 0x28; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = *param_2;
    param_2 = param_2 + 1;
    piVar3 = piVar3 + 1;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  *(undefined4 *)(param_1 + 0xbc) = 1;
  *(undefined4 *)(param_1 + 0xc0) = 1;
  EnterCriticalSection(lpCriticalSection);
  if (*piVar1 < -0xfa) {
    *piVar1 = -0xfa;
  }
  else if (0xfa < *piVar1) {
    *piVar1 = 0xfa;
  }
  if (*(int *)(param_1 + 0x20) < 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else if (5000 < *(int *)(param_1 + 0x20)) {
    *(undefined4 *)(param_1 + 0x20) = 5000;
  }
  if (*(int *)(param_1 + 0x24) < 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else if (50000 < *(int *)(param_1 + 0x24)) {
    *(undefined4 *)(param_1 + 0x24) = 50000;
  }
  FUN_5ccfadb0();
  FUN_5ccfadc0(param_1);
  FUN_5ccfae30(param_1);
  FUN_5ccfadf0(param_1);
  FUN_5ccfae70(param_1);
  LeaveCriticalSection(lpCriticalSection);
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


