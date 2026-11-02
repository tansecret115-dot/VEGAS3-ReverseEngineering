/* Module: pngu3266.dll
   Function: SetFont
   Address: 6060d5b3
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNFont * __thiscall XPNDC::SetFont(class CPNFont *) */

CPNFont * __thiscall XPNDC::SetFont(XPNDC *this,CPNFont *param_1)

{
  int iVar1;
  CPNFont *this_00;
  
                    /* 0x1d5b3  1912  ?SetFont@XPNDC@@QAEPAVCPNFont@@PAV2@@Z */
  if (param_1 == (CPNFont *)0x0) {
    this_00 = (CPNFont *)(this + 0x101);
  }
  else {
    this_00 = *(CPNFont **)(this + 0x14);
    CPNGraphicResource::LockResource((CPNGraphicResource *)param_1);
    iVar1 = (**(code **)(*(int *)this + 0xc4))(param_1);
    if (iVar1 != 0) {
      if (this_00 != (CPNFont *)0x0) {
        CPNGraphicResource::UnLockResource((CPNGraphicResource *)this_00);
      }
      *(CPNFont **)(this + 0x14) = param_1;
    }
  }
  return this_00;
}


