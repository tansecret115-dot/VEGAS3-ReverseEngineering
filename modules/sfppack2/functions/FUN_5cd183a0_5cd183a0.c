/* Module: sfppack2.dll
   Function: FUN_5cd183a0
   Address: 5cd183a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd183a0(HWND param_1)

{
  HLOCAL hMem;
  
  hMem = (HLOCAL)GetWindowLongA(param_1,0);
  if (hMem != (HLOCAL)0x0) {
    LocalFree(hMem);
    SetWindowLongA(param_1,0,0);
  }
  return;
}


