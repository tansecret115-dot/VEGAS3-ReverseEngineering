/* Module: vegas30.exe
   Function: FUN_00426990
   Address: 00426990
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00426990(undefined4 param_1,int param_2)

{
  LONG LVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  float10 fVar8;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  int local_60;
  int local_5c;
  tagRECT local_58;
  undefined4 local_48 [4];
  double local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar2 = FUN_005ba4b0(param_1,0);
  local_6c = uVar2;
  iVar3 = FUN_005b9fc0(param_1,uVar2,0);
  if (DAT_0064762c == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(DAT_0064762c + 0x80);
  }
  iVar4 = FUN_005b8c90();
  if (param_2 == 0) {
    if (iVar3 == 0) goto LAB_00426c50;
    Transport_Suspend();
    if (iVar6 != 0) {
      FUN_00425cf0();
      FUN_005ba6d0(param_1,uVar2,0,0,0,DAT_006477e8,DAT_006477ec,0);
      DAT_0064767c = DAT_0064767c | 2;
      DAT_0064b118 = DAT_006477e8;
      DAT_0064b11c = DAT_006477ec;
      FUN_005b8ca0(param_1,DAT_006477e8,DAT_006477ec);
      GetClientRect(*(HWND *)(iVar6 + 8),&local_58);
      local_5c = local_58.bottom - local_58.top;
LAB_00426c40:
      local_58.right = local_58.right - local_58.left;
LAB_00426c43:
      FUN_00426140(iVar6,local_58.right,local_5c,0);
    }
  }
  else {
    fVar8 = (float10)FUN_005c9630(param_1,param_2,&local_70,0,&local_58,0);
    puVar7 = local_48;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    local_68 = (double)fVar8;
    local_38 = (double)fVar8;
    local_18 = 0;
    local_14 = 0;
    local_48[0] = 0x40;
    local_10 = 0;
    local_48[1] = 0xffffffff;
    local_c = 0;
    local_48[2] = 0;
    local_48[3] = 0;
    local_30 = 0;
    local_2c = 0x3ff00000;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    if (iVar3 == 0) {
      FUN_0043d0c0();
      Transport_Suspend();
      LVar1 = local_68._4_4_;
      if ((iVar4 == 0) && ((double)CONCAT44(DAT_0064b11c,DAT_0064b118) != local_68)) {
        DAT_0064767c = DAT_0064767c | 2;
        DAT_0064b118 = (int)local_68;
        DAT_0064b11c = local_68._4_4_;
        FUN_005b8ca0(param_1,(int)local_68,local_68._4_4_);
      }
      FUN_005ba6d0(param_1,local_6c,local_70,local_48,&local_58,(int)local_68,LVar1,0);
      if (iVar6 != 0) {
        FUN_00425d70();
        if (iVar4 != 0) {
          fVar8 = (float10)FUN_005b8c70();
          FUN_00427be0((double)fVar8);
        }
        GetClientRect(*(HWND *)(iVar6 + 8),(LPRECT)&local_68);
        local_5c = local_5c - local_68._4_4_;
        local_58.right = local_60;
        local_58.left = (int)local_68;
        goto LAB_00426c40;
      }
    }
    else {
      iVar5 = FUN_00426960(iVar3,local_70,local_48,&local_58);
      if (iVar5 != 0) {
        if ((iVar6 == 0) || (*(int *)(iVar6 + 0x98) != 0)) goto LAB_00426c50;
        Transport_Suspend();
        FUN_00425d70();
        if (iVar4 != 0) {
          fVar8 = (float10)FUN_005b8c70();
          FUN_00427be0((double)fVar8);
        }
        GetClientRect(*(HWND *)(iVar6 + 8),(LPRECT)&local_68);
        local_5c = local_5c - local_68._4_4_;
        local_58.right = local_60 - (int)local_68;
        goto LAB_00426c43;
      }
      Transport_Suspend();
    }
  }
  Transport_Resume(0);
LAB_00426c50:
  FUN_005ba030(param_1,iVar3,0,1);
  return;
}


