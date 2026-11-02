/* Module: pngu3266.dll
   Function: SetRegion
   Address: 6060d638
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNRegion * __thiscall XPNDC::SetRegion(class CPNRegion *) */

CPNRegion * __thiscall XPNDC::SetRegion(XPNDC *this,CPNRegion *param_1)

{
  int iVar1;
  CPNRegion *this_00;
  
                    /* 0x1d638  1976  ?SetRegion@XPNDC@@QAEPAVCPNRegion@@PAV2@@Z */
  if (param_1 == (CPNRegion *)0x0) {
    this_00 = (CPNRegion *)(this + 0x135);
  }
  else {
    this_00 = *(CPNRegion **)(this + 0x18);
    CPNGraphicResource::LockResource((CPNGraphicResource *)param_1);
    iVar1 = (**(code **)(*(int *)this + 200))(param_1);
    if (iVar1 != 0) {
      if (this_00 != (CPNRegion *)0x0) {
        CPNGraphicResource::UnLockResource((CPNGraphicResource *)this_00);
      }
      *(CPNRegion **)(this + 0x18) = param_1;
    }
  }
  return this_00;
}


