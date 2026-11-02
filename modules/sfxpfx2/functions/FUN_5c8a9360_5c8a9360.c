/* Module: sfxpfx2.dll
   Function: FUN_5c8a9360
   Address: 5c8a9360
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c8a9360(HWND param_1)

{
  undefined4 *dwNewLong;
  undefined4 uVar1;
  int *piVar2;
  
  dwNewLong = LocalAlloc(0x40,0x60);
  if (dwNewLong == (undefined4 *)0x0) {
    return 0;
  }
  SetWindowLongA(param_1,0,(LONG)dwNewLong);
  *dwNewLong = param_1;
  uVar1 = DrawDibOpen();
  dwNewLong[5] = uVar1;
  piVar2 = FUN_5c8a93e0(DAT_5c8e93f8,(LPCSTR)(DAT_5c8e96ec & 0xffff));
  dwNewLong[3] = piVar2;
  piVar2 = FUN_5c8a93e0(DAT_5c8e93f8,(LPCSTR)(DAT_5c8e96f0 & 0xffff));
  dwNewLong[4] = piVar2;
  dwNewLong[0xe] = 0;
  return 1;
}


