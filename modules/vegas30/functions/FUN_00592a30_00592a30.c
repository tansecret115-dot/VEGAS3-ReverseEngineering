/* Module: vegas30.exe
   Function: FUN_00592a30
   Address: 00592a30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00592a30(undefined2 param_1,undefined4 *param_2,int param_3)

{
  short sVar1;
  double dVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  HGLOBAL pvVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  LPVOID pMem;
  int iVar10;
  int iVar11;
  LPVOID pvVar12;
  uint uVar13;
  uint uVar14;
  undefined4 unaff_EBP;
  code *pcVar15;
  int *piVar16;
  ulonglong local_48;
  undefined2 local_3c;
  short sStack_3a;
  undefined2 local_38;
  undefined2 uStack_36;
  int local_34;
  undefined4 local_30;
  undefined2 local_2c;
  undefined2 local_28;
  short sStack_26;
  undefined2 local_24;
  undefined2 uStack_22;
  int local_20;
  undefined4 local_1c;
  undefined2 local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  undefined2 local_4;
  
  *param_2 = 0;
  uVar5 = _SfFindResource_12(DAT_00647204,param_1,&DAT_006298c0);
  pvVar6 = (HGLOBAL)_SfLoadResource_8(DAT_00647204,uVar5);
  piVar7 = LockResource(pvVar6);
  uVar8 = _SfSizeofResource_8(DAT_00647204,uVar5);
  if (((uVar8 < 0x2d) || (*piVar7 != 0x46464952)) || (piVar7[2] != 0x45564157)) {
    return 0;
  }
  _param_1 = piVar7[6];
  uVar4 = *(ushort *)((int)piVar7 + 0x22);
  sStack_26 = *(short *)((int)piVar7 + 0x16);
  local_28 = (undefined2)piVar7[5];
  local_14 = piVar7[5];
  uVar3 = (uVar4 >> 3) * sStack_26;
  local_8 = CONCAT22(uVar4,uVar3);
  local_4 = 0;
  local_20 = (uint)uVar3 * _param_1;
  if (piVar7[10] == 0) {
    return 0;
  }
  local_1c = local_8;
  local_24 = (undefined2)_param_1;
  uStack_22 = (undefined2)((uint)_param_1 >> 0x10);
  local_18 = 0;
  uVar8 = (uint)piVar7[10] / (uint)uVar3;
  sVar1 = *(short *)(param_3 + 2);
  local_c = local_20;
  local_10 = _param_1;
  if (sVar1 == sStack_26) {
    pvVar6 = GlobalAlloc(0x42,piVar7[10]);
    piVar9 = GlobalLock(pvVar6);
    if (piVar9 == (int *)0x0) {
      return 0;
    }
    uVar14 = piVar7[10];
    piVar7 = piVar7 + 0xb;
    piVar16 = piVar9;
    for (uVar13 = uVar14 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *piVar16 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar16 = piVar16 + 1;
    }
    for (uVar14 = uVar14 & 3; iVar11 = param_3, uVar14 != 0; uVar14 = uVar14 - 1) {
      *(char *)piVar16 = (char)*piVar7;
      piVar7 = (int *)((int)piVar7 + 1);
      piVar16 = (int *)((int)piVar16 + 1);
    }
  }
  else {
    uVar3 = (uVar4 >> 3) * sVar1;
    local_1c = CONCAT22(uVar4,uVar3);
    local_18 = 0;
    sStack_26 = sVar1;
    local_20 = (uint)uVar3 * _param_1;
    pvVar6 = GlobalAlloc(0x42,uVar3 * uVar8);
    piVar9 = GlobalLock(pvVar6);
    iVar11 = param_3;
    if (piVar9 == (int *)0x0) {
      return 0;
    }
    _param_1 = 0;
    _SfAudio_ChannelChange_20(piVar9,*(undefined2 *)(param_3 + 2),piVar7 + 0xb,&local_14,uVar8);
  }
  local_3c = DAT_006484d8;
  sStack_3a = 2;
  uVar4 = (DAT_006484dc >> 3) << 1;
  local_30 = CONCAT22(DAT_006484dc,uVar4);
  local_38 = local_24;
  uStack_36 = uStack_22;
  local_34 = (uint)uVar4 * CONCAT22(uStack_22,local_24);
  local_2c = 0;
  pvVar6 = GlobalAlloc(0x42,uVar4 * uVar8);
  pMem = GlobalLock(pvVar6);
  pcVar15 = GlobalHandle_exref;
  if (pMem == (LPVOID)0x0) goto LAB_00592e42;
  _SfAudio_Copy_24(&local_3c,pMem,&local_28,piVar9,uVar8,0x3f800000);
  local_20 = local_34;
  local_28 = local_3c;
  sStack_26 = sStack_3a;
  local_18 = local_2c;
  local_24 = local_38;
  uStack_22 = uStack_36;
  local_1c = local_30;
  pcVar15 = GlobalHandle_exref;
  if (*(uint *)(iVar11 + 4) == CONCAT22(uStack_36,local_38)) {
LAB_00592e08:
    if (-1 < _param_1) {
      *param_2 = pMem;
      goto LAB_00592e42;
    }
  }
  else {
    local_48 = (ulonglong)*(uint *)(iVar11 + 4);
    dVar2 = (double)local_48;
    local_48 = (ulonglong)CONCAT22(uStack_36,local_38);
    iVar10 = _SfAudio_ResampleOpenEx_24
                       (&param_3,0x20,*(undefined2 *)(iVar11 + 2),dVar2 / (double)local_48,0x202);
    pcVar15 = GlobalHandle_exref;
    if (-1 < iVar10) {
      sStack_3a = *(short *)(iVar11 + 2);
      local_3c = DAT_006484d8;
      local_34 = *(int *)(iVar11 + 4);
      local_38 = (undefined2)local_34;
      uStack_36 = (undefined2)((uint)local_34 >> 0x10);
      uVar4 = (DAT_006484dc >> 3) * (short)*(undefined4 *)(iVar11 + 2);
      local_30 = CONCAT22(DAT_006484dc,uVar4);
      local_2c = 0;
      _param_1 = -0x7ff8fff2;
      local_34 = (uint)uVar4 * local_34;
      iVar11 = ftol();
      pvVar6 = GlobalAlloc(0x42,iVar11 * (uint)uVar4);
      pvVar12 = GlobalLock(pvVar6);
      pcVar15 = GlobalHandle_exref;
      if (pvVar12 == (LPVOID)0x0) {
        _SfAudio_ResampleClose_4(param_3);
      }
      else {
        _param_1 = 0;
        _SfAudio_ResampleEx_16(param_3,pvVar12,pMem,uVar8);
        pcVar15 = GlobalHandle_exref;
        pvVar6 = GlobalHandle(pMem);
        GlobalUnlock(pvVar6);
        pvVar6 = GlobalHandle(pMem);
        GlobalFree(pvVar6);
        local_20 = local_34;
        local_28 = local_3c;
        sStack_26 = sStack_3a;
        local_24 = local_38;
        uStack_22 = uStack_36;
        local_1c = local_30;
        local_18 = local_2c;
        _SfAudio_ResampleClose_4(param_3);
        pMem = pvVar12;
      }
      goto LAB_00592e08;
    }
  }
  pvVar6 = (HGLOBAL)(*pcVar15)(pMem);
  GlobalUnlock(pvVar6);
  pvVar6 = (HGLOBAL)(*pcVar15)(pMem);
  GlobalFree(pvVar6);
LAB_00592e42:
  pvVar6 = (HGLOBAL)(*pcVar15)(piVar9);
  GlobalUnlock(pvVar6);
  pvVar6 = (HGLOBAL)(*pcVar15)(piVar9);
  GlobalFree(pvVar6);
  return unaff_EBP;
}


