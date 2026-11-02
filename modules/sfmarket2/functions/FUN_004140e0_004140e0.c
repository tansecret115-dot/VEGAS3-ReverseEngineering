/* Module: sfmarket2.dll
   Function: FUN_004140e0
   Address: 004140e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004140e0(undefined4 *param_1)

{
  FUN_00415240(param_1);
  if ((LPCVOID)*param_1 != (LPCVOID)0x0) {
    FUN_004028d0((LPCVOID)*param_1);
  }
  if (param_1[0x1ff] != 0) {
    FUN_0041a960((int)param_1);
  }
  FUN_0041a760((int)param_1);
  return;
}


