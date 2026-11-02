/* Module: encn3260.dll
   Function: FUN_664b0760
   Address: 664b0760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664b0760(undefined4 *param_1)

{
  if ((HWND)*param_1 != (HWND)0x0) {
    SetWindowPos((HWND)*param_1,(HWND)0x0,0,0,0,0,0x43);
    return 0;
  }
  return 0x80004005;
}


