/* Module: pngu3266.dll
   Function: ConvertToGrayscale
   Address: 606160cf
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall XPNGifImage::ConvertToGrayscale(void) */

int __thiscall XPNGifImage::ConvertToGrayscale(XPNGifImage *this)

{
  XPNGifImage *pXVar1;
  int iVar2;
  XPNGifImage XVar3;
  int iVar4;
  uint local_18;
  ulong local_14;
  XPNGifImage *local_10;
  ulong local_c;
  ulong local_8;
  
                    /* 0x260cf  885  ?ConvertToGrayscale@XPNGifImage@@UAEHXZ */
  iVar4 = 0;
  if ((*(int *)(this + 0x20) == 0) && (*(int *)(this + 0x2a) != 0)) {
    local_14 = 0;
    local_8 = 0;
    local_c = 0;
    GetRGBIndices(this,&local_14,&local_8,&local_c);
    iVar2 = *(int *)(this + 0x2a);
    iVar4 = iVar2 + 0x28;
    if ((*(int *)(iVar2 + 0x20) == 0) && (*(ushort *)(iVar2 + 0xe) < 9)) {
      local_18 = 1 << ((byte)*(ushort *)(iVar2 + 0xe) & 0x1f);
    }
    else {
      local_18 = (uint)*(ushort *)(iVar2 + 0x20);
    }
    local_18 = local_18 & 0xffff;
    if (local_18 != 0) {
      local_10 = this + 0x32;
      do {
        if (*(int *)local_10 == 1) {
          pXVar1 = (XPNGifImage *)(iVar4 + local_14);
          XVar3 = (XPNGifImage)ftol();
          *pXVar1 = XVar3;
          *(XPNGifImage *)(iVar4 + local_8) = XVar3;
          *(XPNGifImage *)(iVar4 + local_c) = XVar3;
          if ((byte)this[0x432] < (byte)XVar3) {
            this[0x432] = XVar3;
          }
        }
        local_10 = local_10 + 4;
        iVar4 = iVar4 + 4;
        local_18 = local_18 - 1;
      } while (local_18 != 0);
    }
    iVar4 = 1;
  }
  return iVar4;
}


