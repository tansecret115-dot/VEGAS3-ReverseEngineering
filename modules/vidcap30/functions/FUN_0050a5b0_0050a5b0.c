/* Module: vidcap30.exe
   Function: FUN_0050a5b0
   Address: 0050a5b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0050a5b0(HWND param_1,int param_2)

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


