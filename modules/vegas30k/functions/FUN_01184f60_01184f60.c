/* Module: vegas30k.dll
   Function: FUN_01184f60
   Address: 01184f60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 __thiscall FUN_01184f60(int param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  uint local_10;
  int local_c;
  
  *(undefined4 *)(param_1 + 0x548) = *(undefined4 *)(param_1 + 0x8a0);
  *(undefined4 *)(param_1 + 0x54c) = *(undefined4 *)(param_1 + 0x8a4);
  if (*(int *)(param_1 + 0x48) != 0) {
    uVar3 = *(uint *)(param_1 + 0x548);
    *(uint *)(param_1 + 0x548) = uVar3 - param_3;
    *(uint *)(param_1 + 0x54c) = (*(int *)(param_1 + 0x54c) - param_4) - (uint)(uVar3 < param_3);
  }
  if ((*(int *)(param_1 + 0x51c) != 0) && ((*(byte *)(param_1 + 0x20) & 4) != 0)) {
    local_10 = 0;
    local_c = 0;
    do {
      uVar5 = param_3 - local_10;
      iVar4 = param_4;
      uVar3 = param_3;
      if (*(int *)(param_1 + 400) == 0) {
        iVar2 = *(ushort *)(param_1 + 0x504) * local_10 + param_2;
        uVar3 = (**(code **)(param_1 + 0x51c))
                          (param_1,0x20,*(undefined4 *)(param_1 + 0x520),param_1 + 0x4f8,iVar2,
                           param_5 & 0x30000000 | *(uint *)(param_1 + 0x528),
                           *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),
                           *(undefined4 *)(param_1 + 0x548),*(undefined4 *)(param_1 + 0x54c),uVar5,0
                           ,*(undefined4 *)(param_1 + 0x894),*(undefined4 *)(param_1 + 0x898),
                           *(undefined4 *)(param_1 + 0x89c));
        iVar4 = (int)uVar3 >> 0x1f;
        param_5 = 0;
        if (uVar3 == 0xfffffffe) {
          _SfAudio_FillSilence_12(param_1 + 0x4f8,iVar2,uVar5);
          iVar4 = (param_4 - local_c) - (uint)(param_3 < local_10);
          uVar3 = uVar5;
        }
        else if (uVar3 == 0xfffffffd) {
          return 0xfffffffffffffffd;
        }
      }
      uVar5 = *(uint *)(param_1 + 0x548);
      bVar6 = CARRY4(local_10,uVar3);
      local_10 = local_10 + uVar3;
      local_c = local_c + iVar4 + (uint)bVar6;
      *(uint *)(param_1 + 0x548) = uVar5 + uVar3;
      uVar1 = *(uint *)(param_1 + 0x540);
      *(uint *)(param_1 + 0x540) = uVar1 + uVar3;
      *(uint *)(param_1 + 0x54c) = *(int *)(param_1 + 0x54c) + iVar4 + (uint)CARRY4(uVar5,uVar3);
      *(uint *)(param_1 + 0x544) = *(int *)(param_1 + 0x544) + iVar4 + (uint)CARRY4(uVar1,uVar3);
    } while ((local_c <= (int)param_3 >> 0x1f) &&
            ((local_c < (int)param_3 >> 0x1f || (local_10 < param_3))));
    return CONCAT44(local_c,local_10);
  }
  _SfAudio_FillSilence_12(param_1 + 0x4f8,param_2,param_3);
  uVar3 = *(uint *)(param_1 + 0x548);
  *(uint *)(param_1 + 0x548) = uVar3 + param_3;
  uVar5 = *(uint *)(param_1 + 0x540);
  *(uint *)(param_1 + 0x54c) = *(int *)(param_1 + 0x54c) + param_4 + (uint)CARRY4(uVar3,param_3);
  *(uint *)(param_1 + 0x540) = uVar5 + param_3;
  *(uint *)(param_1 + 0x544) = *(int *)(param_1 + 0x544) + param_4 + (uint)CARRY4(uVar5,param_3);
  return CONCAT44(param_4,param_3);
}


