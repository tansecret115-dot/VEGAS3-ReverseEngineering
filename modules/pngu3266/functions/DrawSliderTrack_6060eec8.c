/* Module: pngu3266.dll
   Function: DrawSliderTrack
   Address: 6060eec8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual void __thiscall XPNSlider::DrawSliderTrack(class CPNDC *,class CPNxRect const
   &) */

void __thiscall XPNSlider::DrawSliderTrack(XPNSlider *this,CPNDC *param_1,CPNxRect *param_2)

{
  CPNPen *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  CPNPen *local_18;
  CPNPen *local_10;
  CPNPen *local_8;
  
                    /* 0x1eec8  1015  ?DrawSliderTrack@XPNSlider@@MAEXPAVCPNDC@@ABVCPNxRect@@@Z */
  (**(code **)(*(int *)this + 0x13c))(param_1,this + 0xf8,param_2);
  pCVar1 = CPNDrawHelper::Get3dShadowPen();
  if (param_1 != (CPNDC *)0x0) {
    local_18 = XPNDC::SetPen((XPNDC *)param_1,pCVar1);
  }
  (**(code **)(*(int *)param_1 + 0x10))
            (*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
             *(undefined4 *)(param_2 + 4));
  (**(code **)(*(int *)param_1 + 0x10))
            (*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),*(undefined4 *)param_2,
             *(undefined4 *)(param_2 + 0xc));
  pCVar1 = CPNDrawHelper::Get3dHighlightPen();
  if (param_1 != (CPNDC *)0x0) {
    local_10 = XPNDC::SetPen((XPNDC *)param_1,pCVar1);
  }
  (**(code **)(*(int *)param_1 + 0x10))
            (*(undefined4 *)(param_2 + 8),*(int *)(param_2 + 4) + 1,*(undefined4 *)(param_2 + 8),
             *(undefined4 *)(param_2 + 0xc));
  (**(code **)(*(int *)param_1 + 0x10))
            (*(undefined4 *)param_2,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 8),
             *(undefined4 *)(param_2 + 0xc));
  pCVar1 = CPNDrawHelper::GetBtnTextPen();
  if (param_1 != (CPNDC *)0x0) {
    local_8 = XPNDC::SetPen((XPNDC *)param_1,pCVar1);
  }
  if (*(int *)(this + 0xf4) == 0) {
    iVar5 = *(int *)param_1;
    iVar3 = *(int *)(param_2 + 4) + 1;
    iVar4 = *(int *)(param_2 + 8) + -1;
    iVar2 = *(int *)param_2 + 1;
    iVar6 = iVar3;
  }
  else {
    iVar2 = *(int *)param_2 + 1;
    iVar5 = *(int *)param_1;
    iVar3 = *(int *)(param_2 + 4) + 1;
    iVar4 = iVar2;
    iVar6 = *(int *)(param_2 + 0xc) + -1;
  }
  (**(code **)(iVar5 + 0x10))(iVar2,iVar3,iVar4,iVar6);
  if (param_1 != (CPNDC *)0x0) {
    XPNDC::SetPen((XPNDC *)param_1,local_8);
    if (param_1 != (CPNDC *)0x0) {
      XPNDC::SetPen((XPNDC *)param_1,local_10);
      if (param_1 != (CPNDC *)0x0) {
        XPNDC::SetPen((XPNDC *)param_1,local_18);
      }
    }
  }
  return;
}


