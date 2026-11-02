/* Module: sftrkfx1.dll
   Function: FUN_5cbcd330
   Address: 5cbcd330
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbcd330(HWND param_1)

{
  HLOCAL hMem;
  
  hMem = (HLOCAL)GetWindowLongA(param_1,0);
  if (hMem != (HLOCAL)0x0) {
    LocalFree(hMem);
    SetWindowLongA(param_1,0,0);
  }
  return;
}


