/* Module: encn3260.dll
   Function: FUN_664a4fd0
   Address: 664a4fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664a4fd0(undefined4 *param_1)

{
  if ((HWND)param_1[3] != (HWND)0x0) {
    DestroyWindow((HWND)param_1[3]);
    param_1[3] = 0;
  }
  if ((HWND)*param_1 != (HWND)0x0) {
    DestroyWindow((HWND)*param_1);
    *param_1 = 0;
    FUN_664a4ef0();
    return 0;
  }
  return 0x80004005;
}


