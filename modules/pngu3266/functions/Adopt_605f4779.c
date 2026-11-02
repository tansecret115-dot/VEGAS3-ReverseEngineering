/* Module: pngu3266.dll
   Function: Adopt
   Address: 605f4779
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNBitmapImage::Adopt(unsigned long) */

int __thiscall CPNBitmapImage::Adopt(CPNBitmapImage *this,ulong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  
                    /* 0x4779  796  ?Adopt@CPNBitmapImage@@UAEHK@Z */
  if ((*(int *)(this + 0x18) == 0) && (param_1 != 0)) {
    iVar2 = GetObjectA((HANDLE)param_1,0x18,local_1c);
    if (iVar2 == 0) {
      if (*(int *)param_1 == 0x28) {
        uVar1 = *(undefined4 *)(param_1 + 8);
        *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 4);
        *(undefined4 *)(this + 0x10) = uVar1;
        *(undefined4 *)(this + 0x20) = 0;
        iVar2 = CopyDIBBits(this,(tagBITMAPINFO *)param_1);
        *(int *)(this + 0x1c) = iVar2;
      }
    }
    else {
      *(undefined4 *)(this + 0xc) = local_18;
      *(undefined4 *)(this + 0x10) = local_14;
      *(ulong *)(this + 0x14) = param_1;
      *(undefined4 *)(this + 0x1c) = 1;
    }
    iVar2 = *(int *)(this + 0x1c);
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}


