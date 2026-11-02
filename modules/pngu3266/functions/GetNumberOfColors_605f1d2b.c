/* Module: pngu3266.dll
   Function: GetNumberOfColors
   Address: 605f1d2b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual unsigned long __thiscall CPNBitmapImage::GetNumberOfColors(void) */

ulong __thiscall CPNBitmapImage::GetNumberOfColors(CPNBitmapImage *this)

{
  int iVar1;
  uint uVar2;
  
                    /* 0x1d2b  1282  ?GetNumberOfColors@CPNBitmapImage@@MAEKXZ */
  iVar1 = *(int *)(this + 0x2b);
  if (iVar1 != 0) {
    if ((*(int *)(iVar1 + 0x20) == 0) && (*(ushort *)(iVar1 + 0xe) < 9)) {
      uVar2 = 1 << ((byte)*(ushort *)(iVar1 + 0xe) & 0x1f);
    }
    else {
      uVar2 = (uint)*(ushort *)(iVar1 + 0x20);
    }
    return uVar2 & 0xffff;
  }
  return 0;
}


