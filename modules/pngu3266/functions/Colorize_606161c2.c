/* Module: pngu3266.dll
   Function: Colorize
   Address: 606161c2
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall XPNGifImage::Colorize(class CPNColor const &) */

int __thiscall XPNGifImage::Colorize(XPNGifImage *this,CPNColor *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  uint local_18;
  ulong local_14;
  ulong local_10;
  ulong local_c;
  XPNGifImage *local_8;
  
                    /* 0x261c2  868  ?Colorize@XPNGifImage@@UAEHABVCPNColor@@@Z */
  iVar3 = (**(code **)(*(int *)this + 0x44))();
  iVar4 = 0;
  if ((iVar3 != 0) && (iVar4 = 0, *(int *)(this + 0x20) == 0)) {
    local_c = 0;
    local_10 = 0;
    local_14 = 0;
    GetRGBIndices(this,&local_c,&local_10,&local_14);
    iVar3 = *(int *)(this + 0x2a);
    iVar4 = iVar3 + 0x28;
    if ((*(int *)(iVar3 + 0x20) == 0) && (*(ushort *)(iVar3 + 0xe) < 9)) {
      local_18 = 1 << ((byte)*(ushort *)(iVar3 + 0xe) & 0x1f);
    }
    else {
      local_18 = (uint)*(ushort *)(iVar3 + 0x20);
    }
    local_18 = local_18 & 0xffff;
    if (local_18 != 0) {
      local_8 = this + 0x32;
      do {
        if (*(int *)local_8 == 1) {
          puVar1 = (undefined1 *)(iVar4 + local_c);
          uVar2 = ftol();
          *puVar1 = uVar2;
          uVar2 = ftol();
          *(undefined1 *)(iVar4 + local_10) = uVar2;
          uVar2 = ftol();
          *(undefined1 *)(iVar4 + local_14) = uVar2;
        }
        local_8 = local_8 + 4;
        iVar4 = iVar4 + 4;
        local_18 = local_18 - 1;
      } while (local_18 != 0);
    }
    iVar4 = 1;
  }
  return iVar4;
}


