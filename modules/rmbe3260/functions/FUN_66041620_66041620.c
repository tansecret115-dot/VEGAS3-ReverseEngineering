/* Module: rmbe3260.dll
   Function: FUN_66041620
   Address: 66041620
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_66041620(void *this,int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  char *pcVar10;
  uint local_68 [4];
  int local_58;
  int local_50;
  int local_48;
  undefined2 local_30;
  uint local_2e;
  ushort local_2a;
  ushort uStack_28;
  undefined1 local_24 [8];
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  uint uStack_10;
  uint local_c;
  undefined1 local_8 [3];
  undefined1 local_5;
  
  thunk_FUN_6605b610((int *)((int)this + 0xe6));
  FUN_660422d0((int)this);
  puVar9 = local_68;
  for (iVar6 = 0xe; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  local_68[0] = 0x38;
  FUN_6603d180((int)local_68);
  uVar3 = 0;
  uVar7 = 0;
  local_c = 0;
  if (local_68[2] != 0) {
    do {
      if ((param_1[3] == *(int *)(local_68[3] + uVar3 * 8)) &&
         (param_1[4] == *(int *)(local_68[3] + 4 + uVar3 * 8))) {
        FUN_6605b970((void *)((int)this + 0xe6),*(char **)(local_58 + (uVar7 & 0xffff) * 4));
        uVar3 = 1;
        goto LAB_660416b9;
      }
      uVar7 = uVar7 + 1;
      uVar3 = uVar7 & 0xffff;
    } while (uVar3 < local_68[2]);
    uVar3 = 0;
  }
LAB_660416b9:
  if (uVar3 == 0) {
    return 0xfff5;
  }
  if ((uint)param_1[9] < *(uint *)((uVar7 & 0xffff) * 0x10 + 0xc + local_48)) {
    return 0xfffa;
  }
  puVar4 = FUN_66043a60();
  *(undefined4 **)((int)this + 0xaa) = puVar4;
  if (puVar4 == (undefined4 *)0x0) {
    return 0xfff6;
  }
  local_c = (uVar7 & 0xffff) * 4;
  uStack_28 = *(ushort *)(param_1 + 9);
  iVar6 = *(int *)(DAT_6607527c + local_c);
  local_2a = *(ushort *)(param_1 + 8);
  local_2e = param_1[7];
  local_30 = 1;
  if (local_2a == 8) {
    *(undefined4 *)((int)this + 0xca) = 1;
    local_2a = 0x10;
  }
  *(uint *)((int)this + 0xf6) = local_2e;
  *(short *)((int)this + 0x100) = (short)param_1[8];
  *(ushort *)((int)this + 0x102) = local_2a;
  *(ushort *)((int)this + 0xfe) = uStack_28;
  iVar6 = FUN_66043b80(*(void **)((int)this + 0xaa),iVar6,(int)&local_30);
  if (iVar6 != 0) {
    return 0xfff6;
  }
  if (*param_1 == 0x34) {
    iVar6 = FUN_66043d30(*(void **)((int)this + 0xaa),(uint)(param_1[0xc] != 0));
    if (iVar6 < 0) {
      return 0xfff6;
    }
    if (param_1[0xc] == 2) {
      FUN_6603dd20(*(void **)((int)this + 0x52),1);
    }
  }
  FUN_66043cd0(*(void **)((int)this + 0xaa),*(int *)(*(int *)((int)this + 0x42) + 0x18));
  FUN_66043cf0(*(void **)((int)this + 0xaa),*(int *)(*(int *)((int)this + 0x42) + 0x1c));
  FUN_66043d10(*(void **)((int)this + 0xaa),*(int *)(*(int *)((int)this + 0x42) + 0x20));
  FUN_66043bc0(*(void **)((int)this + 0xaa),4);
  iVar6 = FUN_66043ba0(*(void **)((int)this + 0xaa),(char *)0x0);
  if (iVar6 != 0) {
    return 0xfff6;
  }
  iVar6 = FUN_66043c70(extraout_ECX,extraout_EDX,*(int **)((int)this + 0xaa));
  if (iVar6 != 0) {
    return 0xfff6;
  }
  FUN_66043be0(*(void **)((int)this + 0xaa),(int)this + 0xd2,local_8,&local_5);
  puVar9 = (uint *)((int)this + 0xb2);
  iVar6 = FUN_66043c10(*(void **)((int)this + 0xaa),(int *)((int)this + 0xae),
                       (int *)((int)this + 0xc2),puVar9,(int *)((int)this + 0xb6),
                       (int *)((int)this + 0xbe));
  if (iVar6 != 0) {
    return 0xfff6;
  }
  iVar6 = *(int *)((int)this + 0xae);
  param_1[10] = iVar6;
  param_1[0xb] = *(int *)((int)this + 0xbe);
  *(uint *)((int)this + 0xda) = iVar6 - *(uint *)((int)this + 0xc2);
  if (*(int *)((int)this + 0xca) != 0) {
    *(uint *)((int)this + 0xc2) = *(uint *)((int)this + 0xc2) >> 1;
    param_1[10] = (uint)param_1[10] >> 1;
    *(uint *)((int)this + 0xda) = *(uint *)((int)this + 0xda) >> 1;
    pvVar5 = operator_new(*(uint *)((int)this + 0xae));
    *(void **)((int)this + 0xc6) = pvVar5;
  }
  uVar3 = *(uint *)(local_50 + local_c);
  *(uint *)((int)this + 0xf2) = uVar3 / 1000;
  uStack_10 = 0;
  local_14 = uVar3;
  if ((double)uVar3 <
      (double)(*puVar9 * 8000) /
      (((double)((uint)(*(int *)((int)this + 0xae) * *(int *)((int)this + 0xb6)) /
                ((uint)(local_2a >> 3) * (uint)uStack_28)) * _DAT_66068168) / (double)local_2e)) {
    local_c = uVar3;
    uVar3 = ftol();
  }
  uStack_10 = 0;
  local_c = uVar3;
  FUN_66043c90(*(void **)((int)this + 0xaa),(short *)&uStack_10);
  uVar7 = *puVar9;
  iVar8 = uVar7 * *(ushort *)((int)this + 0xd2);
  *(undefined4 *)((int)this + 4) = 0x4d445052;
  *(undefined4 *)((int)this + 8) = 0x3a;
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined2 *)((int)this + 0xe) = *(undefined2 *)((int)this + 0x40);
  iVar6 = param_1[6];
  *(uint *)((int)this + 0x18) = uVar7;
  *(uint *)((int)this + 0x1c) = uVar7;
  *(int *)((int)this + 0x20) = iVar6;
  *(uint *)((int)this + 0x10) = uVar3;
  *(uint *)((int)this + 0x14) = uVar3;
  *(uint *)((int)this + 0x24) = (uint)(iVar8 * 8000) / uVar3;
  *(int *)((int)this + 0x28) = param_1[2];
  uVar2 = *(undefined4 *)(*(int *)((int)this + 0x46) + -8);
  *(int *)((int)this + 0x2d) = *(int *)((int)this + 0x46);
  *(char *)((int)this + 0x2c) = (char)uVar2;
  iVar6 = -1;
  pcVar10 = s_audio_x_pn_realaudio_6606cc78;
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  *(char **)((int)this + 0x32) = s_audio_x_pn_realaudio_6606cc78;
  *(byte *)((int)this + 0x31) = ~(byte)iVar6 - 1;
  *(uint *)((int)this + 0x36) = uStack_10 & 0xffff;
  puVar4 = operator_new(uStack_10 & 0xffff);
  *(undefined4 **)((int)this + 0x3a) = puVar4;
  *(uint *)((int)this + 0x104) = (uint)(iVar8 * 16000) / local_c;
  FUN_66043cb0(*(void **)((int)this + 0xaa),puVar4,0);
  FUN_6603dfd0(*(void **)((int)this + 0x52),(undefined4 *)((int)this + 4));
  local_1c = *(undefined4 *)((int)this + 0xb2);
  local_18 = 1;
  (**(code **)(**(int **)((int)this + 0x56) + 0x10))(&local_1c,local_24);
  FUN_66042240((int)this);
  *(undefined4 *)((int)this + 0xce) = 1;
  return 0;
}


