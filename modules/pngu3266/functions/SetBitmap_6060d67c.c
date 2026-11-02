/* Module: pngu3266.dll
   Function: SetBitmap
   Address: 6060d67c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual class CPNBitmapImage * __thiscall XPNDC::SetBitmap(class CPNBitmapImage *) */

CPNBitmapImage * __thiscall XPNDC::SetBitmap(XPNDC *this,CPNBitmapImage *param_1)

{
  int iVar1;
  CPNBitmapImage *this_00;
  
                    /* 0x1d67c  1833  ?SetBitmap@XPNDC@@UAEPAVCPNBitmapImage@@PAV2@@Z */
  if (param_1 == (CPNBitmapImage *)0x0) {
    this_00 = (CPNBitmapImage *)(this + 0xce);
  }
  else {
    this_00 = *(CPNBitmapImage **)(this + 0x10);
    CPNGraphicResource::LockResource((CPNGraphicResource *)param_1);
    iVar1 = (**(code **)(*(int *)this + 0xcc))(param_1);
    if (iVar1 != 0) {
      if (this_00 != (CPNBitmapImage *)0x0) {
        CPNGraphicResource::UnLockResource((CPNGraphicResource *)this_00);
      }
      *(CPNBitmapImage **)(this + 0x10) = param_1;
    }
  }
  return this_00;
}


