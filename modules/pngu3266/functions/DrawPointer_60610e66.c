/* Module: pngu3266.dll
   Function: DrawPointer
   Address: 60610e66
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNMenuButton::DrawPointer(class CPNDC *,class CPNxRect const &)
    */

void __thiscall XPNMenuButton::DrawPointer(XPNMenuButton *this,CPNDC *param_1,CPNxRect *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_2c;
  CPNBrush *local_28;
  int local_24;
  CPNBrush *local_20;
  int local_1c;
  CPNBrush *local_18;
  CPNPen *local_10;
  CPNBrush *local_8;
  
                    /* 0x20e66  1005  ?DrawPointer@XPNMenuButton@@UAEXPAVCPNDC@@ABVCPNxRect@@@Z */
  iVar1 = *(int *)param_2;
  local_1c = (*(int *)(param_2 + 8) - iVar1) / 2;
  local_8 = *(CPNBrush **)(param_2 + 4);
  iVar3 = local_1c / 2;
  iVar4 = *(int *)(param_2 + 0xc) - (int)local_8;
  iVar2 = local_1c;
  if (iVar4 < iVar3) {
    iVar3 = iVar4 / 2;
    iVar2 = iVar3 * 2;
  }
  local_24 = iVar2 / 2 + local_1c + iVar1;
  local_2c = (local_1c - iVar2 / 2) + iVar1;
  local_1c = local_1c + iVar1;
  local_28 = local_8 + (iVar4 / 2 - iVar3 / 2);
  local_18 = local_28 + iVar3;
  local_20 = local_28;
  if ((param_1 != (CPNDC *)0x0) &&
     (local_10 = XPNDC::SetPen((XPNDC *)param_1,&CPNDrawHelper::m_btnTextPen),
     param_1 != (CPNDC *)0x0)) {
    local_8 = XPNDC::SetBrush((XPNDC *)param_1,&CPNDrawHelper::m_btnTextBrush);
  }
  (**(code **)(*(int *)param_1 + 0xc))(3,&local_2c,0,0,1);
  if ((param_1 != (CPNDC *)0x0) &&
     (XPNDC::SetBrush((XPNDC *)param_1,local_8), param_1 != (CPNDC *)0x0)) {
    XPNDC::SetPen((XPNDC *)param_1,local_10);
  }
  return;
}


