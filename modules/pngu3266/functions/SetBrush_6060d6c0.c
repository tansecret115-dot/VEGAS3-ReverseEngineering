/* Module: pngu3266.dll
   Function: SetBrush
   Address: 6060d6c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNBrush * __thiscall XPNDC::SetBrush(class CPNBrush *) */

CPNBrush * __thiscall XPNDC::SetBrush(XPNDC *this,CPNBrush *param_1)

{
  int iVar1;
  CPNBrush *this_00;
  
                    /* 0x1d6c0  1839  ?SetBrush@XPNDC@@QAEPAVCPNBrush@@PAV2@@Z */
  if (param_1 == (CPNBrush *)0x0) {
    this_00 = (CPNBrush *)(this + 0x97);
  }
  else {
    this_00 = *(CPNBrush **)(this + 0xc);
    CPNGraphicResource::LockResource((CPNGraphicResource *)param_1);
    iVar1 = (**(code **)(*(int *)this + 0xc0))(param_1);
    if (iVar1 != 0) {
      if (this_00 != (CPNBrush *)0x0) {
        CPNGraphicResource::UnLockResource((CPNGraphicResource *)this_00);
      }
      *(CPNBrush **)(this + 0xc) = param_1;
    }
  }
  return this_00;
}


