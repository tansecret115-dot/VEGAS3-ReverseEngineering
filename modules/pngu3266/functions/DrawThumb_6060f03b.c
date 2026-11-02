/* Module: pngu3266.dll
   Function: DrawThumb
   Address: 6060f03b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual void __thiscall XPNSlider::DrawThumb(class CPNDC *,class CPNRegion &,int) */

void __thiscall XPNSlider::DrawThumb(XPNSlider *this,CPNDC *param_1,CPNRegion *param_2,int param_3)

{
  int iVar1;
  CPNBrush *pCVar2;
  CPNColor *pCVar3;
  CPNPen *pCVar4;
  int iVar5;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  CPNPen *local_18;
  CPNPen *local_10;
  CPNPen *local_8;
  
                    /* 0x1f03b  1022  ?DrawThumb@XPNSlider@@MAEXPAVCPNDC@@AAVCPNRegion@@H@Z */
  (**(code **)(*(int *)param_2 + 0x18))(&local_2c);
  iVar5 = *(int *)param_1;
  pCVar2 = CPNDrawHelper::Get3dFaceBrush();
  (**(code **)(iVar5 + 0x4c))(param_2,pCVar2);
  if ((param_3 == 2) || (param_3 == 1)) {
    iVar5 = local_2c;
    for (param_3 = local_28; param_3 < local_20; param_3 = param_3 + 1) {
      for (; iVar5 < local_24; iVar5 = iVar5 + 2) {
        iVar1 = *(int *)param_1;
        pCVar3 = CPNDrawHelper::Get3dHighlightColor();
        (**(code **)(iVar1 + 0x88))(iVar5,param_3,pCVar3);
      }
      iVar5 = local_2c;
      if (param_3 % 2 != 0) {
        iVar5 = local_2c + 1;
      }
    }
  }
  pCVar4 = CPNDrawHelper::Get3dHighlightPen();
  if (param_1 != (CPNDC *)0x0) {
    local_18 = XPNDC::SetPen((XPNDC *)param_1,pCVar4);
  }
  (**(code **)(*(int *)param_1 + 0x10))(local_2c,local_28,local_24 + -1,local_28);
  (**(code **)(*(int *)param_1 + 0x10))(local_2c,local_28,local_2c,local_20 + -1);
  pCVar4 = CPNDrawHelper::Get3dShadowPen();
  if (param_1 != (CPNDC *)0x0) {
    local_10 = XPNDC::SetPen((XPNDC *)param_1,pCVar4);
  }
  (**(code **)(*(int *)param_1 + 0x10))(local_2c + 1,local_20 + -2,local_24 + -1,local_20 + -2);
  (**(code **)(*(int *)param_1 + 0x10))(local_24 + -2,local_28 + 1,local_24 + -2,local_20 + -1);
  pCVar4 = CPNDrawHelper::GetBtnTextPen();
  if (param_1 != (CPNDC *)0x0) {
    local_8 = XPNDC::SetPen((XPNDC *)param_1,pCVar4);
  }
  (**(code **)(*(int *)param_1 + 0x10))(local_2c,local_20 + -1,local_24 + -1,local_20 + -1);
  (**(code **)(*(int *)param_1 + 0x10))(local_24 + -1,local_28,local_24 + -1,local_20 + -1);
  if (((param_1 != (CPNDC *)0x0) &&
      (XPNDC::SetPen((XPNDC *)param_1,local_8), param_1 != (CPNDC *)0x0)) &&
     (XPNDC::SetPen((XPNDC *)param_1,local_10), param_1 != (CPNDC *)0x0)) {
    XPNDC::SetPen((XPNDC *)param_1,local_18);
  }
  return;
}


