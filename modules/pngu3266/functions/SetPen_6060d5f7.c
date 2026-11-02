/* Module: pngu3266.dll
   Function: SetPen
   Address: 6060d5f7
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNPen * __thiscall XPNDC::SetPen(class CPNPen *) */

CPNPen * __thiscall XPNDC::SetPen(XPNDC *this,CPNPen *param_1)

{
  int iVar1;
  CPNPen *this_00;
  
                    /* 0x1d5f7  1960  ?SetPen@XPNDC@@QAEPAVCPNPen@@PAV2@@Z */
  if (param_1 == (CPNPen *)0x0) {
    this_00 = (CPNPen *)(this + 0x2c);
  }
  else {
    this_00 = *(CPNPen **)(this + 8);
    CPNGraphicResource::LockResource((CPNGraphicResource *)param_1);
    iVar1 = (**(code **)(*(int *)this + 0xbc))(param_1);
    if (iVar1 != 0) {
      if (this_00 != (CPNPen *)0x0) {
        CPNGraphicResource::UnLockResource((CPNGraphicResource *)this_00);
      }
      *(CPNPen **)(this + 8) = param_1;
    }
  }
  return this_00;
}


