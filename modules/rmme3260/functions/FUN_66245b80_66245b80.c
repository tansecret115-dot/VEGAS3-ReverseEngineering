/* Module: rmme3260.dll
   Function: FUN_66245b80
   Address: 66245b80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66245b80(undefined4 *param_1)

{
  if ((HWND)*param_1 != (HWND)0x0) {
    DestroyWindow((HWND)*param_1);
    *param_1 = 0;
    FUN_66245750();
    FUN_66251160(&DAT_6627d088,(int *)*param_1);
    return 0;
  }
  return 0x80004005;
}


