/* Module: vegas30k.dll
   Function: FUN_0107a1f0
   Address: 0107a1f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0107a1f0(HWND param_1,undefined4 param_2)

{
  HLOCAL dwNewLong;
  
  dwNewLong = LocalAlloc(0x40,0x1a8);
  if (dwNewLong == (HLOCAL)0x0) {
    return;
  }
  SetWindowLongA(param_1,-0x15,(LONG)dwNewLong);
  FUN_0107a040(dwNewLong,param_1,param_2);
  return;
}


