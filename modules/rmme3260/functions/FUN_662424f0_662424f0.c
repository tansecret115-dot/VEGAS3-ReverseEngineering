/* Module: rmme3260.dll
   Function: FUN_662424f0
   Address: 662424f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_662424f0(undefined4 *param_1)

{
  if ((HWND)*param_1 != (HWND)0x0) {
    DestroyWindow((HWND)*param_1);
    *param_1 = 0;
    FUN_66242420();
    return 0;
  }
  return 0x80004005;
}


