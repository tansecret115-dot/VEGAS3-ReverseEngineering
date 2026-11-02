/* Module: sftrans1.dll
   Function: FUN_004b50c0
   Address: 004b50c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004b50c0(HWND param_1)

{
  undefined4 *dwNewLong;
  undefined4 uVar1;
  
  dwNewLong = LocalAlloc(0x40,0x60);
  if (dwNewLong == (undefined4 *)0x0) {
    return 0;
  }
  SetWindowLongA(param_1,0,(LONG)dwNewLong);
  *dwNewLong = param_1;
  uVar1 = DrawDibOpen();
  dwNewLong[5] = uVar1;
  uVar1 = FUN_004b5140(DAT_0057b888,DAT_0057b848 & 0xffff);
  dwNewLong[3] = uVar1;
  uVar1 = FUN_004b5140(DAT_0057b888,DAT_0057b84c & 0xffff);
  dwNewLong[4] = uVar1;
  dwNewLong[0xe] = 0;
  return 1;
}


