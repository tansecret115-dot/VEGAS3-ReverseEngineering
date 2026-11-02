/* Module: sftrkfx1.dll
   Function: FUN_5cba8be0
   Address: 5cba8be0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cba8be0(int param_1,int *param_2)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  int *piVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  piVar1 = (int *)(param_1 + 0x34);
  piVar3 = piVar1;
  for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = *param_2;
    param_2 = param_2 + 1;
    piVar3 = piVar3 + 1;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  EnterCriticalSection(lpCriticalSection);
  if (*piVar1 < -0x96) {
    *piVar1 = -0x96;
  }
  else if (0x96 < *piVar1) {
    *piVar1 = 0x96;
  }
  if (*(int *)(param_1 + 0x38) < -0x96) {
    *(undefined4 *)(param_1 + 0x38) = 0xffffff6a;
  }
  else if (0x96 < *(int *)(param_1 + 0x38)) {
    *(undefined4 *)(param_1 + 0x38) = 0x96;
  }
  FUN_5cba8d20(param_1);
  FUN_5cba8d50(param_1);
  FUN_5cba8d80(param_1);
  FUN_5cba8db0(param_1);
  FUN_5cba8de0(param_1);
  FUN_5cba8e10(param_1);
  FUN_5cba8e40(param_1);
  FUN_5cba8e70(param_1);
  FUN_5cba8ea0(param_1);
  FUN_5cba8ed0(param_1);
  FUN_5cba8f00(param_1);
  FUN_5cba8f30(param_1);
  FUN_5cba8f60(param_1);
  FUN_5cba8f90(param_1);
  FUN_5cba8fc0(param_1);
  FUN_5cba8ff0(param_1);
  FUN_5cba9020(param_1);
  FUN_5cba9050(param_1);
  FUN_5cba9080(param_1);
  FUN_5cba90b0(param_1);
  FUN_5cba90e0(param_1);
  FUN_5cba9110(param_1);
  if (4 < *(uint *)(param_1 + 0x94)) {
    *(undefined4 *)(param_1 + 0x94) = 4;
  }
  LeaveCriticalSection(lpCriticalSection);
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


