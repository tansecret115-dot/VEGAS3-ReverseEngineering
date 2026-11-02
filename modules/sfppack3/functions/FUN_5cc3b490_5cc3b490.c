/* Module: sfppack3.dll
   Function: FUN_5cc3b490
   Address: 5cc3b490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc3b490(int param_1,int *param_2)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  int *piVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  piVar1 = (int *)(param_1 + 0x1c);
  piVar3 = piVar1;
  for (iVar2 = 0x45; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = *param_2;
    param_2 = param_2 + 1;
    piVar3 = piVar3 + 1;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x130) = 1;
  *(undefined4 *)(param_1 + 0x134) = 1;
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0x28) < -800) {
    *(undefined4 *)(param_1 + 0x28) = 0xfffffce0;
  }
  else if (0xf0 < *(int *)(param_1 + 0x28)) {
    *(undefined4 *)(param_1 + 0x28) = 0xf0;
  }
  if (*(int *)(param_1 + 0x24) < 1) {
    *(undefined4 *)(param_1 + 0x24) = 1;
  }
  else if (1000000 < *(int *)(param_1 + 0x24)) {
    *(undefined4 *)(param_1 + 0x24) = 1000000;
  }
  if (*(int *)(param_1 + 0x20) < 1) {
    *(undefined4 *)(param_1 + 0x20) = 1;
  }
  else if (0x960 < *(int *)(param_1 + 0x20)) {
    *(undefined4 *)(param_1 + 0x20) = 0x960;
  }
  if (*piVar1 < 0) {
    *piVar1 = 0;
  }
  else if (1 < *piVar1) {
    *piVar1 = 1;
  }
  LeaveCriticalSection(lpCriticalSection);
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


