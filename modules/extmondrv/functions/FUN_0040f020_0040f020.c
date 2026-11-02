/* Module: extmondrv.dll
   Function: FUN_0040f020
   Address: 0040f020
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040f020(HWND param_1)

{
  HLOCAL hMem;
  
  hMem = (HLOCAL)GetWindowLongA(param_1,0);
  if (hMem != (HLOCAL)0x0) {
    LocalFree(hMem);
    SetWindowLongA(param_1,0,0);
  }
  return;
}


