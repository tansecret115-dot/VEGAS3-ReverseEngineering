/* Module: vegas30.exe
   Function: FUN_00591b40
   Address: 00591b40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00591b40(undefined2 *param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float local_1c;
  undefined2 local_14;
  short local_12;
  int local_10;
  int local_c;
  ushort local_8;
  ushort uStack_6;
  undefined2 local_4;
  
  iVar4 = (int)param_1;
  puVar2 = *(undefined2 **)((int)param_1 + 0x6c);
  if ((*(byte *)(param_3 + 0xa4) & 1) == 0) {
    iVar3 = *(int *)(param_3 + 0x3c);
    param_1 = *(undefined2 **)(*(int *)(iVar3 + 0x18) + 0x2c);
    if ((*(uint *)(iVar3 + 0x54) & 2) != 0) {
      param_1 = puVar2;
    }
    if ((*(uint *)(iVar3 + 0x54) & 4) != 0) {
      param_1 = *(undefined2 **)(iVar4 + 0x84);
    }
    iVar6 = __allrem(*(undefined4 *)(param_3 + 0x90),*(undefined4 *)(param_3 + 0x94),
                     *(undefined4 *)(param_3 + 0x98),*(undefined4 *)(param_3 + 0x9c));
    iVar6 = iVar6 - *(int *)(iVar3 + 0x28);
    uVar5 = param_1[6];
    iVar8 = *(int *)(iVar3 + 0x34) - iVar6;
    iVar4 = *(int *)(*(int *)(param_3 + 0x3c) + 0x20);
    iVar3 = *(int *)(param_3 + 0x28);
    iVar7 = iVar3;
    if (iVar8 < iVar3) {
      _SfAudio_FillSilence_12(puVar2,*(undefined4 *)(param_3 + 0x100),iVar3);
      iVar7 = iVar8;
    }
    local_1c = -1.0;
    if ((*(byte *)(param_3 + 0xa4) & 8) == 0) {
      local_1c = 1.0;
    }
    if (*(int *)(param_3 + 0x58) == 0) {
      local_1c = local_1c * *(float *)(param_3 + 100);
    }
    _SfAudio_Copy_24(puVar2,*(undefined4 *)(param_3 + 0x100),param_1,(uint)uVar5 * iVar6 + iVar4,
                     iVar7,local_1c);
    sVar1 = param_1[1];
    if (sVar1 == 1) {
      local_14 = *puVar2;
      local_10 = *(int *)(puVar2 + 2);
      uVar5 = (ushort)puVar2[7] >> 3;
      _local_8 = CONCAT22(puVar2[7],uVar5);
      local_c = (uint)uVar5 * local_10;
      local_4 = 0;
      local_12 = sVar1;
      _SfAudio_ChannelChange_20
                (*(undefined4 *)(param_3 + 0x100),2,*(undefined4 *)(param_3 + 0x100),&local_14,iVar7
                );
    }
    else if ((*(int *)(param_3 + 0x5c) != 1000) && (sVar1 == 2)) {
      FUN_00591a30(*(int *)(param_3 + 0x5c),puVar2,*(undefined4 *)(param_3 + 0x100),iVar7);
    }
    if (*(int *)(param_3 + 0x58) != 0) {
      FUN_00599db0((int *)(param_3 + 0x58),*(undefined4 *)(param_3 + 0x100),
                   *(undefined4 *)(param_3 + 0x100),iVar7,0);
    }
    *(int *)(param_3 + 0x2c) = iVar3;
    *(uint *)(param_3 + 0x30) = (uint)(ushort)puVar2[6] * iVar3;
    return;
  }
  _SfAudio_FillSilence_12(puVar2,*(undefined4 *)(param_3 + 0x100),*(undefined4 *)(param_3 + 0x28));
  return;
}


