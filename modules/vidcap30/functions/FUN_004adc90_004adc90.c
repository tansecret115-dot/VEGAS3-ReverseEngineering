/* Module: vidcap30.exe
   Function: FUN_004adc90
   Address: 004adc90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004adc90(HWND param_1,undefined4 param_2)

{
  void *dwNewLong;
  
  dwNewLong = calloc(1,0xc4);
  if (dwNewLong == (void *)0x0) {
    return;
  }
  SetWindowLongA(param_1,0,(LONG)dwNewLong);
  FUN_004add90(dwNewLong,param_1,param_2,FUN_004adcd0);
  return;
}


