/* Module: vegas30.exe
   Function: FUN_004fece0
   Address: 004fece0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004fece0(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  undefined **ppuVar5;
  int iVar6;
  int iVar7;
  uchar *_Source;
  int iVar8;
  uchar *local_120;
  undefined **local_11c;
  int *local_118;
  undefined **local_114;
  int *local_110;
  undefined4 uStack_10c;
  uchar auStack_108 [264];
  
  FUN_004febd0(param_1);
  piVar1 = (int *)(param_1 + 0x17c);
  *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
  _SfList_CreateExZ_32(piVar1,4,0x10,0x10,2,0,0,0);
  if (*piVar1 == 0) {
    return 0x8007000e;
  }
  piVar2 = *(int **)(param_1 + 0x178);
  if (*piVar2 < 1) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x180) < 0) || (*piVar2 <= *(int *)(param_1 + 0x180))) {
    *(undefined4 *)(param_1 + 0x180) = 0;
  }
  iVar6 = *(int *)(param_1 + 0x180);
  if (piVar2 == (int *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *piVar2;
  }
  if ((iVar6 < 0) || (iVar8 + -1 < iVar6)) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(piVar2[2] + iVar6 * 4);
  }
  if (iVar6 == 0) {
    return 0x80004005;
  }
  ppuVar5 = (undefined **)
            FUN_004fa060(iVar6 + 0x20,*(undefined4 *)(iVar6 + 0x30),*(undefined4 *)(iVar6 + 0x150),
                         (undefined4 *)(iVar6 + 0x150));
  if (ppuVar5 == (undefined **)0x0) {
    return 0;
  }
  bVar4 = true;
  local_11c = ppuVar5;
  _SfVideoPlugin_GetInterface_12(&DAT_006335c8,&local_118,ppuVar5[4]);
  if (local_118 != (int *)0x0) {
    local_114 = &PTR_LAB_006121a8;
    local_110 = local_118;
    (**(code **)(*local_118 + 4))(local_118);
    iVar6 = FUN_00449ac0(ppuVar5[4],&local_118);
    iVar8 = 0;
    if (0 < iVar6) {
      do {
        uStack_10c = 0x103;
        iVar7 = FUN_00449b50(*(undefined4 *)(local_120 + 0x10),&local_118,iVar8,auStack_108,
                             &uStack_10c);
        if ((-1 < iVar7) &&
           (_SfList_AllocItem_12(*piVar1,0x158,&local_110), local_110 != (int *)0x0)) {
          bVar4 = false;
          local_110[0x54] = 0;
          local_110[0x47] = local_110[0x47] & 0xfffffffe;
          local_110[0x55] = 0;
          local_110[0x41] = iVar8;
          local_110[0x46] = iVar8;
          _mbscpy((uchar *)local_110,auStack_108);
          _SfList_InsertList_16(*piVar1,0xffffffff,0,0xffffffff);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar6);
    }
    (**(code **)(*local_11c + 8))(local_11c);
    local_11c = &PTR_LAB_006121a8;
    (**(code **)(*local_118 + 8))(local_118);
    if (!bVar4) goto LAB_004fef22;
  }
  _SfList_AllocItem_12(*piVar1,0x158,&local_120);
  if (local_120 != (uchar *)0x0) {
    uVar3 = *(uint *)(local_120 + 0x11c);
    local_120[0x150] = '\0';
    local_120[0x151] = '\0';
    local_120[0x152] = '\0';
    local_120[0x153] = '\0';
    local_120[0x154] = '\0';
    local_120[0x155] = '\0';
    local_120[0x156] = '\0';
    local_120[0x157] = '\0';
    *(uint *)(local_120 + 0x11c) = uVar3 & 0xfffffffe;
    local_120[0x118] = '\0';
    local_120[0x119] = '\0';
    local_120[0x11a] = '\0';
    local_120[0x11b] = '\0';
    local_120[0x104] = '\0';
    local_120[0x105] = '\0';
    local_120[0x106] = '\0';
    local_120[0x107] = '\0';
    _Source = (uchar *)_SfGetString_8(DAT_00647204,0x5644);
    _mbscpy(local_120,_Source);
    _SfList_InsertList_16(*piVar1,0xffffffff,0,0xffffffff);
  }
LAB_004fef22:
  FUN_004fa200(local_11c);
  if ((int *)*piVar1 == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)*piVar1;
  }
  iVar8 = 0;
  if (0 < iVar6) {
    do {
      *(int *)(*(int *)(*(int *)(*piVar1 + 8) + iVar8 * 4) + 0x104) = iVar8;
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar6);
  }
  return 0;
}


