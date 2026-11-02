/* Module: pngu3266.dll
   Function: LoadFromResource
   Address: 605f47e6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNBitmapImage::LoadFromResource(unsigned long) */

int __thiscall CPNBitmapImage::LoadFromResource(CPNBitmapImage *this,ulong param_1)

{
  LONG LVar1;
  tagBITMAPINFO *ptVar2;
  int iVar3;
  
                    /* 0x47e6  1538  ?LoadFromResource@CPNBitmapImage@@UAEHK@Z */
  (**(code **)(*(int *)this + 0x58))();
  ptVar2 = (tagBITMAPINFO *)FUN_6061d9d0(param_1);
  iVar3 = 0;
  if (ptVar2 != (tagBITMAPINFO *)0x0) {
    LVar1 = (ptVar2->bmiHeader).biWidth;
    *(LONG *)(this + 0x10) = (ptVar2->bmiHeader).biHeight;
    *(LONG *)(this + 0xc) = LVar1;
    *(undefined4 *)(this + 0x20) = 0;
    *(undefined4 *)(this + 0x1c) = 1;
    iVar3 = CopyDIBBits(this,ptVar2);
  }
  return iVar3;
}


