/* Module: sfppack2.dll
   Function: FUN_5cce3780
   Address: 5cce3780
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cce3780(int param_1,int *param_2)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  int *piVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  piVar1 = (int *)(param_1 + 0x1c);
  piVar3 = piVar1;
  for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = *param_2;
    param_2 = param_2 + 1;
    piVar3 = piVar3 + 1;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x70) = 1;
  *(undefined4 *)(param_1 + 0x74) = 1;
  EnterCriticalSection(lpCriticalSection);
  if (*piVar1 < -0xfa) {
    *piVar1 = -0xfa;
  }
  else if (0xfa < *piVar1) {
    *piVar1 = 0xfa;
  }
  if (*(int *)(param_1 + 0x20) < -0xfa) {
    *(undefined4 *)(param_1 + 0x20) = 0xffffff06;
  }
  else if (0xfa < *(int *)(param_1 + 0x20)) {
    *(undefined4 *)(param_1 + 0x20) = 0xfa;
  }
  if (*(int *)(param_1 + 0x24) < -0xfa) {
    *(undefined4 *)(param_1 + 0x24) = 0xffffff06;
  }
  else if (0xfa < *(int *)(param_1 + 0x24)) {
    *(undefined4 *)(param_1 + 0x24) = 0xfa;
  }
  FUN_5cce3890(param_1);
  FUN_5cce38c0(param_1);
  FUN_5cce38f0(param_1);
  FUN_5cce3920(param_1);
  FUN_5cce3950(param_1);
  FUN_5cce3980(param_1);
  FUN_5cce39b0(param_1);
  FUN_5cce39e0(param_1);
  FUN_5cce3a10(param_1);
  FUN_5cce3a40(param_1);
  FUN_5cce3a70(param_1);
  FUN_5cce3aa0(param_1);
  FUN_5cce3ad0(param_1);
  FUN_5cce3b00(param_1);
  FUN_5cce3b30(param_1);
  FUN_5cce3b60(param_1);
  FUN_5cce3b90(param_1);
  FUN_5cce3bc0(param_1);
  LeaveCriticalSection(lpCriticalSection);
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


