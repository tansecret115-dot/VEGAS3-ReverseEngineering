/* Module: sftrans1.dll
   Function: FUN_004c37b0
   Address: 004c37b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c37b0(HWND param_1)

{
  HLOCAL hMem;
  
  hMem = (HLOCAL)GetWindowLongA(param_1,0);
  if (hMem != (HLOCAL)0x0) {
    LocalFree(hMem);
    SetWindowLongA(param_1,0,0);
  }
  return;
}


