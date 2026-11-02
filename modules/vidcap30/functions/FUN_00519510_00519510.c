/* Module: vidcap30.exe
   Function: FUN_00519510
   Address: 00519510
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00519510(HWND param_1,undefined4 param_2)

{
  void *dwNewLong;
  
  dwNewLong = calloc(1,0x2a0);
  if (dwNewLong == (void *)0x0) {
    return;
  }
  SetWindowLongA(param_1,0,(LONG)dwNewLong);
  FUN_005195c0(dwNewLong,param_1,param_2,FUN_00519550);
  return;
}


