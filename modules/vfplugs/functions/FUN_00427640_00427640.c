/* Module: vfplugs.dll
   Function: FUN_00427640
   Address: 00427640
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00427640(HWND param_1)

{
  HLOCAL hMem;
  
  hMem = (HLOCAL)GetWindowLongA(param_1,0);
  if (hMem != (HLOCAL)0x0) {
    LocalFree(hMem);
    SetWindowLongA(param_1,0,0);
  }
  return;
}


