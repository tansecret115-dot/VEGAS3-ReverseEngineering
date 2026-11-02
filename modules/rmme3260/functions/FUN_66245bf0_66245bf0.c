/* Module: rmme3260.dll
   Function: FUN_66245bf0
   Address: 66245bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66245bf0(undefined4 *param_1)

{
  if ((HWND)*param_1 != (HWND)0x0) {
    ShowWindow((HWND)*param_1,0);
    return 0;
  }
  return 0x80004005;
}


