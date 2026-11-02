/* Module: encn3260.dll
   Function: FUN_664b0790
   Address: 664b0790
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664b0790(undefined4 *param_1)

{
  if ((HWND)*param_1 != (HWND)0x0) {
    ShowWindow((HWND)*param_1,0);
    return 0;
  }
  return 0x80004005;
}


