/* Module: encn3260.dll
   Function: FUN_6649eeb0
   Address: 6649eeb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_6649eeb0(void *this,int *param_1,int param_2)

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
  
  *(undefined ***)this = &PTR_LAB_664defd8;
  *(undefined ***)((int)this + 4) = &PTR_LAB_664ded80;
  *(undefined ***)((int)this + 8) = &PTR_LAB_664defb8;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_664def98;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_664ddfd0;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_664ded48;
  *(undefined ***)((int)this + 0x18) = &PTR_LAB_664def60;
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_664def50;
  *(undefined ***)((int)this + 0x20) = &PTR_LAB_664dde40;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(int **)((int)this + 0x28) = param_1;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  FUN_664ba900((undefined4 *)((int)this + 0x38));
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(int *)((int)this + 0x54) = param_2;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(byte *)((int)this + 0x60) = *(byte *)((int)this + 0x60) & 0xc;
  *(byte *)((int)this + 0x61) = *(byte *)((int)this + 0x61) & 0xe6;
  *(undefined4 *)((int)this + 0x62) = 0;
  *(undefined4 *)((int)this + 0x66) = 0;
  FUN_664ba900((undefined4 *)((int)this + 0x6a));
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
  *(undefined ***)this = &PTR_FUN_664def40;
  *(undefined ***)((int)this + 4) = &PTR_FUN_664deef8;
  *(undefined ***)((int)this + 8) = &PTR_LAB_664deed8;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_664deeb8;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_664dee78;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_664dee40;
  *(undefined ***)((int)this + 0x18) = &PTR_LAB_664dee08;
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_664dedf8;
  *(undefined ***)((int)this + 0x20) = &PTR_LAB_664dede8;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  UVar1 = RegisterWindowMessageA(s_EmbededSiteWindowMovingMsg_664e3294);
  *(UINT *)((int)this + 0x9a) = UVar1;
  piVar2 = operator_new(0x6c);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    *piVar2 = (int)&PTR_LAB_664ddfd0;
    piVar2[1] = 0;
    FUN_664bdbb0(piVar2 + 2,10);
    FUN_664bdbb0(piVar2 + 9,10);
    FUN_664bdbb0(piVar2 + 0x10,10);
    piVar2[0x17] = 0;
    piVar2[0x18] = 0;
    piVar2[0x19] = 0;
    piVar2[0x1a] = 0;
    *piVar2 = (int)&PTR_FUN_664ddf90;
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
  (**(code **)*param_1)(param_1,&DAT_664dcb00,&local_c);
  local_8 = (int *)0x0;
  sprintf(local_10c,s__s__s_664e326c,s_FullScreenData_664e3274,s_NewFullScreen_664e3284);
  puVar3 = operator_new(0x28);
  if (puVar3 == (undefined4 *)0x0) {
    local_8 = (int *)0x0;
  }
  else {
    local_8 = (int *)FUN_664bad50(puVar3);
  }
  (**(code **)(*local_8 + 4))(local_8);
  (**(code **)(*local_8 + 0x10))(local_8,&DAT_664e2818,2);
  (**(code **)(*local_c + 0x10))(local_c,local_10c,local_8);
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  *(byte *)((int)this + 0x61) = *(byte *)((int)this + 0x61) | 2;
  DAT_664f06d4 = 1;
  if ((local_c != (int *)0x0) &&
     (iVar4 = (**(code **)(*local_c + 0xc))(local_c,s_UseWinDraw_664e3260,&local_8), iVar4 == 0)) {
    pcVar5 = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
    iVar4 = atoi(pcVar5);
    DAT_664f06d4 = (uint)(iVar4 == 1);
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  *(byte *)((int)this + 0x61) = *(byte *)((int)this + 0x61) | 4;
  if ((local_c != (int *)0x0) &&
     (iVar4 = (**(code **)(*local_c + 0xc))(local_c,s_UseOptimizedScheduler_664e3248,&local_8),
     iVar4 == 0)) {
    pcVar5 = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
    iVar4 = atoi(pcVar5);
    *(byte *)((int)this + 0x61) = *(byte *)((int)this + 0x61) & 0xfb | (iVar4 == 1) << 2;
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  DAT_664f0718 = 0;
  if ((((*(byte *)((int)this + 0x61) & 2) != 0) && (local_c != (int *)0x0)) &&
     (iVar4 = (**(code **)(*local_c + 0xc))(local_c,s_UseWindrawFullScreen_664e3230,&local_8),
     iVar4 == 0)) {
    pcVar5 = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
    iVar4 = atoi(pcVar5);
    DAT_664f0718 = (uint)(iVar4 == 1);
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  DAT_664f071c = 0;
  if ((local_c != (int *)0x0) &&
     (iVar4 = (**(code **)(*local_c + 0xc))(local_c,s_NoFSMenu_664e3224,&local_8), iVar4 == 0)) {
    pcVar5 = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
    iVar4 = atoi(pcVar5);
    DAT_664f071c = (uint)(iVar4 == 1);
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  DAT_664f0718 = 1;
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
      piVar2 = FUN_664ae8f0(pvVar6,*(int **)((int)this + 0x28),this);
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
      piVar2 = FUN_664af0f0(pvVar6,*(int **)((int)this + 0x28),this);
      *(int **)((int)this + 0xbc) = piVar2;
    }
  }
  (**(code **)(*piVar2 + 4))(piVar2);
  if (DAT_664f0718 != 0) {
    pvVar6 = operator_new(0x937);
    if (pvVar6 == (void *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_664af0f0(pvVar6,*(int **)((int)this + 0x28),this);
    }
    *(int **)((int)this + 0xc0) = piVar2;
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  FUN_664ae370(&DAT_664f0658,param_1);
  FUN_664ae390(&DAT_664f0658,FUN_664a4c40);
  if ((*(byte *)((int)this + 0x61) & 2) != 0) {
    puVar3 = operator_new(0x14);
    if (puVar3 == (undefined4 *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_664a4c90(puVar3);
    }
    *(int *)((int)this + 0xcd) = iVar4;
    *(void **)(iVar4 + 4) = this;
    (**(code **)(**(int **)((int)this + 0xcd) + 4))(*(int **)((int)this + 0xcd));
    (**(code **)*param_1)(param_1,&DAT_664dc6c0,(int)this + 0xd1);
  }
  return this;
}


