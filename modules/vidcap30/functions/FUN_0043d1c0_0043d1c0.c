/* Module: vidcap30.exe
   Function: FUN_0043d1c0
   Address: 0043d1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043d1c0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  undefined4 local_150;
  int local_14c;
  int local_148 [3];
  undefined4 local_13c [10];
  undefined1 local_114 [16];
  undefined1 local_104 [260];
  
  uVar1 = _SfGetUIFont_4(100);
  local_148[2] = _SfGetUIFont_4(100);
  uVar2 = _SfGetUIFont_4(0x68);
  puVar10 = &DAT_005bb810;
  puVar9 = local_13c;
  for (iVar8 = 10; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar9 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar9 = puVar9 + 1;
  }
  local_148[0] = 0;
  local_148[1] = 0;
  local_154 = 0;
  local_150 = 0;
  local_14c = 0;
  local_164 = 0;
  local_160 = 0;
  local_15c = 0;
  local_158 = 0;
  local_13c[0] = 1;
  _SfNanoTimeToTextEx_20(local_104,local_13c,0,0,2);
  uVar3 = FUN_00460780(*(undefined4 *)(param_1 + 8),0x1f6,local_104,0x10000202,0x20,&local_164);
  *(undefined4 *)(param_1 + 0x13dc) = uVar3;
  FUN_00460850(uVar3,0x30,uVar2,0);
  FUN_00460850(*(undefined4 *)(param_1 + 0x13dc),0x607,0,param_1 + 0x13e8);
  uVar3 = FUN_00460780(*(undefined4 *)(param_1 + 8),0x20d,local_104,0x10000202,0x20,&local_164);
  *(undefined4 *)(param_1 + 0x13e0) = uVar3;
  FUN_00460850(uVar3,0x30,uVar2,0);
  uVar3 = FUN_00460780(*(undefined4 *)(param_1 + 8),0x214,&DAT_00586f4c,0x10000202,0x20,&local_164);
  *(undefined4 *)(param_1 + 0x13e4) = uVar3;
  FUN_00460850(uVar3,0x30,uVar2,0);
  uVar2 = FUN_00460780(*(undefined4 *)(param_1 + 8),0x20e,"Current location:",0x10000200,0x20,
                       &local_164);
  *(undefined4 *)(param_1 + 0x13d0) = uVar2;
  FUN_00460850(uVar2,0x30,uVar1,0);
  uVar2 = FUN_00460780(*(undefined4 *)(param_1 + 8),0x20f,"Capture duration:",0x10000200,0x20,
                       &local_164);
  *(undefined4 *)(param_1 + 0x13d4) = uVar2;
  FUN_00460850(uVar2,0x30,uVar1,0);
  uVar2 = FUN_00460780(*(undefined4 *)(param_1 + 8),0x213,"Dropped frames:",0x10000200,0x20,
                       &local_164);
  *(undefined4 *)(param_1 + 0x13d8) = uVar2;
  FUN_00460850(uVar2,0x30,uVar1,0);
  piVar6 = (int *)(param_1 + 0x1400);
  FUN_00460850(*(undefined4 *)(param_1 + 0x13d4),0x607,0,piVar6);
  iVar8 = *piVar6;
  FUN_00460850(*(undefined4 *)(param_1 + 0x13d0),0x607,0,piVar6);
  iVar4 = *piVar6;
  if (*piVar6 < iVar8) {
    iVar4 = iVar8;
  }
  *piVar6 = iVar4;
  uVar1 = FUN_00460780(*(undefined4 *)(param_1 + 8),0x1fc,&DAT_00586c70,0x10000000,0x20,&local_164);
  *(undefined4 *)(param_1 + 0x13cc) = uVar1;
  pvVar5 = calloc(1,0xd4);
  *(void **)(param_1 + 0x13c8) = pvVar5;
  if (pvVar5 != (void *)0x0) {
    _TrackbarInst_Init_28
              (pvVar5,0x60c,&local_164,*(undefined4 *)(param_1 + 8),0x1fb,FUN_00441070,param_1);
    _TrackbarInst_Message_16(*(undefined4 *)(param_1 + 0x13c8),0x611,0,0);
    _TrackbarInst_Message_16(*(undefined4 *)(param_1 + 0x13c8),0x61f,0,1);
    _TrackbarInst_Message_16(*(undefined4 *)(param_1 + 0x13c8),10,0,0);
    _TrackbarInst_GetMinSize_8(*(undefined4 *)(param_1 + 0x13c8),param_1 + 0x13f8);
  }
  local_164 = 0;
  local_160 = 0;
  local_15c = 100;
  local_158 = 0x12;
  _TrackbarInst_Move_8(*(undefined4 *)(param_1 + 0x13c8),&local_164);
  piVar6 = (int *)_TrackbarInst_GetThumbRect_4(local_114,*(undefined4 *)(param_1 + 0x13c8));
  local_164 = *piVar6;
  local_160 = piVar6[1];
  local_15c = piVar6[2];
  local_158 = piVar6[3];
  *(int *)(param_1 + 0x13f0) = (local_15c - local_164) * 0xc;
  *(int *)(param_1 + 0x13f4) = local_158 - local_160;
  uVar1 = FUN_00430bf0(*(undefined4 *)(param_1 + 8),0x19,&DAT_005b5580,8,&LAB_0043f8e0,&LAB_0043f950
                      );
  *(undefined4 *)(param_1 + 0x13c0) = uVar1;
  local_150 = DAT_005bb9a0;
  local_154 = DAT_005bb99c;
  FUN_00430860(uVar1,1,DAT_005bb9a4,DAT_005bb9a8,DAT_005bb9ac,DAT_005bb9a8,DAT_005bb998,&local_154,
               100,&LAB_004316b0);
  uVar1 = FUN_00430bf0(*(undefined4 *)(param_1 + 8),0x19,&DAT_005b5508,6,0,0);
  *(undefined4 *)(param_1 + 0x13c4) = uVar1;
  puVar10 = &DAT_005b5518;
  do {
    piVar6 = local_148;
    uVar2 = 0xffffffff;
    uVar1 = _SfGetString_8(DAT_005ba2a0,*puVar10);
    _SfGetTextExtent_16(local_148[2],uVar1,uVar2,piVar6);
    if (local_14c <= local_148[0]) {
      local_14c = local_148[0];
    }
    puVar10 = puVar10 + 5;
  } while (puVar10 < &DAT_005b5590);
  local_154 = local_154 + 8 + local_14c;
  FUN_00430860(*(undefined4 *)(param_1 + 0x13c4),1,DAT_005bb9a4,DAT_005bb9a8,DAT_005bb9ac,
               DAT_005bb9a8,DAT_005bb998,&local_154,100,&LAB_004316b0);
  FUN_0042ffb0(*(undefined4 *)(param_1 + 0x13c0),param_1 + 0x1408);
  iVar8 = *(int *)(param_1 + 0x140c);
  iVar4 = *(int *)(param_1 + 0x13ec);
  iVar7 = iVar8;
  if (iVar8 <= iVar4) {
    iVar7 = iVar4;
  }
  *(int *)(param_1 + 0x1424) = (iVar7 - *(int *)(param_1 + 0x13f4)) / 2;
  if (iVar8 < iVar4) {
    *(undefined4 *)(param_1 + 0x141c) = 0;
    *(int *)(param_1 + 0x1420) = (iVar4 - iVar8) / 2;
    return;
  }
  *(undefined4 *)(param_1 + 0x1420) = 0;
  *(int *)(param_1 + 0x141c) = (iVar8 - iVar4) / 2;
  return;
}


