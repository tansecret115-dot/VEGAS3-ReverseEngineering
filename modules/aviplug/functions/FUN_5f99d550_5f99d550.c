/* Module: aviplug.dll
   Function: FUN_5f99d550
   Address: 5f99d550
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f99d550(HWND param_1)

{
  HLOCAL hMem;
  
  hMem = (HLOCAL)GetWindowLongA(param_1,0);
  if (hMem != (HLOCAL)0x0) {
    LocalFree(hMem);
    SetWindowLongA(param_1,0,0);
  }
  return;
}


