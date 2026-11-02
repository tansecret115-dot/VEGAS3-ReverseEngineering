/* Module: pngu3266.dll
   Function: DrawTab
   Address: 6060b264
   Source: Ghidra pseudocode (Stage 10 batch) */


/* private: virtual void __thiscall XPNTabControl::DrawTab(class CPNDC *,struct _TabInfo *,long,int)
    */

void __thiscall
XPNTabControl::DrawTab
          (XPNTabControl *this,CPNDC *param_1,_TabInfo *param_2,long param_3,int param_4)

{
  CPNPen *pCVar1;
  CPNColor *pCVar2;
  int iVar3;
  int iVar4;
  undefined1 local_34 [8];
  int local_2c;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  CPNPen *local_10;
  CPNColor *local_8;
  
                    /* 0x1b264  1016  ?DrawTab@XPNTabControl@@EAEXPAVCPNDC@@PAU_TabInfo@@JH@Z */
  if ((-1 < *(int *)(param_2 + 8) - param_3) &&
     (local_8 = (CPNColor *)this, (**(code **)(*(int *)this + 0x3c))(local_34),
     *(int *)(param_2 + 8) - param_3 <= local_2c + -0x2c)) {
    pCVar1 = CPNDrawHelper::GetBlackPen();
    if (param_1 != (CPNDC *)0x0) {
      local_10 = XPNDC::SetPen((XPNDC *)param_1,pCVar1);
    }
    if (param_4 == 0) {
      iVar4 = *(int *)(param_2 + 0xc) + 3;
    }
    else {
      iVar4 = *(int *)(param_2 + 0xc) + 1;
    }
    iVar3 = *(int *)(param_2 + 0x14);
    if (param_4 == 0) {
      iVar3 = iVar3 + -1;
    }
    (**(code **)(*(int *)param_1 + 0x10))
              (*(int *)(param_2 + 8) - param_3,iVar3 + -1,*(int *)(param_2 + 8) - param_3,iVar4);
    iVar4 = *(int *)(param_2 + 0xc);
    if (param_4 == 0) {
      iVar4 = iVar4 + 2;
    }
    (**(code **)(*(int *)param_1 + 0x10))
              ((*(int *)(param_2 + 8) - param_3) + 1,iVar4,(*(int *)(param_2 + 0x10) - param_3) + -1
               ,iVar4);
    if (param_4 == 0) {
      iVar4 = *(int *)(param_2 + 0xc) + 3;
    }
    else {
      iVar4 = *(int *)(param_2 + 0xc) + 1;
    }
    iVar3 = *(int *)(param_2 + 0x14);
    if (param_4 == 0) {
      iVar3 = iVar3 + -1;
    }
    (**(code **)(*(int *)param_1 + 0x10))
              (*(int *)(param_2 + 0x10) - param_3,iVar3 + -1,*(int *)(param_2 + 0x10) - param_3,
               iVar4);
    local_24 = *(int *)(param_2 + 8) - param_3;
    local_20 = *(int *)(param_2 + 0xc);
    local_1c = *(int *)(param_2 + 0x10) - param_3;
    local_18 = *(int *)(local_8 + 0xdc) + local_20;
    if (param_4 != 0) {
      local_20 = local_20 + -1;
      local_18 = local_18 + -1;
    }
    if (*(int *)(param_2 + 0x20) == 0) {
      pCVar2 = CPNDrawHelper::GetGrayTextColor();
      if (param_1 != (CPNDC *)0x0) {
        local_8 = XPNDC::SetTextFgColor((XPNDC *)param_1,pCVar2);
      }
      (**(code **)(*(int *)param_1 + 0x38))(**(undefined4 **)param_2,&local_24,0x42002);
    }
    else {
      pCVar2 = CPNDrawHelper::GetBtnTextColor();
      if (param_1 != (CPNDC *)0x0) {
        local_8 = XPNDC::SetTextFgColor((XPNDC *)param_1,pCVar2);
      }
      (**(code **)(*(int *)param_1 + 0x38))(**(undefined4 **)param_2,&local_24,0x42002);
    }
    if (param_1 != (CPNDC *)0x0) {
      XPNDC::SetTextFgColor((XPNDC *)param_1,local_8);
    }
    if (param_4 != 0) {
      pCVar1 = CPNDrawHelper::GetBtnFacePen();
      if (param_1 != (CPNDC *)0x0) {
        local_8 = (CPNColor *)XPNDC::SetPen((XPNDC *)param_1,pCVar1);
      }
      (**(code **)(*(int *)param_1 + 0x10))
                ((*(int *)(param_2 + 8) - param_3) + 1,*(int *)(param_2 + 0x14) + -1,
                 (*(int *)(param_2 + 0x10) - param_3) + -1,*(int *)(param_2 + 0x14) + -1);
      if (param_1 == (CPNDC *)0x0) {
        return;
      }
      XPNDC::SetPen((XPNDC *)param_1,(CPNPen *)local_8);
    }
    if (param_1 != (CPNDC *)0x0) {
      XPNDC::SetPen((XPNDC *)param_1,local_10);
    }
  }
  return;
}


