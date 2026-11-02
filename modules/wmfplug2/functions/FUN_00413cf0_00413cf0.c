/* Module: wmfplug2.dll
   Function: FUN_00413cf0
   Address: 00413cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00413cf0(void *this,HWND param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  HWND pHVar2;
  uint uVar3;
  UINT UVar4;
  int iVar5;
  WPARAM WVar6;
  LPARAM LVar7;
  
  iVar5 = *(int *)(*(int *)(*(int *)((int)this + 0x34) + 0x424) + 0x3e);
  if (iVar5 == 0) {
    return 0x80070057;
  }
  if (param_2 < 0x54) {
    if (param_2 == 0x53) {
      FUN_0041e600(param_1,param_4,(int *)&DAT_0047c688);
      return 1;
    }
    if (param_2 == 2) {
      FUN_00414170();
      *(undefined4 *)((int)this + 0x10) = 0;
      return 1;
    }
    if (param_2 != 0x18) {
      return 0;
    }
    if (param_3 == 0) {
      return 0;
    }
    FUN_00413af0(this,param_1);
    return 0;
  }
  if (param_2 == 0x110) {
    LVar7 = 0;
    WVar6 = 7;
    UVar4 = 0xc5;
    pHVar2 = GetDlgItem(param_1,0xd4);
    SendMessageA(pHVar2,UVar4,WVar6,LVar7);
    LVar7 = 0;
    WVar6 = 7;
    UVar4 = 0xc5;
    pHVar2 = GetDlgItem(param_1,0xd5);
    SendMessageA(pHVar2,UVar4,WVar6,LVar7);
    LVar7 = 0;
    WVar6 = 7;
    UVar4 = 0xc5;
    pHVar2 = GetDlgItem(param_1,0xf5);
    SendMessageA(pHVar2,UVar4,WVar6,LVar7);
    LVar7 = 0;
    WVar6 = 7;
    UVar4 = 0xc5;
    pHVar2 = GetDlgItem(param_1,0xf6);
    SendMessageA(pHVar2,UVar4,WVar6,LVar7);
    LVar7 = 0;
    WVar6 = 7;
    UVar4 = 0xc5;
    pHVar2 = GetDlgItem(param_1,0xf7);
    SendMessageA(pHVar2,UVar4,WVar6,LVar7);
switchD_00413dc0_caseD_9:
    return 1;
  }
  if (param_2 != 0x111) {
    return 0;
  }
  uVar3 = param_3 & 0xffff;
  switch(uVar3) {
  case 9:
    goto switchD_00413dc0_caseD_9;
  default:
    return 0;
  case 0xd4:
  case 0xd5:
  case 0xf5:
  case 0xf6:
  case 0xf7:
    if (param_3 >> 0x10 != 0x300) {
      return 0;
    }
    *(undefined4 *)((int)this + 0x24) = 1;
    return 0;
  case 0xf8:
    iVar1 = FUN_004140e0(0,iVar5);
    if (iVar1 == 0) {
      uVar3 = (uint)(*(int *)(iVar5 + 0x10) == 0);
      *(uint *)(iVar5 + 0x10) = uVar3;
      pHVar2 = GetDlgItem(param_1,0xd4);
      EnableWindow(pHVar2,uVar3);
      *(undefined4 *)((int)this + 0x24) = 1;
      return 0;
    }
    break;
  case 0xf9:
    iVar1 = FUN_004140e0(1,iVar5);
    if (iVar1 != 0) {
LAB_00413f1b:
      CheckDlgButton(param_1,uVar3,1);
      return 0;
    }
    uVar3 = (uint)(*(int *)(iVar5 + 0x14) == 0);
    *(uint *)(iVar5 + 0x14) = uVar3;
    iVar5 = 0xd5;
    goto LAB_00413ef9;
  case 0xfa:
    iVar1 = FUN_004140e0(2,iVar5);
    if (iVar1 != 0) {
      CheckDlgButton(param_1,uVar3,1);
      return 0;
    }
    uVar3 = (uint)(*(int *)(iVar5 + 0x18) == 0);
    *(uint *)(iVar5 + 0x18) = uVar3;
    pHVar2 = GetDlgItem(param_1,0xf5);
    EnableWindow(pHVar2,uVar3);
    *(undefined4 *)((int)this + 0x24) = 1;
    return 0;
  case 0xfb:
    iVar1 = FUN_004140e0(3,iVar5);
    if (iVar1 == 0) {
      uVar3 = (uint)(*(int *)(iVar5 + 0x1c) == 0);
      *(uint *)(iVar5 + 0x1c) = uVar3;
      pHVar2 = GetDlgItem(param_1,0xf6);
      EnableWindow(pHVar2,uVar3);
      *(undefined4 *)((int)this + 0x24) = 1;
      return 0;
    }
    break;
  case 0xfc:
    iVar1 = FUN_004140e0(4,iVar5);
    if (iVar1 != 0) goto LAB_00413f1b;
    uVar3 = (uint)(*(int *)(iVar5 + 0x20) == 0);
    *(uint *)(iVar5 + 0x20) = uVar3;
    iVar5 = 0xf7;
LAB_00413ef9:
    pHVar2 = GetDlgItem(param_1,iVar5);
    EnableWindow(pHVar2,uVar3);
    *(undefined4 *)((int)this + 0x24) = 1;
    return 0;
  }
  CheckDlgButton(param_1,uVar3,1);
  return 0;
}


