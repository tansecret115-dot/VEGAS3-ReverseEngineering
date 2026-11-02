/* Module: vidcap30.exe
   Function: FUN_004b2c50
   Address: 004b2c50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004b2c50(HWND param_1,undefined4 param_2)

{
  HLOCAL dwNewLong;
  
  dwNewLong = LocalAlloc(0x40,0xcc);
  if (dwNewLong == (HLOCAL)0x0) {
    return;
  }
  SetWindowLongA(param_1,0,(LONG)dwNewLong);
  FUN_004b2a30(dwNewLong,param_1,param_2,FUN_004af840);
  return;
}


