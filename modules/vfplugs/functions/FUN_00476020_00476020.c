/* Module: vfplugs.dll
   Function: FUN_00476020
   Address: 00476020
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00476020(undefined4 *param_1)

{
  FUN_00477180(param_1);
  if ((LPCVOID)*param_1 != (LPCVOID)0x0) {
    FUN_0040a640((LPCVOID)*param_1);
  }
  if (param_1[0x1ff] != 0) {
    FUN_0047c8a0((int)param_1);
  }
  FUN_0047c6a0((int)param_1);
  return;
}


