/* Module: pngu3266.dll
   Function: DrawTickMarks
   Address: 6060f256
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual void __thiscall XPNSlider::DrawTickMarks(class CPNDC *,class CPNxRect const
   &,class CPNxRect const &) */

void __thiscall
XPNSlider::DrawTickMarks(XPNSlider *this,CPNDC *param_1,CPNxRect *param_2,CPNxRect *param_3)

{
  CPNDC *this_00;
  CPNxRect *pCVar1;
  CPNDC *pCVar2;
  int iVar3;
  CPNPen *pCVar4;
  int iVar5;
  CPNPen *local_1c;
  CPNPen *local_14;
  CPNPen *local_c;
  
  pCVar1 = param_2;
                    /* 0x1f256  1024  ?DrawTickMarks@XPNSlider@@MAEXPAVCPNDC@@ABVCPNxRect@@1@Z */
  this_00 = param_1;
  if (*(int *)(this + 0xf4) == 0) {
    pCVar2 = (CPNDC *)((*(int *)(this + 0x143) - *(int *)(this + 0x13b)) / 5);
    iVar5 = *(int *)(param_2 + 0xc) - *(int *)(param_2 + 4);
    iVar3 = ((*(int *)(this + 0x143) - *(int *)(this + 0x13b)) % 5) / 2 + 2;
    param_2 = (CPNxRect *)(*(int *)param_2 + iVar3);
    pCVar4 = CPNDrawHelper::Get3dShadowPen();
    if (param_1 != (CPNDC *)0x0) {
      local_1c = XPNDC::SetPen((XPNDC *)param_1,pCVar4);
    }
    param_1 = pCVar2;
    if (0 < (int)pCVar2) {
      do {
        (**(code **)(*(int *)this_00 + 0x10))
                  (param_2,*(int *)(pCVar1 + 0xc) + -3,param_2,
                   (*(int *)(pCVar1 + 0xc) - (iVar5 + -6)) + -3);
        (**(code **)(*(int *)this_00 + 0x10))
                  (param_2,*(int *)(param_3 + 4) + 4,param_2,iVar5 + -2 + *(int *)(param_3 + 4));
        param_2 = param_2 + 5;
        param_1 = param_1 + -1;
      } while (param_1 != (CPNDC *)0x0);
    }
    param_2 = (CPNxRect *)(*(int *)pCVar1 + 1 + iVar3);
    pCVar4 = CPNDrawHelper::Get3dHighlightPen();
    if (this_00 != (CPNDC *)0x0) {
      local_14 = XPNDC::SetPen((XPNDC *)this_00,pCVar4);
    }
    param_1 = pCVar2;
    if (0 < (int)pCVar2) {
      do {
        (**(code **)(*(int *)this_00 + 0x10))
                  (param_2,*(int *)(pCVar1 + 0xc) + -4,param_2,
                   (*(int *)(pCVar1 + 0xc) - (iVar5 + -6)) + -4);
        (**(code **)(*(int *)this_00 + 0x10))
                  (param_2,*(int *)(param_3 + 4) + 3,param_2,iVar5 + -3 + *(int *)(param_3 + 4));
        param_2 = param_2 + 5;
        param_1 = param_1 + -1;
      } while (param_1 != (CPNDC *)0x0);
    }
    if (this_00 == (CPNDC *)0x0) {
      return;
    }
    XPNDC::SetPen((XPNDC *)this_00,local_14);
  }
  else {
    pCVar2 = (CPNDC *)((*(int *)(this + 0x147) - *(int *)(this + 0x13f)) / 5);
    iVar5 = *(int *)(param_2 + 8) - *(int *)param_2;
    iVar3 = ((*(int *)(this + 0x147) - *(int *)(this + 0x13f)) % 5) / 2;
    local_c = (CPNPen *)(iVar3 + 2);
    param_2 = (CPNxRect *)(local_c + *(int *)(param_2 + 4));
    pCVar4 = CPNDrawHelper::Get3dShadowPen();
    if (param_1 != (CPNDC *)0x0) {
      local_14 = XPNDC::SetPen((XPNDC *)param_1,pCVar4);
    }
    param_1 = pCVar2;
    if (0 < (int)pCVar2) {
      do {
        (**(code **)(*(int *)this_00 + 0x10))
                  (*(int *)(pCVar1 + 8) + -4,param_2,(*(int *)(pCVar1 + 8) - (iVar5 + -6)) + -4,
                   param_2);
        (**(code **)(*(int *)this_00 + 0x10))
                  (*(int *)param_3 + 3,param_2,iVar5 + -3 + *(int *)param_3,param_2);
        param_2 = param_2 + 5;
        param_1 = param_1 + -1;
      } while (param_1 != (CPNDC *)0x0);
    }
    param_2 = (CPNxRect *)(iVar3 + 3 + *(int *)(pCVar1 + 4));
    pCVar4 = CPNDrawHelper::Get3dHighlightPen();
    if (this_00 != (CPNDC *)0x0) {
      local_c = XPNDC::SetPen((XPNDC *)this_00,pCVar4);
    }
    param_1 = pCVar2;
    if (0 < (int)pCVar2) {
      do {
        (**(code **)(*(int *)this_00 + 0x10))
                  (*(int *)(pCVar1 + 8) + -3,param_2,(*(int *)(pCVar1 + 8) - (iVar5 + -6)) + -3,
                   param_2);
        (**(code **)(*(int *)this_00 + 0x10))
                  (*(int *)param_3 + 4,param_2,iVar5 + -2 + *(int *)param_3,param_2);
        param_2 = param_2 + 5;
        param_1 = param_1 + -1;
      } while (param_1 != (CPNDC *)0x0);
    }
    if (this_00 == (CPNDC *)0x0) {
      return;
    }
    XPNDC::SetPen((XPNDC *)this_00,local_c);
    local_1c = local_14;
  }
  if (this_00 != (CPNDC *)0x0) {
    XPNDC::SetPen((XPNDC *)this_00,local_1c);
  }
  return;
}


