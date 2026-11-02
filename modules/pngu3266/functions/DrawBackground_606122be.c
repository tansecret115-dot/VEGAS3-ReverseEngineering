/* Module: pngu3266.dll
   Function: DrawBackground
   Address: 606122be
   Source: Ghidra pseudocode (Stage 10 batch) */


/* private: void __thiscall XPNToolTip::DrawBackground(class CPNDC *,class CPNxRect &) */

void __thiscall XPNToolTip::DrawBackground(XPNToolTip *this,CPNDC *param_1,CPNxRect *param_2)

{
  int iVar1;
  CPNBrush *pCVar2;
  CPNPen *pCVar3;
  CPNPen *local_8;
  
                    /* 0x222be  983  ?DrawBackground@XPNToolTip@@AAEXPAVCPNDC@@AAVCPNxRect@@@Z */
  iVar1 = *(int *)param_1;
  pCVar2 = CPNDrawHelper::GetInfoBkBrush();
  (**(code **)(iVar1 + 0x48))(param_2,pCVar2);
  pCVar3 = CPNDrawHelper::GetBlackPen();
  local_8 = (CPNPen *)this;
  if (param_1 != (CPNDC *)0x0) {
    local_8 = XPNDC::SetPen((XPNDC *)param_1,pCVar3);
  }
  (**(code **)(*(int *)param_1 + 0x10))
            (*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
             *(undefined4 *)(param_2 + 4));
  (**(code **)(*(int *)param_1 + 0x10))
            (*(int *)(param_2 + 8) + -1,*(undefined4 *)(param_2 + 4),*(int *)(param_2 + 8) + -1,
             *(undefined4 *)(param_2 + 0xc));
  (**(code **)(*(int *)param_1 + 0x10))
            (*(undefined4 *)(param_2 + 8),*(int *)(param_2 + 0xc) + -1,*(undefined4 *)param_2,
             *(int *)(param_2 + 0xc) + -1);
  (**(code **)(*(int *)param_1 + 0x10))
            (*(undefined4 *)param_2,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)param_2,
             *(undefined4 *)(param_2 + 4));
  if (param_1 != (CPNDC *)0x0) {
    XPNDC::SetPen((XPNDC *)param_1,local_8);
  }
  return;
}


