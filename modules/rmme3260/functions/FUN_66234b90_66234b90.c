/* Module: rmme3260.dll
   Function: FUN_66234b90
   Address: 66234b90
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_66234b90(void *this,int *param_1,int param_2)

{
  UINT UVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  void *pvVar6;
  char local_10c [256];
  int *local_c;
  int *local_8;
  
  *(undefined ***)this = &PTR_LAB_6626c4c8;
  *(undefined ***)((int)this + 4) = &PTR_LAB_6626c270;
  *(undefined ***)((int)this + 8) = &PTR_LAB_6626c4a8;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_6626c488;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_6626b730;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_6626c238;
  *(undefined ***)((int)this + 0x18) = &PTR_LAB_6626c450;
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_6626c440;
  *(undefined ***)((int)this + 0x20) = &PTR_LAB_6626bec8;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(int **)((int)this + 0x28) = param_1;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  FUN_662509f0((undefined4 *)((int)this + 0x38));
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(int *)((int)this + 0x54) = param_2;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(byte *)((int)this + 0x60) = *(byte *)((int)this + 0x60) & 0xc;
  *(byte *)((int)this + 0x61) = *(byte *)((int)this + 0x61) & 0xe6;
  *(undefined4 *)((int)this + 0x62) = 0;
  *(undefined4 *)((int)this + 0x66) = 0;
  FUN_662509f0((undefined4 *)((int)this + 0x6a));
  *(undefined4 *)((int)this + 0x7e) = 0;
  *(undefined4 *)((int)this + 0x82) = 0;
  *(undefined4 *)((int)this + 0x86) = 0xbf800000;
  *(undefined4 *)((int)this + 0x8a) = 0;
  *(undefined4 *)((int)this + 0x8e) = 0;
  *(undefined4 *)((int)this + 0x92) = 0;
  *(undefined4 *)((int)this + 0x96) = 0;
  *(undefined2 *)((int)this + 0xb2) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0x115) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(byte *)((int)this + 0xcc) = *(byte *)((int)this + 0xcc) | 3;
  *(undefined4 *)((int)this + 0xcd) = 0;
  *(undefined4 *)((int)this + 0xd1) = 0;
  *(undefined4 *)((int)this + 0xe5) = 0;
  *(undefined4 *)((int)this + 0xe9) = 0;
  *(undefined4 *)((int)this + 0xed) = 0;
  *(undefined4 *)((int)this + 0xf1) = 0;
  *(undefined4 *)((int)this + 0xf9) = 0;
  *(undefined4 *)((int)this + 0xfd) = 0;
  *(undefined4 *)((int)this + 0x101) = 0xffffffff;
  *(undefined4 *)((int)this + 0x105) = 1;
  *(undefined4 *)((int)this + 0x109) = 0;
  *(undefined4 *)((int)this + 0x10d) = 0;
  *(undefined4 *)((int)this + 0x111) = 0;
  *(undefined4 *)((int)this + 0x119) = 0x3ff00000;
  *(undefined ***)this = &PTR_FUN_6626c430;
  *(undefined ***)((int)this + 4) = &PTR_FUN_6626c3e8;
  *(undefined ***)((int)this + 8) = &PTR_LAB_6626c3c8;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_6626c3a8;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_6626c368;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_6626c330;
  *(undefined ***)((int)this + 0x18) = &PTR_LAB_6626c2f8;
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_6626c2e8;
  *(undefined ***)((int)this + 0x20) = &PTR_LAB_6626c2d8;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  UVar1 = RegisterWindowMessageA(s_EmbededSiteWindowMovingMsg_6626fd74);
  *(UINT *)((int)this + 0x9a) = UVar1;
  piVar2 = operator_new(0x6c);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    *piVar2 = (int)&PTR_LAB_6626b730;
    piVar2[1] = 0;
    FUN_66252680(piVar2 + 2,10);
    FUN_66252680(piVar2 + 9,10);
    FUN_66252680(piVar2 + 0x10,10);
    piVar2[0x17] = 0;
    piVar2[0x18] = 0;
    piVar2[0x19] = 0;
    piVar2[0x1a] = 0;
    *piVar2 = (int)&PTR_FUN_6626b6f0;
  }
  *(int **)((int)this + 0x50) = piVar2;
  (**(code **)(*piVar2 + 4))(piVar2);
  if (param_2 == 0) {
    *(void **)((int)this + 0x54) = this;
  }
  *(undefined4 *)((int)this + 0xd5) = 0;
  *(undefined4 *)((int)this + 0xd9) = 0;
  *(undefined4 *)((int)this + 0xdd) = 0;
  *(undefined4 *)((int)this + 0xe1) = 0;
  local_c = (int *)0x0;
  (**(code **)*param_1)(param_1,&DAT_6626abb8,&local_c);
  local_8 = (int *)0x0;
  sprintf(local_10c,s__s__s_6626fd4c,s_FullScreenData_6626fd54,s_NewFullScreen_6626fd64);
  puVar3 = operator_new(0x28);
  if (puVar3 == (undefined4 *)0x0) {
    local_8 = (int *)0x0;
  }
  else {
    local_8 = (int *)FUN_662522d0(puVar3);
  }
  (**(code **)(*local_8 + 4))(local_8);
  (**(code **)(*local_8 + 0x10))(local_8,&DAT_6626fd48,2);
  (**(code **)(*local_c + 0x10))(local_c,local_10c,local_8);
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  *(byte *)((int)this + 0x61) = *(byte *)((int)this + 0x61) | 2;
  DAT_6627cedc = 1;
  if ((local_c != (int *)0x0) &&
     (iVar4 = (**(code **)(*local_c + 0xc))(local_c,s_UseWinDraw_6626fd3c,&local_8), iVar4 == 0)) {
    pcVar5 = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
    iVar4 = atoi(pcVar5);
    DAT_6627cedc = (uint)(iVar4 == 1);
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  *(byte *)((int)this + 0x61) = *(byte *)((int)this + 0x61) | 4;
  if ((local_c != (int *)0x0) &&
     (iVar4 = (**(code **)(*local_c + 0xc))(local_c,s_UseOptimizedScheduler_6626fd24,&local_8),
     iVar4 == 0)) {
    pcVar5 = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
    iVar4 = atoi(pcVar5);
    *(byte *)((int)this + 0x61) = *(byte *)((int)this + 0x61) & 0xfb | (iVar4 == 1) << 2;
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  DAT_6627cf20 = 0;
  if ((((*(byte *)((int)this + 0x61) & 2) != 0) && (local_c != (int *)0x0)) &&
     (iVar4 = (**(code **)(*local_c + 0xc))(local_c,s_UseWindrawFullScreen_6626fd0c,&local_8),
     iVar4 == 0)) {
    pcVar5 = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
    iVar4 = atoi(pcVar5);
    DAT_6627cf20 = (uint)(iVar4 == 1);
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  DAT_6627cf24 = 0;
  if ((local_c != (int *)0x0) &&
     (iVar4 = (**(code **)(*local_c + 0xc))(local_c,s_NoFSMenu_6626fd00,&local_8), iVar4 == 0)) {
    pcVar5 = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
    iVar4 = atoi(pcVar5);
    DAT_6627cf24 = (uint)(iVar4 == 1);
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  DAT_6627cf20 = 1;
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
    local_c = (int *)0x0;
  }
  if ((*(byte *)((int)this + 0x61) & 2) == 0) {
    pvVar6 = operator_new(0x90);
    if (pvVar6 == (void *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_66243d90(pvVar6,*(int **)((int)this + 0x28),this);
    }
    *(int **)((int)this + 0x5c) = piVar2;
  }
  else {
    pvVar6 = operator_new(0x937);
    if (pvVar6 == (void *)0x0) {
      piVar2 = (int *)0x0;
      *(undefined4 *)((int)this + 0xbc) = 0;
    }
    else {
      piVar2 = FUN_66244580(pvVar6,*(int **)((int)this + 0x28),this);
      *(int **)((int)this + 0xbc) = piVar2;
    }
  }
  (**(code **)(*piVar2 + 4))(piVar2);
  if (DAT_6627cf20 != 0) {
    pvVar6 = operator_new(0x937);
    if (pvVar6 == (void *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_66244580(pvVar6,*(int **)((int)this + 0x28),this);
    }
    *(int **)((int)this + 0xc0) = piVar2;
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  FUN_66243810(&DAT_6627ce60,param_1);
  FUN_66243830(&DAT_6627ce60,FUN_6623a870);
  if ((*(byte *)((int)this + 0x61) & 2) != 0) {
    puVar3 = operator_new(0x14);
    if (puVar3 == (undefined4 *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_6623a8c0(puVar3);
    }
    *(int *)((int)this + 0xcd) = iVar4;
    *(void **)(iVar4 + 4) = this;
    (**(code **)(**(int **)((int)this + 0xcd) + 4))(*(int **)((int)this + 0xcd));
    (**(code **)*param_1)(param_1,&DAT_6626a658,(int)this + 0xd1);
  }
  return this;
}


