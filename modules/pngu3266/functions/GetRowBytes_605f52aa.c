/* Module: pngu3266.dll
   Function: GetRowBytes
   Address: 605f52aa
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNBitmapImage::GetRowBytes(void) */

ulong __thiscall CPNBitmapImage::GetRowBytes(CPNBitmapImage *this)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
                    /* 0x52aa  1321  ?GetRowBytes@CPNBitmapImage@@UAEKXZ */
  uVar2 = 0;
  iVar1 = *(int *)(this + 0x2b);
  if (iVar1 != 0) {
    uVar3 = (uint)*(ushort *)(iVar1 + 0xc) * (uint)*(ushort *)(iVar1 + 0xe);
    if (uVar3 < 8) {
      uVar2 = (uint)((ulonglong)*(uint *)(iVar1 + 4) / (8 / (ulonglong)uVar3));
      if ((int)((ulonglong)*(uint *)(iVar1 + 4) % (8 / (ulonglong)uVar3)) != 0) {
        uVar2 = uVar2 + 1;
      }
    }
    else {
      uVar2 = (uVar3 >> 3) * *(int *)(iVar1 + 4);
    }
    if ((uVar2 & 3) != 0) {
      uVar2 = uVar2 + (4 - (uVar2 & 3));
    }
  }
  return uVar2;
}


