/* Module: pngu3266.dll
   Function: DrawScrollButtons
   Address: 6060b583
   Source: Ghidra pseudocode (Stage 10 batch) */


/* private: virtual void __thiscall XPNTabControl::DrawScrollButtons(class CPNDC *,class CPNxRect &)
    */

void __thiscall
XPNTabControl::DrawScrollButtons(XPNTabControl *this,CPNDC *param_1,CPNxRect *param_2)

{
  int iVar1;
  int iVar2;
  CPNBrush *pCVar3;
  CPNPen *pCVar4;
  uint uVar5;
  uint uVar6;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  CPNPen *local_10;
  CPNPen *local_8;
  
                    /* 0x1b583  1011
                       ?DrawScrollButtons@XPNTabControl@@EAEXPAVCPNDC@@AAVCPNxRect@@@Z */
  iVar1 = *(int *)(param_2 + 8);
  uVar6 = (uint)(iVar1 - *(int *)param_2 <= *(int *)(this + 0xd8));
  local_8 = (CPNPen *)this;
  if (uVar6 != 0) {
    local_24 = iVar1 + -0x2c;
    local_20 = *(int *)(param_2 + 0xc) - *(int *)(this + 0xe0);
    iVar2 = *(int *)param_1;
    local_18 = *(int *)(param_2 + 0xc) + -1;
    local_1c = iVar1;
    pCVar3 = CPNDrawHelper::GetBtnFaceBrush();
    (**(code **)(iVar2 + 0x48))(&local_24,pCVar3);
    this = (XPNTabControl *)local_8;
    if (*(int *)(*(int *)(*(int *)(local_8 + 0xd4) + 0xfb) + 0x14) !=
        *(int *)(*(int *)(*(int *)(local_8 + 0xd4) + 0xfb) + 0x10)) {
      pCVar4 = CPNDrawHelper::GetBtnShadowPen();
      if (param_1 != (CPNDC *)0x0) {
        local_10 = XPNDC::SetPen((XPNDC *)param_1,pCVar4);
      }
      CPNDrawHelper::DrawOrthogonalBreakLine
                (param_1,*(int *)(param_2 + 8) + -0x2b,
                 (*(int *)(param_2 + 0xc) - *(int *)(this + 0xe0)) + 2,1,*(int *)(this + 0xe0) + -3)
      ;
      pCVar4 = CPNDrawHelper::Get3dHighlightPen();
      if (param_1 != (CPNDC *)0x0) {
        local_8 = XPNDC::SetPen((XPNDC *)param_1,pCVar4);
      }
      (**(code **)(*(int *)param_1 + 0x10))
                (*(int *)(param_2 + 8),*(int *)(param_2 + 0xc) + -1,*(int *)(param_2 + 8) + -0x2c,
                 *(int *)(param_2 + 0xc) + -1);
      if (param_1 != (CPNDC *)0x0) {
        XPNDC::SetPen((XPNDC *)param_1,local_8);
        if (param_1 != (CPNDC *)0x0) {
          XPNDC::SetPen((XPNDC *)param_1,local_10);
        }
      }
    }
  }
  uVar5 = (**(code **)(**(int **)(this + 0xd4) + 0x9c))();
  if (uVar5 != uVar6) {
    (**(code **)(**(int **)(this + 0xd4) + 0x98))(uVar6);
  }
  return;
}


