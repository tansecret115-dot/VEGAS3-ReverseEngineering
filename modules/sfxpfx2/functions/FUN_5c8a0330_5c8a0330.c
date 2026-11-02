/* Module: sfxpfx2.dll
   Function: FUN_5c8a0330
   Address: 5c8a0330
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c8a0330(int param_1,int *param_2)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  int *piVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  piVar1 = (int *)(param_1 + 0x1c);
  piVar3 = piVar1;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = *param_2;
    param_2 = param_2 + 1;
    piVar3 = piVar3 + 1;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x4c) = 1;
  *(undefined4 *)(param_1 + 0x50) = 1;
  EnterCriticalSection(lpCriticalSection);
  if (*piVar1 < 0) {
    *piVar1 = 0;
  }
  else if (1000 < *piVar1) {
    *piVar1 = 1000;
  }
  if (*(int *)(param_1 + 0x2c) < -0xfa) {
    *(undefined4 *)(param_1 + 0x2c) = 0xffffff06;
  }
  else if (0xfa < *(int *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0xfa;
  }
  if (*(int *)(param_1 + 0x30) < -0xfa) {
    *(undefined4 *)(param_1 + 0x30) = 0xffffff06;
  }
  else if (0xfa < *(int *)(param_1 + 0x30)) {
    *(undefined4 *)(param_1 + 0x30) = 0xfa;
  }
  if (*(int *)(param_1 + 0x20) < -0xfa) {
    *(undefined4 *)(param_1 + 0x20) = 0xffffff06;
  }
  else if (0xfa < *(int *)(param_1 + 0x20)) {
    *(undefined4 *)(param_1 + 0x20) = 0xfa;
  }
  FUN_5c8a0420(param_1);
  FUN_5c8a0450(param_1);
  FUN_5c8a0480(param_1);
  FUN_5c8a04b0(param_1);
  FUN_5c8a04e0(param_1);
  FUN_5c8a0510(param_1);
  FUN_5c8a0540(param_1);
  FUN_5c8a0570(param_1);
  LeaveCriticalSection(lpCriticalSection);
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


