/* Module: pngu3266.dll
   Function: OnPrimaryButtonDown
   Address: 6061739e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall CPNScrollHelper::OnPrimaryButtonDown(class CPNxPoint &,unsigned short)
    */

void __thiscall
CPNScrollHelper::OnPrimaryButtonDown(CPNScrollHelper *this,CPNxPoint *param_1,ushort param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  CPNTimer *this_00;
  int iVar5;
  undefined4 uVar6;
  CPNxRect local_3c [16];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int local_8;
  
                    /* 0x2739e  1689  ?OnPrimaryButtonDown@CPNScrollHelper@@IAEXAAVCPNxPoint@@G@Z */
  local_c = (int *)0x0;
  (**(code **)(**(int **)(this + 8) + 0x3c))(local_3c);
  uVar1 = *(ulong *)(this + 0x38);
  local_8 = 0;
  GetArrowRect(this,local_3c,uVar1,4,(CPNxRect *)&local_1c);
  if ((((*(int *)param_1 < local_1c) || (local_14 < *(int *)param_1)) ||
      (*(int *)(param_1 + 4) < local_18)) || (local_10 < *(int *)(param_1 + 4))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    GetArrowRect(this,local_3c,uVar1,8,(CPNxRect *)&local_2c);
    if (((*(int *)param_1 < local_2c) || (local_24 < *(int *)param_1)) ||
       ((*(int *)(param_1 + 4) < local_28 || (local_20 < *(int *)(param_1 + 4))))) {
      local_8 = 0;
    }
    else {
      local_8 = 1;
    }
  }
  iVar2 = *(int *)(this + 0x14);
  iVar3 = *(int *)(this + 0x10);
  if ((iVar2 == iVar3) && (iVar5 = *(int *)(this + 0xc), iVar2 == iVar5)) {
    uVar6 = 1;
  }
  else {
    iVar5 = *(int *)(this + 0xc);
    if (iVar2 == iVar5) {
      uVar6 = 3;
    }
    else if (iVar2 == iVar3) {
      uVar6 = 2;
    }
    else {
      uVar6 = 0;
    }
  }
  *(undefined4 *)(this + 0x30) = uVar6;
  if (bVar4) {
    if ((*(int *)(this + 0x28) != 0) && (iVar2 == iVar5)) {
      return;
    }
    *(undefined4 *)(this + 0x20) = 1;
    *(undefined4 *)(this + 0x24) = 0;
    BeginScroll(this);
    Scroll(this);
    local_c = &local_1c;
  }
  else if (local_8 != 0) {
    if ((*(int *)(this + 0x28) != 0) && (iVar2 == iVar3)) {
      return;
    }
    *(undefined4 *)(this + 0x24) = 1;
    *(undefined4 *)(this + 0x20) = 0;
    BeginScroll(this);
    Scroll(this);
    local_c = &local_2c;
  }
  if ((*(int *)(this + 0x24) != 0) || (*(int *)(this + 0x20) != 0)) {
    (**(code **)(**(int **)(this + 8) + 0x84))();
    (**(code **)(**(int **)(this + 8) + 0x78))(local_c,1);
    this_00 = operator_new(0x2c);
    if (this_00 == (CPNTimer *)0x0) {
      this_00 = (CPNTimer *)0x0;
    }
    else {
      CPNTimer::CPNTimer(this_00);
      *(CPNScrollHelper **)(this_00 + 0x28) = this;
      *(undefined ***)this_00 = &PTR_QueryInterface_6062bd00;
      *(undefined ***)(this_00 + 4) = &PTR_FUN_6062bcf8;
    }
    *(CPNTimer **)(this + 0x3c) = this_00;
    XPNTimer::Start((XPNTimer *)this_00,*(ulong *)(this + 0x1c),1,(XPNTimer **)(this + 0x3c));
  }
  return;
}


