/* Module: pngu3266.dll
   Function: DrawTabs
   Address: 6060b11f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* private: virtual void __thiscall XPNTabControl::DrawTabs(class CPNDC *,class CPNxRect &) */

void __thiscall XPNTabControl::DrawTabs(XPNTabControl *this,CPNDC *param_1,CPNxRect *param_2)

{
  CPNDC *pCVar1;
  CPNDC *pCVar2;
  CPNDC *this_00;
  CPNFont *pCVar3;
  CPNColor *pCVar4;
  CPNPen *pCVar5;
  int *piVar6;
  int iVar7;
  CPNFont *local_1c;
  CPNColor *local_14;
  CPNPen *local_c;
  int local_8;
  
                    /* 0x1b11f  1017  ?DrawTabs@XPNTabControl@@EAEXPAVCPNDC@@AAVCPNxRect@@@Z */
  this_00 = param_1;
  if ((*(int *)(this + 0xd0) != 0) && (*(int *)(*(int *)(this + 0xd0) + 0x10) != 0)) {
    pCVar3 = CPNDrawHelper::GetTabControlFont();
    if (param_1 != (CPNDC *)0x0) {
      local_1c = XPNDC::SetFont((XPNDC *)param_1,pCVar3);
    }
    pCVar4 = CPNDrawHelper::GetBtnFaceColor();
    if (param_1 != (CPNDC *)0x0) {
      local_14 = XPNDC::SetTextBgColor((XPNDC *)param_1,pCVar4);
    }
    pCVar5 = CPNDrawHelper::GetBlackPen();
    if (param_1 != (CPNDC *)0x0) {
      local_c = XPNDC::SetPen((XPNDC *)param_1,pCVar5);
    }
    (**(code **)(*(int *)param_1 + 0x10))
              (*(undefined4 *)param_2,*(int *)(param_2 + 0xc) + -1,*(undefined4 *)(param_2 + 8),
               *(int *)(param_2 + 0xc) + -1);
    param_1 = (CPNDC *)0x0;
    iVar7 = *(int *)(this + 0xd8);
    local_8 = *(int *)(*(int *)(this + 0xd0) + 4);
    while (pCVar2 = param_1, local_8 != 0) {
      piVar6 = (int *)FUN_6061a2c0(&local_8);
      pCVar1 = (CPNDC *)*piVar6;
      if (((*(int *)(this + 200) != 0) && (*(int *)(pCVar1 + 4) == *(int *)(this + 0xc4))) &&
         (iVar7 = *(int *)(pCVar1 + 8), *(int *)(pCVar1 + 4) != *(int *)(this + 0xc0))) {
        iVar7 = iVar7 + -2;
      }
      param_1 = pCVar2;
      if ((*(int *)(pCVar1 + 8) <= *(int *)(this + 0xd8)) &&
         (param_1 = pCVar1, *(int *)(pCVar1 + 4) != *(int *)(this + 0xc0))) {
        (**(code **)(*(int *)this + 0x180))(this_00,pCVar1,iVar7,0);
        param_1 = pCVar2;
      }
    }
    if ((*(int *)(this + 0xcc) != 0) && (pCVar2 != (CPNDC *)0x0)) {
      (**(code **)(*(int *)this + 0x180))(this_00,pCVar2,iVar7,1);
    }
    if (((this_00 != (CPNDC *)0x0) &&
        (XPNDC::SetPen((XPNDC *)this_00,local_c), this_00 != (CPNDC *)0x0)) &&
       (XPNDC::SetTextBgColor((XPNDC *)this_00,local_14), this_00 != (CPNDC *)0x0)) {
      XPNDC::SetFont((XPNDC *)this_00,local_1c);
    }
  }
  return;
}


