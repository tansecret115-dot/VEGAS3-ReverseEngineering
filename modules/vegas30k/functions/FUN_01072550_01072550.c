/* Module: vegas30k.dll
   Function: FUN_01072550
   Address: 01072550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01072550(HWND param_1,int param_2)

{
  undefined4 *dwNewLong;
  
  dwNewLong = LocalAlloc(0x40,0x18);
  if (dwNewLong == (undefined4 *)0x0) {
    return 0;
  }
  SetWindowLongA(param_1,-0x15,(LONG)dwNewLong);
  *dwNewLong = param_1;
  dwNewLong[1] = 0;
  dwNewLong[4] = 100;
  dwNewLong[5] = 0;
  dwNewLong[2] = *(uint *)(param_2 + 0x20) >> 0xf & 1;
  SetWindowTextA(param_1,*(LPCSTR *)(param_2 + 0x24));
  return 1;
}


