/* Module: sfppack2.dll
   Function: FUN_5ccec280
   Address: 5ccec280
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ccec280(int param_1,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined4 *puVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  EnterCriticalSection(lpCriticalSection);
  puVar2 = (undefined4 *)(param_1 + 0x1c);
  for (iVar1 = 0x34; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0xec) = 1;
  *(undefined4 *)(param_1 + 0xf0) = 1;
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0x1c) < -0xfa) {
    *(undefined4 *)(param_1 + 0x1c) = 0xffffff06;
  }
  else if (0xfa < *(int *)(param_1 + 0x1c)) {
    *(undefined4 *)(param_1 + 0x1c) = 0xfa;
  }
  FUN_5ccec420(param_1);
  FUN_5ccec450(param_1);
  FUN_5ccec480(param_1);
  FUN_5ccec4b0(param_1);
  FUN_5ccec4e0();
  FUN_5ccec4f0();
  FUN_5ccec500();
  FUN_5ccec510();
  FUN_5ccec520(param_1);
  FUN_5ccec550(param_1);
  FUN_5ccec580(param_1);
  FUN_5ccec5b0(param_1);
  FUN_5ccec5e0(param_1);
  FUN_5ccec610(param_1);
  FUN_5ccec640(param_1);
  FUN_5ccec670(param_1);
  FUN_5ccec6a0(param_1);
  FUN_5ccec6d0(param_1);
  FUN_5ccec700(param_1);
  FUN_5ccec730(param_1);
  FUN_5ccec760(param_1);
  FUN_5ccec790(param_1);
  FUN_5ccec7c0(param_1);
  FUN_5ccec7f0(param_1);
  FUN_5ccec820(param_1);
  FUN_5ccec850(param_1);
  FUN_5ccec880(param_1);
  FUN_5ccec8b0(param_1);
  FUN_5ccec8e0(param_1);
  FUN_5ccec920(param_1);
  FUN_5ccec960(param_1);
  FUN_5ccec9a0(param_1);
  FUN_5ccec9e0(param_1);
  FUN_5cceca10(param_1);
  FUN_5cceca40(param_1);
  FUN_5cceca70(param_1);
  FUN_5ccecb30(param_1);
  FUN_5ccecb60(param_1);
  FUN_5ccecb90(param_1);
  FUN_5ccecbc0(param_1);
  FUN_5ccecaa0(param_1);
  FUN_5ccecad0(param_1);
  FUN_5ccecb00(param_1);
  LeaveCriticalSection(lpCriticalSection);
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


