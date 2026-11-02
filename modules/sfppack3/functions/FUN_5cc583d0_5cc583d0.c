/* Module: sfppack3.dll
   Function: FUN_5cc583d0
   Address: 5cc583d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc583d0(HWND param_1)

{
  HLOCAL hMem;
  
  hMem = (HLOCAL)GetWindowLongA(param_1,0);
  if (hMem != (HLOCAL)0x0) {
    LocalFree(hMem);
    SetWindowLongA(param_1,0,0);
  }
  return;
}


