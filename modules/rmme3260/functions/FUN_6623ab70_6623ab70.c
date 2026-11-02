/* Module: rmme3260.dll
   Function: FUN_6623ab70
   Address: 6623ab70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6623ab70(undefined4 *param_1)

{
  if ((HWND)param_1[3] != (HWND)0x0) {
    DestroyWindow((HWND)param_1[3]);
    param_1[3] = 0;
  }
  if ((HWND)*param_1 != (HWND)0x0) {
    DestroyWindow((HWND)*param_1);
    *param_1 = 0;
    FUN_6623aa90();
    return 0;
  }
  return 0x80004005;
}


