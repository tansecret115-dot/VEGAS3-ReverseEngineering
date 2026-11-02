/* Module: pngu3266.dll
   Function: GetImageSize
   Address: 605f1bf2
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNImage::GetImageSize(class CPNxSize &)const  */

void __thiscall XPNImage::GetImageSize(XPNImage *this,CPNxSize *param_1)

{
                    /* 0x1bf2  1221  ?GetImageSize@XPNImage@@UBEXAAVCPNxSize@@@Z */
  *(undefined4 *)param_1 = *(undefined4 *)(this + 0xc);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0x10);
  return;
}


