/* Module: sfpagepeel.dll
   Function: FUN_00413f30
   Address: 00413f30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00413f30(HWND param_1)

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
  piVar2 = FUN_00413fb0(DAT_0047d9f0,(LPCSTR)(DAT_0047dc9c & 0xffff));
  dwNewLong[3] = piVar2;
  piVar2 = FUN_00413fb0(DAT_0047d9f0,(LPCSTR)(DAT_0047dca0 & 0xffff));
  dwNewLong[4] = piVar2;
  dwNewLong[0xe] = 0;
  return 1;
}


