/* Module: vegas30.exe
   Function: FUN_00591d10
   Address: 00591d10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00591d10(int param_1,undefined4 param_2,undefined2 *param_3)

{
  undefined2 *puVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint local_24;
  float local_20;
  undefined2 local_14;
  undefined2 local_12;
  int local_10;
  int local_c;
  ushort local_8;
  ushort uStack_6;
  undefined2 local_4;
  
  iVar2 = (int)param_3;
  iVar8 = *(int *)((int)param_3 + 0x3c);
  uVar9 = *(uint *)((int)param_3 + 0x28);
  puVar1 = *(undefined2 **)(param_1 + 0x6c);
  param_3 = *(undefined2 **)(*(int *)(iVar8 + 0x18) + 0x2c);
  if ((*(uint *)(iVar8 + 0x54) & 2) != 0) {
    param_3 = puVar1;
  }
  if ((*(uint *)(iVar8 + 0x54) & 4) != 0) {
    param_3 = *(undefined2 **)(param_1 + 0x84);
  }
  iVar4 = __allrem(*(undefined4 *)(iVar2 + 0x90),*(undefined4 *)(iVar2 + 0x94),
                   *(undefined4 *)(iVar2 + 0x98),*(undefined4 *)(iVar2 + 0x9c));
  iVar4 = iVar4 - *(int *)(iVar8 + 0x28);
  uVar5 = *(int *)(iVar8 + 0x34) - iVar4;
  uVar3 = param_3[6];
  iVar8 = *(int *)(iVar8 + 0x20);
  local_24 = uVar9;
  if ((int)uVar5 < (int)uVar9) {
    _SfAudio_FillSilence_12(puVar1,*(undefined4 *)(iVar2 + 0x100),uVar9);
    local_24 = uVar5;
  }
  local_20 = -1.0;
  if ((*(byte *)(iVar2 + 0xa4) & 8) == 0) {
    local_20 = 1.0;
  }
  uVar5 = uVar9;
  if (*(int *)(iVar2 + 0x58) == 0) {
    local_20 = local_20 * *(float *)(iVar2 + 100);
    uVar10 = *(undefined4 *)(iVar2 + 0x100);
  }
  else {
    iVar7 = ((int)local_24 >> 0x1f) + *(int *)(iVar2 + 0x74) +
            (uint)CARRY4(local_24,*(uint *)(iVar2 + 0x70));
    iVar6 = (int)*(uint *)(iVar2 + 0x78) >> 0x1f;
    if ((iVar6 <= iVar7) &&
       ((iVar6 < iVar7 || (*(uint *)(iVar2 + 0x78) < local_24 + *(uint *)(iVar2 + 0x70))))) {
      _SfAudio_FillSilence_12(puVar1,*(undefined4 *)(iVar2 + 0x100),uVar9);
      uVar5 = *(uint *)(iVar2 + 0x78);
      if (((int)uVar5 >> 0x1f < *(int *)(iVar2 + 0x74)) ||
         (((int)uVar5 >> 0x1f <= *(int *)(iVar2 + 0x74) && (uVar5 <= *(uint *)(iVar2 + 0x70)))))
      goto LAB_00591e62;
      uVar5 = uVar5 - *(int *)(iVar2 + 0x70);
    }
    uVar10 = *(undefined4 *)(iVar2 + 0x100);
  }
  _SfAudio_Copy_24(puVar1,uVar10,param_3,(uint)uVar3 * iVar4 + iVar8,uVar5,local_20);
LAB_00591e62:
  if (param_3[1] == 1) {
    local_14 = *puVar1;
    local_10 = *(int *)(puVar1 + 2);
    uVar3 = (ushort)puVar1[7] >> 3;
    _local_8 = CONCAT22(puVar1[7],uVar3);
    local_c = (uint)uVar3 * local_10;
    local_12 = 1;
    local_4 = 0;
    _SfAudio_ChannelChange_20
              (*(undefined4 *)(iVar2 + 0x100),2,*(undefined4 *)(iVar2 + 0x100),&local_14,uVar9);
  }
  else if ((*(int *)(iVar2 + 0x5c) != 1000) && (param_3[1] == 2)) {
    FUN_00591a30(*(int *)(iVar2 + 0x5c),puVar1,*(undefined4 *)(iVar2 + 0x100),uVar9);
  }
  if (*(int *)(iVar2 + 0x58) != 0) {
    FUN_00599db0(iVar2 + 0x58,*(undefined4 *)(iVar2 + 0x100),*(undefined4 *)(iVar2 + 0x100),uVar9,0)
    ;
  }
  *(uint *)(iVar2 + 0x2c) = local_24;
  iVar8 = *(int *)(iVar2 + 0x48);
  param_3 = *(undefined2 **)(*(int *)(iVar8 + 0x18) + 0x2c);
  if ((*(uint *)(iVar8 + 0x54) & 2) != 0) {
    param_3 = *(undefined2 **)(param_1 + 0x6c);
  }
  if ((*(uint *)(iVar8 + 0x54) & 4) != 0) {
    param_3 = *(undefined2 **)(param_1 + 0x84);
  }
  iVar4 = __allrem(*(undefined4 *)(iVar2 + 0xe0),*(undefined4 *)(iVar2 + 0xe4),
                   *(undefined4 *)(iVar2 + 0xe8),*(undefined4 *)(iVar2 + 0xec));
  iVar4 = iVar4 - *(int *)(iVar8 + 0x28);
  uVar5 = *(int *)(iVar8 + 0x34) - iVar4;
  iVar8 = (uint)*(ushort *)((int)param_3 + 0xc) * iVar4 + *(int *)(iVar8 + 0x20);
  uVar9 = local_24;
  if ((int)uVar5 < (int)local_24) {
    _SfAudio_FillSilence_12(puVar1,*(undefined4 *)(param_1 + 0xa4),local_24);
    uVar9 = uVar5;
  }
  local_20 = -1.0;
  if ((*(byte *)(iVar2 + 0xf4) & 8) == 0) {
    local_20 = 1.0;
  }
  iVar4 = ((int)local_24 >> 0x1f) + *(int *)(iVar2 + 0xc4) +
          (uint)CARRY4(local_24,*(uint *)(iVar2 + 0xc0));
  iVar7 = (int)*(uint *)(iVar2 + 200) >> 0x1f;
  if ((iVar4 < iVar7) ||
     ((iVar4 <= iVar7 && (local_24 + *(uint *)(iVar2 + 0xc0) <= *(uint *)(iVar2 + 200))))) {
    _SfAudio_Copy_24(puVar1,*(undefined4 *)(param_1 + 0xa4),param_3,iVar8,uVar9,local_20);
  }
  else {
    _SfAudio_FillSilence_12(puVar1,*(undefined4 *)(param_1 + 0xa4),uVar9);
    uVar5 = *(uint *)(iVar2 + 200);
    if ((*(int *)(iVar2 + 0xc4) <= (int)uVar5 >> 0x1f) &&
       ((*(int *)(iVar2 + 0xc4) < (int)uVar5 >> 0x1f || (*(uint *)(iVar2 + 0xc0) < uVar5)))) {
      _SfAudio_Copy_24(puVar1,*(undefined4 *)(param_1 + 0xa4),param_3,iVar8,
                       uVar5 - *(int *)(iVar2 + 0xc0),local_20);
    }
  }
  if (*(short *)((int)param_3 + 2) == 1) {
    local_14 = *puVar1;
    local_10 = *(int *)(puVar1 + 2);
    uVar3 = (ushort)puVar1[7] >> 3;
    _local_8 = CONCAT22(puVar1[7],uVar3);
    local_c = (uint)uVar3 * local_10;
    local_12 = 1;
    local_4 = 0;
    _SfAudio_ChannelChange_20
              (*(undefined4 *)(param_1 + 0xa4),2,*(undefined4 *)(param_1 + 0xa4),&local_14,uVar9);
  }
  else if ((*(int *)(iVar2 + 0xac) != 1000) && (*(short *)((int)param_3 + 2) == 2)) {
    FUN_00591a30(*(int *)(iVar2 + 0xac),puVar1,*(undefined4 *)(param_1 + 0xa4),uVar9);
  }
  FUN_00599db0(iVar2 + 0xa8,*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(iVar2 + 0x100),uVar9,1);
  *(uint *)(iVar2 + 0x2c) = local_24;
  *(uint *)(iVar2 + 0x30) = (ushort)puVar1[6] * local_24;
  return;
}


