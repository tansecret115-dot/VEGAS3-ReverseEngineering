/* Module: pngu3266.dll
   Function: CreateBlankImage
   Address: 605f4c8a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNBitmapImage::CreateBlankImage(class CPNDC const &,class
   CPNxSize const &) */

int __thiscall
CPNBitmapImage::CreateBlankImage(CPNBitmapImage *this,CPNDC *param_1,CPNxSize *param_2)

{
  HBITMAP pHVar1;
  
                    /* 0x4c8a  931  ?CreateBlankImage@CPNBitmapImage@@UAEHABVCPNDC@@ABVCPNxSize@@@Z
                        */
  if (*(HGDIOBJ *)(this + 0x14) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(this + 0x14));
    *(undefined4 *)(this + 0x14) = 0;
  }
  pHVar1 = CreateCompatibleBitmap(*(HDC *)(param_1 + 0x1cf),*(int *)param_2,*(int *)(param_2 + 4));
  *(HBITMAP *)(this + 0x14) = pHVar1;
  if (pHVar1 != (HBITMAP)0x0) {
    *(undefined4 *)(this + 0x20) = 1;
    *(undefined4 *)(this + 0x1c) = 1;
    *(undefined4 *)(this + 0xc) = *(undefined4 *)param_2;
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_2 + 4);
  }
  return (uint)(pHVar1 != (HBITMAP)0x0);
}


