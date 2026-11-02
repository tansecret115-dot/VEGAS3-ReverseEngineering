/* Module: mp3plug.dll
   Function: FUN_5f71e4d0
   Address: 5f71e4d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f71e4d0(undefined4 *param_1)

{
  FUN_5f71f630(param_1);
  if ((LPCVOID)*param_1 != (LPCVOID)0x0) {
    FUN_5f681ba0((LPCVOID)*param_1);
  }
  if (param_1[0x1ff] != 0) {
    FUN_5f724d50((int)param_1);
  }
  FUN_5f724b50((int)param_1);
  return;
}


