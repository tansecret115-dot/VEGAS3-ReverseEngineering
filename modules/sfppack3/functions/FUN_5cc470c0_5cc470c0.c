/* Module: sfppack3.dll
   Function: FUN_5cc470c0
   Address: 5cc470c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc470c0(int param_1,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined4 *puVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  puVar2 = (undefined4 *)(param_1 + 0x1c);
  for (iVar1 = 0x49; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x140) = 1;
  *(undefined4 *)(param_1 + 0x144) = 1;
  *(undefined4 *)(param_1 + 0x148) = 1;
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0x38) < -800) {
    *(undefined4 *)(param_1 + 0x38) = 0xfffffce0;
  }
  else if (0 < *(int *)(param_1 + 0x38)) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*(int *)(param_1 + 0x34) < -800) {
    *(undefined4 *)(param_1 + 0x34) = 0xfffffce0;
  }
  else if (0xf0 < *(int *)(param_1 + 0x34)) {
    *(undefined4 *)(param_1 + 0x34) = 0xf0;
  }
  if (*(int *)(param_1 + 0x30) < 1) {
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  else if (5000000 < *(int *)(param_1 + 0x30)) {
    *(undefined4 *)(param_1 + 0x30) = 5000000;
  }
  if (*(int *)(param_1 + 0x2c) < -800) {
    *(undefined4 *)(param_1 + 0x2c) = 0xfffffce0;
  }
  else if (0 < *(int *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  FUN_5cc471a0(param_1);
  FUN_5cc471d0(param_1);
  FUN_5cc47200(param_1);
  FUN_5cc47230(param_1);
  LeaveCriticalSection(lpCriticalSection);
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


