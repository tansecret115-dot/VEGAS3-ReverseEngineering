/* Module: vidpcore.dll
   Function: FUN_5deab560
   Address: 5deab560
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5deab560(HWND param_1)

{
  HLOCAL hMem;
  
  hMem = (HLOCAL)GetWindowLongA(param_1,0);
  LocalFree(hMem);
  SetWindowLongA(param_1,0,0);
  return;
}


