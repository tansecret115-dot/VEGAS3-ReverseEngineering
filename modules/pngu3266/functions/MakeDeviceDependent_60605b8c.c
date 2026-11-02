/* Module: pngu3266.dll
   Function: MakeDeviceDependent
   Address: 60605b8c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNGifImage::MakeDeviceDependent(class CPNDC *) */

int __thiscall CPNGifImage::MakeDeviceDependent(CPNGifImage *this,CPNDC *param_1)

{
  HDC hdc;
  BITMAPINFOHEADER *pbmi;
  HBITMAP pHVar1;
  int iVar2;
  
                    /* 0x15b8c  1552  ?MakeDeviceDependent@CPNGifImage@@UAEHPAVCPNDC@@@Z */
  if (*(int *)(this + 0x20) == 0) {
    hdc = *(HDC *)(param_1 + 0x1cf);
    if ((*(HGDIOBJ *)(this + 0x14) != (HGDIOBJ)0x0) && (*(int *)(this + 0x18) == 0)) {
      DeleteObject(*(HGDIOBJ *)(this + 0x14));
      *(undefined4 *)(this + 0x14) = 0;
    }
    pbmi = *(BITMAPINFOHEADER **)(this + 0x2a);
    pbmi->biHeight = -pbmi->biHeight;
    pHVar1 = CreateDIBitmap(hdc,pbmi,4,*(void **)(this + 0x2e),(BITMAPINFO *)pbmi,0);
    *(HBITMAP *)(this + 0x14) = pHVar1;
    if (pHVar1 != (HBITMAP)0x0) {
      *(undefined4 *)(this + 0x20) = 1;
      *(undefined4 *)(this + 0x1c) = 1;
      if (*(void **)(this + 0x2a) != (void *)0x0) {
        operator_delete(*(void **)(this + 0x2a));
        *(undefined4 *)(this + 0x2a) = 0;
      }
      if (*(void **)(this + 0x2e) != (void *)0x0) {
        operator_delete(*(void **)(this + 0x2e));
        *(undefined4 *)(this + 0x2e) = 0;
      }
    }
    iVar2 = *(int *)(this + 0x20);
  }
  else {
    iVar2 = 1;
  }
  return iVar2;
}


