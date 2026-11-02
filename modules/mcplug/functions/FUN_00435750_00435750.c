/* Module: mcplug.dll
   Function: FUN_00435750
   Address: 00435750
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00435750(HWND param_1)

{
  HLOCAL hMem;
  
  hMem = (HLOCAL)GetWindowLongA(param_1,0);
  if (hMem != (HLOCAL)0x0) {
    LocalFree(hMem);
    SetWindowLongA(param_1,0,0);
  }
  return;
}


