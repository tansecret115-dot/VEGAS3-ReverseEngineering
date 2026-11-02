/* Module: sfpagepeel.dll
   Function: FUN_0041b530
   Address: 0041b530
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041b530(HWND param_1)

{
  HLOCAL hMem;
  
  hMem = (HLOCAL)GetWindowLongA(param_1,0);
  LocalFree(hMem);
  SetWindowLongA(param_1,0,0);
  return;
}


