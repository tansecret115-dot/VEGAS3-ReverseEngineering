/* Module: vidpcore.dll
   Function: FUN_5deb2650
   Address: 5deb2650
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5deb2650(HWND param_1)

{
  HLOCAL hMem;
  
  hMem = (HLOCAL)GetWindowLongA(param_1,0);
  if (hMem != (HLOCAL)0x0) {
    LocalFree(hMem);
    SetWindowLongA(param_1,0,0);
  }
  return;
}


