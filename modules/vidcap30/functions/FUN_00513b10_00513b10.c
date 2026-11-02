/* Module: vidcap30.exe
   Function: FUN_00513b10
   Address: 00513b10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00513b10(HWND param_1,int param_2)

{
  undefined4 *dwNewLong;
  undefined4 uVar1;
  LRESULT LVar2;
  
  dwNewLong = LocalAlloc(0x40,0xc0);
  if (dwNewLong == (undefined4 *)0x0) {
    return 0;
  }
  SetWindowLongA(param_1,0,(LONG)dwNewLong);
  *dwNewLong = param_1;
  dwNewLong[1] = 0;
  dwNewLong[0xc] = 0;
  dwNewLong[0x1b] = 0;
  dwNewLong[0x1c] = 0;
  uVar1 = _SfGetUIColor_4(0x8c);
  dwNewLong[2] = uVar1;
  dwNewLong[4] = 0xffffffff;
  dwNewLong[5] = 0xffffffff;
  dwNewLong[0xd] = 0xffffffff;
  dwNewLong[0xe] = 0xffffffff;
  dwNewLong[3] = 0;
  dwNewLong[6] = 0;
  dwNewLong[10] = 0;
  dwNewLong[0xb] = 0;
  dwNewLong[0x13] = 0;
  dwNewLong[0x14] = 0;
  dwNewLong[0x15] = 0;
  dwNewLong[0x16] = 0;
  dwNewLong[7] = 0;
  dwNewLong[0x17] = 0;
  dwNewLong[0x19] = 0;
  dwNewLong[0x1a] = 1;
  dwNewLong[0x22] = 0;
  dwNewLong[0x23] = 100;
  dwNewLong[0x24] = 0;
  dwNewLong[0x25] = 100;
  LVar2 = SendMessageA(param_1,0x601,0,2);
  if (LVar2 != 2) {
    return 0;
  }
  SendMessageA(param_1,0x60f,0,2);
  dwNewLong[0x29] = 0;
  dwNewLong[0x2a] = 0;
  dwNewLong[0x2e] = 0;
  dwNewLong[0x2b] = 0;
  dwNewLong[0x2c] = 0;
  dwNewLong[0x2f] = 0;
  SetWindowTextA(param_1,*(LPCSTR *)(param_2 + 0x24));
  return 1;
}


