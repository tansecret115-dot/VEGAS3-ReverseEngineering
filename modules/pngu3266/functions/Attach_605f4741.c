/* Module: pngu3266.dll
   Function: Attach
   Address: 605f4741
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNBitmapImage::Attach(struct HBITMAP__ *) */

void __thiscall CPNBitmapImage::Attach(CPNBitmapImage *this,HBITMAP__ *param_1)

{
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  
                    /* 0x4741  803  ?Attach@CPNBitmapImage@@UAEXPAUHBITMAP__@@@Z */
  (**(code **)(*(int *)this + 0x58))();
  XPNImage::Attach((XPNImage *)this,(ulong)param_1);
  GetObjectA(*(HANDLE *)(this + 0x14),0x18,local_1c);
  *(undefined4 *)(this + 0xc) = local_18;
  *(undefined4 *)(this + 0x10) = local_14;
  return;
}


