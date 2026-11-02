/* Module: pngu3266.dll
   Function: DrawForeground
   Address: 6061234a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* private: void __thiscall XPNToolTip::DrawForeground(class CPNDC *,class CPNxRect &) */

void __thiscall XPNToolTip::DrawForeground(XPNToolTip *this,CPNDC *param_1,CPNxRect *param_2)

{
  int iVar1;
  CPNColor *pCVar2;
  CPNFont *pCVar3;
  int iVar4;
  int iVar5;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28 [4];
  CPNColor *local_18;
  CPNColor *local_10;
  CPNFont *local_8;
  
                    /* 0x2234a  997  ?DrawForeground@XPNToolTip@@AAEXPAVCPNDC@@AAVCPNxRect@@@Z */
  pCVar2 = CPNDrawHelper::GetInfoTextColor();
  if (param_1 != (CPNDC *)0x0) {
    local_18 = XPNDC::SetTextFgColor((XPNDC *)param_1,pCVar2);
  }
  pCVar2 = CPNDrawHelper::GetInfoBkColor();
  if (param_1 != (CPNDC *)0x0) {
    local_10 = XPNDC::SetTextBgColor((XPNDC *)param_1,pCVar2);
  }
  pCVar3 = CPNDrawHelper::GetTooltipFont();
  if (param_1 != (CPNDC *)0x0) {
    local_8 = XPNDC::SetFont((XPNDC *)param_1,pCVar3);
  }
  iVar4 = (**(code **)(*(int *)this + 0x28))();
  FUN_60618bb0(local_28);
  iVar4 = iVar4 + 1;
  iVar1 = *(int *)this;
  iVar5 = FUN_60619190(local_28,iVar4);
  (**(code **)(iVar1 + 0x24))(iVar5,iVar4);
  FUN_60619210(local_28,-1);
  local_38 = *(int *)param_2 + 3;
  local_34 = *(int *)(param_2 + 4) + 2;
  local_30 = *(int *)(param_2 + 8) + -3;
  local_2c = *(int *)(param_2 + 0xc) + -2;
  (**(code **)(*(int *)param_1 + 0x38))(local_28[0],&local_38,0x10002);
  FUN_60618cd0(local_28);
  if (param_1 != (CPNDC *)0x0) {
    XPNDC::SetFont((XPNDC *)param_1,local_8);
    if (param_1 != (CPNDC *)0x0) {
      XPNDC::SetTextBgColor((XPNDC *)param_1,local_10);
      if (param_1 != (CPNDC *)0x0) {
        XPNDC::SetTextFgColor((XPNDC *)param_1,local_18);
      }
    }
  }
  return;
}


