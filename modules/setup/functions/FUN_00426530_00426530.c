/* Module: Setup.exe
   Function: FUN_00426530
   Address: 00426530
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00426530(undefined4 *param_1)

{
  FUN_00427740(param_1);
  if ((LPCVOID)*param_1 != (LPCVOID)0x0) {
    FUN_00403420((LPCVOID)*param_1);
  }
  if (param_1[0x1ff] != 0) {
    FUN_0042ce60((int)param_1);
  }
  FUN_0042cc60((int)param_1);
  return;
}


