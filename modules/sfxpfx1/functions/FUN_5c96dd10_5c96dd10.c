/* Module: sfxpfx1.dll
   Function: FUN_5c96dd10
   Address: 5c96dd10
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5c96dd10(int param_1)

{
  HDC hdc;
  HBITMAP h;
  DWORD DVar1;
  uint uVar2;
  uint uVar3;
  undefined1 local_18 [16];
  ushort uStack_8;
  ushort local_6;
  
  hdc = GetDC((HWND)0x0);
  h = CreateCompatibleBitmap(hdc,1,1);
  DVar1 = GetSysColor(param_1);
  GetObjectA(h,0x18,local_18);
  DeleteObject(h);
  ReleaseDC((HWND)0x0,hdc);
  if (8 < (int)((uint)local_6 * (uint)uStack_8)) {
    uVar2 = FUN_5c96d9f0(DVar1);
    uVar3 = uVar2 >> 0x10 & 0xff;
    if ((((byte)(uVar2 >> 8) < 0x14) && (uVar3 < 0x96)) && (0x5a < uVar3)) {
      uVar2 = FUN_5c96db90(((uint)(byte)((-(0x78 < uVar3) & 0x3cU) + 0x5a) << 8 | uVar2 & 0xff) << 8
                           | uVar2 & 0xff);
      return uVar2;
    }
  }
  return DVar1;
}


