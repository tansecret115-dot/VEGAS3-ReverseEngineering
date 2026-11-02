/* Module: vidcap30.exe
   Function: FUN_0051f430
   Address: 0051f430
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0051f430(HWND param_1,undefined4 param_2)

{
  void *dwNewLong;
  
  dwNewLong = calloc(1,0x124);
  if (dwNewLong == (void *)0x0) {
    return;
  }
  SetWindowLongA(param_1,0,(LONG)dwNewLong);
  FUN_0051f5a0(dwNewLong,param_1,param_2,FUN_0051f470);
  return;
}


