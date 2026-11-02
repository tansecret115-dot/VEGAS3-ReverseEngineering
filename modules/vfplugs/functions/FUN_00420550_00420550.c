/* Module: vfplugs.dll
   Function: FUN_00420550
   Address: 00420550
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00420550(HWND param_1)

{
  HLOCAL hMem;
  
  hMem = (HLOCAL)GetWindowLongA(param_1,0);
  LocalFree(hMem);
  SetWindowLongA(param_1,0,0);
  return;
}


