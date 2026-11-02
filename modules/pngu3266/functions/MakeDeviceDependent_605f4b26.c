/* Module: pngu3266.dll
   Function: MakeDeviceDependent
   Address: 605f4b26
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNBitmapImage::MakeDeviceDependent(class CPNDC *) */

int __thiscall CPNBitmapImage::MakeDeviceDependent(CPNBitmapImage *this,CPNDC *param_1)

{
  HDC hdc;
  HBITMAP pHVar1;
  int iVar2;
  
                    /* 0x4b26  1551  ?MakeDeviceDependent@CPNBitmapImage@@UAEHPAVCPNDC@@@Z */
  if (*(int *)(this + 0x20) == 0) {
    hdc = *(HDC *)(param_1 + 0x1cf);
    if (*(HGDIOBJ *)(this + 0x14) != (HGDIOBJ)0x0) {
      DeleteObject(*(HGDIOBJ *)(this + 0x14));
    }
    pHVar1 = CreateDIBitmap(hdc,*(BITMAPINFOHEADER **)(this + 0x2b),4,*(void **)(this + 0x2f),
                            (BITMAPINFO *)*(BITMAPINFOHEADER **)(this + 0x2b),0);
    *(HBITMAP *)(this + 0x14) = pHVar1;
    if (pHVar1 != (HBITMAP)0x0) {
      *(undefined4 *)(this + 0x2f) = 0;
      *(undefined4 *)(this + 0x20) = 1;
      *(undefined4 *)(this + 0x1c) = 1;
      if (*(void **)(this + 0x2b) != (void *)0x0) {
        operator_delete(*(void **)(this + 0x2b));
        *(undefined4 *)(this + 0x2b) = 0;
      }
    }
    iVar2 = *(int *)(this + 0x20);
  }
  else {
    iVar2 = 1;
  }
  return iVar2;
}


