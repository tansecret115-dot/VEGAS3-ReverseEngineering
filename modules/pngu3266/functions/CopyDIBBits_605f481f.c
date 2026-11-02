/* Module: pngu3266.dll
   Function: CopyDIBBits
   Address: 605f481f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: int __thiscall CPNBitmapImage::CopyDIBBits(struct tagBITMAPINFO *) */

int __thiscall CPNBitmapImage::CopyDIBBits(CPNBitmapImage *this,tagBITMAPINFO *param_1)

{
  ushort uVar1;
  uint uVar2;
  void *_Dst;
  int iVar3;
  
                    /* 0x481f  888  ?CopyDIBBits@CPNBitmapImage@@IAEHPAUtagBITMAPINFO@@@Z */
  if (((param_1->bmiHeader).biClrUsed == 0) && (uVar1 = (param_1->bmiHeader).biBitCount, uVar1 < 9))
  {
    uVar2 = 1 << ((byte)uVar1 & 0x1f);
  }
  else {
    uVar2 = (uint)(ushort)(param_1->bmiHeader).biClrUsed;
  }
  iVar3 = (uVar2 & 0xffff) * 4;
  uVar2 = ((uint)(ushort)((param_1->bmiHeader).biBitCount * (param_1->bmiHeader).biPlanes) *
           (param_1->bmiHeader).biWidth + 0x1f >> 3 & 0x1ffffffc) * (param_1->bmiHeader).biHeight +
          0x28 + iVar3;
  (**(code **)(*(int *)this + 0x58))();
  _Dst = operator_new(uVar2);
  *(void **)(this + 0x2b) = _Dst;
  if (_Dst != (void *)0x0) {
    memcpy(_Dst,param_1,uVar2);
    *(int *)(this + 0x2f) = iVar3 + 0x28 + *(int *)(this + 0x2b);
  }
  return (uint)(_Dst != (void *)0x0);
}


