/* Module: vegas30k.dll
   Function: FUN_01184d10
   Address: 01184d10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 __thiscall FUN_01184d10(int param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  undefined4 local_20;
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  
  local_14 = -1;
  local_18 = 0xfffffffe;
  if (*(int *)(param_1 + 0x6a4) == 0) {
    return 0xfffffffffffffffe;
  }
  local_20 = 0;
  if ((*(int *)(param_1 + 0x824) != 0) && ((*(uint *)(param_1 + 0x20) & 0x1800) == 0)) {
    return 0xfffffffffffffffe;
  }
  if ((*(int *)(param_1 + 0x6e0) != 0) && ((*(uint *)(param_1 + 0x20) & 0x200) != 0)) {
    local_10 = *(uint *)(param_1 + 0x700);
    local_c = *(int *)(param_1 + 0x704);
    local_18 = 0;
    local_14 = 0;
    if (*(int *)(param_1 + 0x48) != 0) {
      bVar6 = local_10 < param_2;
      local_10 = local_10 - param_2;
      local_c = (local_c - param_3) - (uint)bVar6;
    }
LAB_01184dbf:
    uVar5 = param_2 - local_18;
    iVar1 = (param_3 - local_14) - (uint)(param_2 < local_18);
    iVar3 = *(ushort *)(param_1 + 0x504) * local_18;
    iVar4 = param_3;
    uVar2 = param_2;
    if (*(int *)(param_1 + 0x6c8) == 0) {
      uVar2 = (**(code **)(param_1 + 0x6e0))
                        (param_1,0x20,*(undefined4 *)(param_1 + 0x6e4),param_1 + 0x4f8,
                         *(int *)(param_1 + 0x6e8) + iVar3,param_4 | 0x1000000,
                         *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),local_10,
                         local_c,uVar5,iVar1,*(undefined4 *)(param_1 + 0x894),
                         *(undefined4 *)(param_1 + 0x898),*(undefined4 *)(param_1 + 0x89c));
      iVar4 = (int)uVar2 >> 0x1f;
      if (uVar2 == 0xfffffffe) {
        local_20 = 1;
        _SfAudio_FillSilence_12(param_1 + 0x4f8,*(int *)(param_1 + 0x6e8) + iVar3,uVar5);
        iVar4 = iVar1;
        uVar2 = uVar5;
      }
      else if ((uVar2 == 0xfffffffd) || (uVar2 == 0xffffffff)) {
        local_18 = 0xfffffffd;
        local_14 = -1;
LAB_01184efb:
        FUN_011949f0(*(undefined4 *)(param_1 + 0x700),0,*(undefined4 *)(param_1 + 0x6e8),local_18,0,
                     *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),
                     *(undefined4 *)(param_1 + 0x48),*(uint *)(param_1 + 0x764) >> 0x1c & 1,local_20
                    );
        *(uint *)(param_1 + 0x764) = *(uint *)(param_1 + 0x764) & 0xefffffff;
        goto LAB_01184f4e;
      }
    }
    uVar5 = *(uint *)(param_1 + 0x710);
    bVar6 = CARRY4(local_18,uVar2);
    local_18 = local_18 + uVar2;
    local_14 = local_14 + iVar4 + (uint)bVar6;
    *(uint *)(param_1 + 0x710) = uVar5 + uVar2;
    bVar6 = CARRY4(local_10,uVar2);
    local_10 = local_10 + uVar2;
    *(uint *)(param_1 + 0x714) = *(int *)(param_1 + 0x714) + iVar4 + (uint)CARRY4(uVar5,uVar2);
    local_c = local_c + iVar4 + (uint)bVar6;
    if (((int)param_2 >> 0x1f < local_14) ||
       (((int)param_2 >> 0x1f <= local_14 && (param_2 <= local_18)))) goto LAB_01184efb;
    goto LAB_01184dbf;
  }
LAB_01184f4e:
  return CONCAT44(local_14,local_18);
}


