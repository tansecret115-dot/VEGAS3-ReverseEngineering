/* Module: sfppack1.dll
   Function: FUN_5cddf1e0
   Address: 5cddf1e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cddf1e0(HWND param_1)

{
  undefined4 *dwNewLong;
  
  dwNewLong = LocalAlloc(0x40,0x2c);
  if (dwNewLong == (undefined4 *)0x0) {
    return 0;
  }
  SetWindowLongA(param_1,4,(LONG)dwNewLong);
  *dwNewLong = param_1;
  dwNewLong[1] = 0;
  dwNewLong[5] = 0;
  dwNewLong[3] = 0;
  dwNewLong[7] = 0;
  dwNewLong[8] = 0;
  dwNewLong[9] = 0;
  dwNewLong[10] = 0;
  return 1;
}


