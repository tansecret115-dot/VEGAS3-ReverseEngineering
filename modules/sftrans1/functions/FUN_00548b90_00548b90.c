/* Module: sftrans1.dll
   Function: FUN_00548b90
   Address: 00548b90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00548b90(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0056f620;
  param_1[2] = &PTR_LAB_0056f5c8;
  FUN_00550110(0);
  if ((HWND)param_1[0x6c] != (HWND)0x0) {
    DestroyWindow((HWND)param_1[0x6c]);
  }
  FUN_00552510();
  FUN_00546d70();
  return;
}


