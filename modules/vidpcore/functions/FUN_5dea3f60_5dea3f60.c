/* Module: vidpcore.dll
   Function: FUN_5dea3f60
   Address: 5dea3f60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5dea3f60(HWND param_1)

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
  uVar1 = FUN_5dea3fe0(DAT_5df42ed8,DAT_5df43184 & 0xffff);
  dwNewLong[3] = uVar1;
  uVar1 = FUN_5dea3fe0(DAT_5df42ed8,DAT_5df43188 & 0xffff);
  dwNewLong[4] = uVar1;
  dwNewLong[0xe] = 0;
  return 1;
}


