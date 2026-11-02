/* Module: pngu3266.dll
   Function: SetColorAtColorTableIndex
   Address: 605f531b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNBitmapImage::SetColorAtColorTableIndex(long,class CPNColor
   const &) */

int __thiscall
CPNBitmapImage::SetColorAtColorTableIndex(CPNBitmapImage *this,long param_1,CPNColor *param_2)

{
  uint uVar1;
  int iVar2;
  
                    /* 0x531b  1868  ?SetColorAtColorTableIndex@CPNBitmapImage@@UAEHJABVCPNColor@@@Z
                        */
  iVar2 = *(int *)(this + 0x2b);
  if ((*(int *)(iVar2 + 0x20) == 0) && (*(ushort *)(iVar2 + 0xe) < 9)) {
    uVar1 = 1 << ((byte)*(ushort *)(iVar2 + 0xe) & 0x1f);
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0x20);
  }
  if ((param_1 < 0) || ((int)((uVar1 & 0xffff) * 4) <= param_1)) {
    iVar2 = 0;
  }
  else {
    *(CPNColor *)(iVar2 + 0x2a + param_1 * 4) = param_2[0x1c];
    *(CPNColor *)(*(int *)(this + 0x2b) + 0x29 + param_1 * 4) = param_2[0x1e];
    *(CPNColor *)(*(int *)(this + 0x2b) + 0x28 + param_1 * 4) = param_2[0x1d];
    iVar2 = 1;
  }
  return iVar2;
}


