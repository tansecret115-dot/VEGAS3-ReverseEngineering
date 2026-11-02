/* Module: sfmarket2.dll
   Function: FUN_0040f6c0
   Address: 0040f6c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0040f6c0(void *this,HWND param_1,uint *param_2,int param_3)

{
  undefined4 uVar1;
  bool bVar2;
  LONG LVar3;
  undefined3 extraout_var;
  HWND pHVar4;
  int *piVar5;
  undefined3 extraout_var_00;
  int iVar6;
  int local_a4;
  HWND local_a0;
  int local_9c;
  HWND local_98;
  void *local_94;
  int local_90;
  HWND local_8c;
  LPCRITICAL_SECTION local_88;
  LONG *local_84;
  undefined **local_80 [2];
  undefined4 auStack_78 [5];
  undefined **ppuStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int *piStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  HWND pHStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  local_84 = (LONG *)((int)this + 0x1c);
  local_94 = this;
  LVar3 = InterlockedExchange(local_84,1);
  if (LVar3 != 0) {
    return 0;
  }
  local_88 = (LPCRITICAL_SECTION)((int)this + 4);
  EnterCriticalSection(local_88);
  local_90 = 0;
  local_9c = 0;
  local_a4 = 0;
  while( true ) {
    piVar5 = *(int **)((int)this + 0x20);
    if (piVar5 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar5;
    }
    if ((iVar6 <= local_a4) || ((param_3 <= local_9c && (param_3 != 0)))) break;
    pHVar4 = *(HWND *)(piVar5[2] + local_a4 * 4);
    local_98 = pHVar4;
    bVar2 = FUN_0040ea60((int)pHVar4);
    if (CONCAT31(extraout_var,bVar2) != 0) {
      if (local_90 == 0) {
        local_a0 = (HWND)0x0;
        local_90 = InternetGetConnectedState(&local_a0,0);
        if (local_90 == 0) goto LAB_0040f93e;
      }
      uVar1 = *(undefined4 *)((int)this + 0x38);
      FUN_00411560((int)local_80);
      uStack_60 = DAT_004a40a0;
      uStack_5c = DAT_004a40a4;
      uStack_58 = DAT_004a40a8;
      uStack_54 = DAT_004a40ac;
      uStack_50 = DAT_004a4090;
      uStack_4c = DAT_004a4094;
      uStack_48 = DAT_004a4098;
      uStack_44 = DAT_004a409c;
      uStack_2c = 0;
      uStack_1c = 0;
      uStack_28 = 0;
      uStack_18 = 0;
      uStack_24 = 0;
      uStack_14 = 0;
      uStack_8 = (uint)(param_2 != (uint *)0x0);
      uStack_3c = 0xfefefefe;
      uStack_40 = 1;
      uStack_3e = 0;
      uStack_38 = 0;
      piStack_34 = (int *)0x0;
      uStack_30 = 0;
      local_80[0] = &PTR_LAB_00495fa8;
      ppuStack_64 = &PTR_LAB_00495f88;
      uStack_20 = 0;
      uStack_10 = 0;
      iVar6 = -1;
      pHStack_c = pHVar4;
      uStack_4 = uVar1;
      local_a0 = GetFocus();
      FUN_00406260(0x4a9c08,auStack_78,local_80);
      pHVar4 = FUN_004074a0(DAT_004a9c10,(HWND)0x18e,param_1,FUN_00407070,0);
      if (pHVar4 != (HWND)0x0) {
        EnableWindow(param_1,0);
        piVar5 = (int *)(*(code *)local_80[0][3])();
        if (piVar5 != (int *)0x0) {
          DAT_004a9da0 = 0xfffffffe;
          iVar6 = FUN_004120a0(pHVar4,local_a0,piVar5);
          (**(code **)(*piVar5 + 8))(piVar5);
        }
        EnableWindow(param_1,1);
      }
      local_9c = local_9c + 1;
      if (param_2 != (uint *)0x0) {
        *param_2 = (uint)(iVar6 != 0);
      }
      FUN_0040eb90((int)local_98);
      local_80[0] = &PTR_LAB_00495fa8;
      ppuStack_64 = &PTR_LAB_00495f88;
      this = local_94;
      if (piStack_34 != (int *)0x0) {
        (**(code **)(*piStack_34 + 8))(piStack_34);
        piStack_34 = (int *)0x0;
        this = local_94;
      }
    }
LAB_0040f93e:
    local_a4 = local_a4 + 1;
  }
  local_a4 = 0;
  do {
    piVar5 = *(int **)((int)this + 0x24);
    if (piVar5 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar5;
    }
    if ((iVar6 <= local_a4) || ((param_3 <= local_9c && (param_3 != 0)))) {
      InterlockedExchange(local_84,0);
      LeaveCriticalSection(local_88);
      return 0;
    }
    pHVar4 = *(HWND *)(piVar5[2] + local_a4 * 4);
    local_8c = pHVar4;
    bVar2 = FUN_0040ea60((int)pHVar4);
    if (CONCAT31(extraout_var_00,bVar2) != 0) {
      if (local_90 == 0) {
        local_98 = (HWND)0x0;
        local_90 = InternetGetConnectedState(&local_98,0);
        if (local_90 == 0) goto LAB_0040fb11;
      }
      uVar1 = *(undefined4 *)((int)this + 0x38);
      FUN_00411560((int)local_80);
      FUN_00411570((int)&ppuStack_64);
      uStack_2c = 0;
      uStack_1c = 0;
      uStack_28 = 0;
      uStack_18 = 0;
      uStack_24 = 0;
      uStack_14 = 0;
      uStack_8 = (uint)(param_2 != (uint *)0x0);
      uStack_38 = 0;
      piStack_34 = (int *)0x0;
      uStack_30 = 0;
      local_80[0] = &PTR_LAB_00495fa8;
      ppuStack_64 = &PTR_LAB_00495f88;
      uStack_20 = 0;
      uStack_10 = 0;
      local_a0 = (HWND)0xffffffff;
      pHStack_c = pHVar4;
      uStack_4 = uVar1;
      local_98 = GetFocus();
      pHVar4 = FUN_00412260(local_80,param_1,0);
      if (pHVar4 != (HWND)0x0) {
        EnableWindow(param_1,0);
        piVar5 = (int *)(*(code *)local_80[0][3])();
        if (piVar5 != (int *)0x0) {
          DAT_004a9da0 = 0xfffffffe;
          local_a0 = (HWND)FUN_004120a0(pHVar4,local_98,piVar5);
          (**(code **)(*piVar5 + 8))(piVar5);
        }
        EnableWindow(param_1,1);
      }
      local_9c = local_9c + 1;
      if (param_2 != (uint *)0x0) {
        *param_2 = (uint)(local_a0 != (HWND)0x0);
      }
      FUN_0040eb90((int)local_8c);
      local_80[0] = &PTR_LAB_00495fa8;
      ppuStack_64 = &PTR_LAB_00495f88;
      this = local_94;
      if (piStack_34 != (int *)0x0) {
        (**(code **)(*piStack_34 + 8))(piStack_34);
        piStack_34 = (int *)0x0;
        this = local_94;
      }
    }
LAB_0040fb11:
    local_a4 = local_a4 + 1;
  } while( true );
}


