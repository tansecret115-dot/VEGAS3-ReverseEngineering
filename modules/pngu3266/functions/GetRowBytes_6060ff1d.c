/* Module: pngu3266.dll
   Function: GetRowBytes
   Address: 6060ff1d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual unsigned long __thiscall XPNBitmapImage::GetRowBytes(void) */

ulong __thiscall XPNBitmapImage::GetRowBytes(XPNBitmapImage *this)

{
  ulong uVar1;
  uint uVar2;
  
                    /* 0x1ff1d  1322  ?GetRowBytes@XPNBitmapImage@@MAEKXZ */
  uVar1 = CPNSystemInfo::GetMaxMonitorDepth();
  if (uVar1 < 8) {
    uVar2 = (uint)((ulonglong)*(uint *)(this + 0xc) / (8 / (ulonglong)uVar1));
    if ((int)((ulonglong)*(uint *)(this + 0xc) % (8 / (ulonglong)uVar1)) != 0) {
      uVar2 = uVar2 + 1;
    }
  }
  else {
    uVar2 = *(int *)(this + 0xc) * (uVar1 >> 3);
  }
  if ((uVar2 & 3) != 0) {
    uVar2 = uVar2 + (4 - (uVar2 & 3));
  }
  return uVar2;
}


