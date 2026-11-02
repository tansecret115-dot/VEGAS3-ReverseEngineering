/* Module: encn3260.dll
   Function: FUN_664ac7d0
   Address: 664ac7d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664ac7d0(undefined4 *param_1)

{
  if ((HWND)*param_1 != (HWND)0x0) {
    DestroyWindow((HWND)*param_1);
    *param_1 = 0;
    FUN_664ac700();
    return 0;
  }
  return 0x80004005;
}


