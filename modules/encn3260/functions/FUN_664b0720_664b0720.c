/* Module: encn3260.dll
   Function: FUN_664b0720
   Address: 664b0720
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664b0720(undefined4 *param_1)

{
  if ((HWND)*param_1 != (HWND)0x0) {
    DestroyWindow((HWND)*param_1);
    *param_1 = 0;
    FUN_664b02e0();
    FUN_664c3fe0(&DAT_664f0880,(int *)*param_1);
    return 0;
  }
  return 0x80004005;
}


