/* Module: pngu3266.dll
   Function: CopyImage
   Address: 60615fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: int __thiscall XPNGifImage::CopyImage(class XPNGifImage const &) */

int __thiscall XPNGifImage::CopyImage(XPNGifImage *this,XPNGifImage *param_1)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  uint _Size;
  XPNGifImage *local_c;
  XPNGifImage *local_8;
  
                    /* 0x25fb0  890  ?CopyImage@XPNGifImage@@IAEHABV1@@Z */
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined2 *)(this + 0x28) = *(undefined2 *)(param_1 + 0x28);
  this[0x432] = param_1[0x432];
  local_c = this;
  local_8 = this;
  memcpy(this + 0x32,param_1 + 0x32,0x400);
  *(undefined4 *)(this + 0x14) = 0;
  if (*(int *)(this + 0x20) == 0) {
    if ((*(int *)(param_1 + 0x2a) != 0) && (*(int *)(param_1 + 0x2e) != 0)) {
      local_c = (XPNGifImage *)0x0;
      local_8 = (XPNGifImage *)0x0;
      (**(code **)(*(int *)param_1 + 0x40))(&local_c);
      iVar1 = *(int *)(param_1 + 0x2a);
      if ((*(int *)(iVar1 + 0x20) == 0) && (*(ushort *)(iVar1 + 0xe) < 9)) {
        uVar3 = 1 << ((byte)*(ushort *)(iVar1 + 0xe) & 0x1f);
      }
      else {
        uVar3 = (uint)*(ushort *)(iVar1 + 0x20);
      }
      uVar3 = (uVar3 & 0xffff) * 4 + 0x28;
      _Size = ((uint)*(ushort *)(iVar1 + 0xe) * (int)local_c + 0x1f >> 3 & 0x1ffffffc) *
              (int)local_8;
      pvVar2 = operator_new(uVar3);
      *(void **)(this + 0x2a) = pvVar2;
      pvVar2 = operator_new(_Size);
      *(void **)(this + 0x2e) = pvVar2;
      if (*(void **)(this + 0x2a) != (void *)0x0) {
        memcpy(*(void **)(this + 0x2a),*(void **)(param_1 + 0x2a),uVar3);
      }
      if (*(void **)(this + 0x2e) != (void *)0x0) {
        memcpy(*(void **)(this + 0x2e),*(void **)(param_1 + 0x2e),_Size);
      }
    }
  }
  else {
    CPNImage::DeviceDependentImageCopy((CPNImage *)this,*(ulong *)(param_1 + 0x14));
  }
  return 1;
}


