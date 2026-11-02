/* Module: pngu3266.dll
   Function: CopyBitmapInfo
   Address: 605f48a1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: int __thiscall CPNBitmapImage::CopyBitmapInfo(struct tagBITMAPINFO *) */

int __thiscall CPNBitmapImage::CopyBitmapInfo(CPNBitmapImage *this,tagBITMAPINFO *param_1)

{
  ushort uVar1;
  DWORD DVar2;
  int iVar3;
  void *_Dst;
  
                    /* 0x48a1  887  ?CopyBitmapInfo@CPNBitmapImage@@IAEHPAUtagBITMAPINFO@@@Z */
  uVar1 = (param_1->bmiHeader).biBitCount;
  if (uVar1 < 9) {
    DVar2 = (param_1->bmiHeader).biClrUsed;
    if (DVar2 == 0) {
      DVar2 = 1 << ((byte)uVar1 & 0x1f);
    }
  }
  else {
    if (((uVar1 == 0x10) || (uVar1 == 0x20)) && ((param_1->bmiHeader).biCompression == 3)) {
      iVar3 = (param_1->bmiHeader).biClrUsed * 4 + 0xc;
      goto LAB_605f48e6;
    }
    DVar2 = (param_1->bmiHeader).biClrUsed;
  }
  iVar3 = DVar2 << 2;
LAB_605f48e6:
  (**(code **)(*(int *)this + 0x58))();
  _Dst = operator_new(iVar3 + 0x28U);
  *(void **)(this + 0x2b) = _Dst;
  if (_Dst != (void *)0x0) {
    memcpy(_Dst,param_1,iVar3 + 0x28U);
  }
  return (uint)(_Dst != (void *)0x0);
}


