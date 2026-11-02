/* Module: pngu3266.dll
   Function: DrawButtonFace
   Address: 606060f1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNAnimButton::DrawButtonFace(class CPNDC *,class CPNxRect
   &,int,int) */

void __thiscall
CPNAnimButton::DrawButtonFace
          (CPNAnimButton *this,CPNDC *param_1,CPNxRect *param_2,int param_3,int param_4)

{
  CPNxRect *pCVar1;
  CPNColor *pCVar2;
  CPNxRect *pCVar3;
  int iVar4;
  int iVar5;
  CPNFont *pCVar6;
  CPNColor *pCVar7;
  undefined4 uVar8;
  undefined1 local_134 [256];
  int local_34;
  undefined4 uStack_30;
  int local_2c;
  undefined4 uStack_28;
  CPNFont *local_20;
  uint local_1c;
  CPNColor *local_14;
  CPNColor *local_c;
  int local_8;
  
                    /* 0x160f1  986  ?DrawButtonFace@CPNAnimButton@@UAEXPAVCPNDC@@AAVCPNxRect@@HH@Z
                        */
  pCVar1 = param_2;
  if (*(int *)(this + 0x156) != 0) {
LAB_60606117:
    (**(code **)(*(int *)this + 0x17c))(param_1);
    return;
  }
  if (*(int *)(this + 0x15a) != 0) {
    *(undefined4 *)(this + 0x12e) = 0;
    goto LAB_60606117;
  }
  local_8 = *(int *)(this + 0x162);
  if (((byte)this[0xb8] & 2) == 0) {
    pCVar3 = (CPNxRect *)(((*(int *)(param_2 + 8) - *(int *)(this + 0x14e)) - *(int *)param_2) / 2);
  }
  else {
    pCVar3 = *(CPNxRect **)param_2;
  }
  iVar4 = ((*(int *)(param_2 + 0xc) - *(int *)(param_2 + 4)) - *(int *)(this + 0x152)) / 2;
  if (local_8 == 0) goto LAB_606062a1;
  if ((((byte)this[0xb8] & 1) == 0) || (*(int *)(this + 0xc0) == 0)) {
LAB_6060619b:
    if (param_4 != 0) {
LAB_606061a0:
      local_8 = *(int *)(this + 0x166);
    }
  }
  else {
    if (param_4 != 0) goto LAB_606061a0;
    if (*(int *)(this + 200) != 0) goto LAB_6060619b;
    local_8 = *(int *)(this + 0x16a);
  }
  if (local_8 == 0) goto LAB_606062a1;
  local_c = (CPNColor *)(*(int *)(param_2 + 8) - *(int *)param_2);
  param_2 = pCVar3;
  if ((int)local_c < *(int *)(this + 0x14e)) {
    param_2 = (CPNxRect *)0x0;
  }
  local_1c = (uint)((int)local_c < *(int *)(this + 0x14e));
  pCVar7 = *(CPNColor **)(this + 0x152);
  local_14 = (CPNColor *)(*(int *)(pCVar1 + 0xc) - *(int *)(pCVar1 + 4));
  if ((int)local_14 < (int)pCVar7) {
    iVar4 = 0;
  }
  local_20 = (CPNFont *)(uint)((int)local_14 < (int)pCVar7);
  if (*(int *)(this + 0x172) == 0) {
    if (local_1c != 0) {
LAB_60606253:
      pCVar2 = pCVar7;
      if (local_20 != (CPNFont *)0x0) {
        pCVar2 = local_14;
      }
      local_14 = pCVar2;
      uVar8 = *(undefined4 *)(this + 0x14e);
      iVar5 = *(int *)param_1;
      goto LAB_6060628c;
    }
    if (local_20 != (CPNFont *)0x0) {
      local_c = *(CPNColor **)(this + 0x14e);
      goto LAB_60606253;
    }
    (**(code **)(*(int *)param_1 + 0x54))
              (local_8,param_2,iVar4,*(undefined4 *)(this + 0x14e),pCVar7,0,0,10);
  }
  else {
    uVar8 = *(undefined4 *)(this + 0x14e);
    iVar5 = *(int *)param_1;
    iVar4 = 0;
    param_2 = (CPNxRect *)0x0;
LAB_6060628c:
    (**(code **)(iVar5 + 0x5c))(local_8,param_2,iVar4,local_c,local_14,0,0,uVar8,pCVar7,10);
  }
  if ((local_8 != 0) && (((byte)this[0xb8] & 2) == 0)) {
    return;
  }
LAB_606062a1:
  local_34 = *(int *)pCVar1;
  uStack_30 = *(undefined4 *)(pCVar1 + 4);
  local_2c = *(int *)(pCVar1 + 8);
  uStack_28 = *(undefined4 *)(pCVar1 + 0xc);
  pCVar6 = (CPNFont *)(**(code **)(*(int *)this + 0x30))();
  if ((param_1 != (CPNDC *)0x0) &&
     (local_20 = XPNDC::SetFont((XPNDC *)param_1,pCVar6), param_1 != (CPNDC *)0x0)) {
    local_c = XPNDC::SetTextBgColor((XPNDC *)param_1,(CPNColor *)(this + 0xd8));
  }
  if (param_4 == 0) {
    pCVar7 = CPNDrawHelper::GetBtnTextColor();
  }
  else {
    pCVar7 = CPNDrawHelper::GetGrayTextColor();
  }
  if (param_1 != (CPNDC *)0x0) {
    local_14 = XPNDC::SetTextFgColor((XPNDC *)param_1,pCVar7);
  }
  if ((((byte)this[0xb8] & 2) != 0) && (local_8 != 0)) {
    iVar4 = *(int *)(this + 0x14e) + 4;
    local_34 = local_34 + iVar4;
    local_2c = local_2c + iVar4 + (-4 - *(int *)(this + 0x14e));
  }
  (**(code **)(*(int *)this + 0x24))(local_134,0xff);
  (**(code **)(*(int *)param_1 + 0x38))
            (local_134,&local_34,(-(uint)((*(uint *)(this + 0xb8) & 2) != 0) & 0x7e) + 2 | 0x12000);
  if (param_1 == (CPNDC *)0x0) {
    return;
  }
  XPNDC::SetTextFgColor((XPNDC *)param_1,local_14);
  if (param_1 == (CPNDC *)0x0) {
    return;
  }
  XPNDC::SetTextBgColor((XPNDC *)param_1,local_c);
  if (param_1 == (CPNDC *)0x0) {
    return;
  }
  XPNDC::SetFont((XPNDC *)param_1,local_20);
  return;
}


