/* Module: vegas30k.dll
   Function: FUN_010b4020
   Address: 010b4020
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010b4020(HWND param_1,int param_2)

{
  undefined4 *dwNewLong;
  
  dwNewLong = LocalAlloc(0x40,0xc);
  if (dwNewLong == (undefined4 *)0x0) {
    return 0;
  }
  SetWindowLongA(param_1,0,(LONG)dwNewLong);
  *dwNewLong = param_1;
  dwNewLong[1] = *(undefined4 *)(param_2 + 0x20);
  dwNewLong[2] = *(undefined4 *)(param_2 + 0x2c);
  return 1;
}


