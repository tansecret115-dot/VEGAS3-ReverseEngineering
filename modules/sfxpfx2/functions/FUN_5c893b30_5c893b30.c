/* Module: sfxpfx2.dll
   Function: FUN_5c893b30
   Address: 5c893b30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c893b30(int param_1,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined4 *puVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  puVar2 = (undefined4 *)(param_1 + 0x1c);
  for (iVar1 = 0x4a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x144) = 1;
  *(undefined4 *)(param_1 + 0x148) = 1;
  *(undefined4 *)(param_1 + 0x14c) = 1;
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
  else if (50000 < *(int *)(param_1 + 0x30)) {
    *(undefined4 *)(param_1 + 0x30) = 50000;
  }
  if (*(int *)(param_1 + 0x2c) < 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else if (1000 < *(int *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 1000;
  }
  FUN_5c893c10(param_1);
  FUN_5c893c40(param_1);
  FUN_5c893c70(param_1);
  FUN_5c893ca0(param_1);
  FUN_5c893cd0(param_1);
  LeaveCriticalSection(lpCriticalSection);
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


