/* Module: pngu3266.dll
   Function: CopyImage
   Address: 605f46ec
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: int __thiscall CPNBitmapImage::CopyImage(class CPNBitmapImage const &) */

int __thiscall CPNBitmapImage::CopyImage(CPNBitmapImage *this,CPNBitmapImage *param_1)

{
  int iVar1;
  int iVar2;
  
                    /* 0x46ec  889  ?CopyImage@CPNBitmapImage@@IAEHABV1@@Z */
  (**(code **)(*(int *)this + 0x58))();
  operator=(this,param_1);
  iVar1 = (**(code **)(*(int *)param_1 + 4))();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = (**(code **)(*(int *)param_1 + 0x18))();
    if (iVar2 == 0) {
      *(undefined4 *)(this + 0x2b) = 0;
      *(undefined4 *)(this + 0x2f) = 0;
      iVar2 = CopyDIBBits(this,*(tagBITMAPINFO **)(param_1 + 0x2b));
    }
    else {
      *(undefined4 *)(this + 0x14) = 0;
      CPNImage::DeviceDependentImageCopy((CPNImage *)this,*(ulong *)(param_1 + 0x14));
      iVar2 = 1;
    }
  }
  return iVar2;
}


