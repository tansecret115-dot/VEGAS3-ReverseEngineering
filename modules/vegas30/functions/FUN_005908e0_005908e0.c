/* Module: vegas30.exe
   Function: FUN_005908e0
   Address: 005908e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005908e0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  int local_4;
  
  iVar1 = param_1;
  local_14 = *(int *)(*(int *)(param_1 + 0x18) + 0x2c);
  if (*(short *)(local_14 + 2) == 1) {
    param_1 = *(int *)(DAT_0065a06c + 0x84);
  }
  else {
    param_1 = *(int *)(DAT_0065a06c + 0x6c);
  }
  local_c = DAT_0065ab40;
  iVar6 = 0;
  FUN_0058fde0(iVar1,&local_8,&local_20,*(undefined4 *)(iVar1 + 0x38),*(undefined4 *)(iVar1 + 0x3c))
  ;
  bVar7 = 99 < local_8;
  local_8 = local_8 - 100;
  local_4 = local_4 + -1 + (uint)bVar7;
  local_1c = 100;
  if ((local_4 < 1) && (local_4 < 0)) {
    local_8 = 0;
    local_4 = 0;
    local_1c = 0;
  }
  local_18 = 0;
  if (0 < *(int *)(iVar1 + 0xb8)) {
    local_24 = (int *)(iVar1 + 0x58);
    do {
      iVar2 = *local_24;
      local_10 = *(int *)(iVar2 + 0x20);
      uVar3 = *(uint *)(iVar2 + 0x28);
      if ((*(int *)(iVar2 + 0x2c) <= local_4) &&
         ((*(int *)(iVar2 + 0x2c) < local_4 || (uVar3 <= local_8)))) {
        uVar5 = *(uint *)(iVar2 + 0x34);
        iVar4 = ((int)uVar5 >> 0x1f) + *(int *)(iVar2 + 0x2c) + (uint)CARRY4(uVar5,uVar3);
        if ((local_4 <= iVar4) && ((local_4 < iVar4 || (local_8 < uVar5 + uVar3)))) {
          iVar2 = local_8 - *(int *)(iVar2 + 0x28);
          uVar5 = uVar5 - iVar2;
          uVar3 = (local_20 - iVar6) + 200;
          if ((int)uVar3 <= (int)uVar5) {
            uVar5 = uVar3;
          }
          if (0 < (int)uVar5) {
            _SfAudio_Copy_24(param_1,(uint)*(ushort *)(param_1 + 0xc) * iVar6 + local_c,local_14,
                             (uint)*(ushort *)(local_14 + 0xc) * iVar2 + local_10,uVar5,0x3f800000);
            iVar6 = iVar6 + uVar5;
            bVar7 = CARRY4(local_8,uVar5);
            local_8 = local_8 + uVar5;
            local_4 = local_4 + ((int)uVar5 >> 0x1f) + (uint)bVar7;
          }
        }
      }
      local_18 = local_18 + 1;
      local_24 = local_24 + 1;
    } while (local_18 < *(int *)(iVar1 + 0xb8));
    if (0 < iVar6) {
      iVar2 = DAT_0065ab40 + (uint)*(ushort *)(param_1 + 2) * local_1c * 4;
      local_c = *(undefined4 *)(iVar1 + 0x20);
      if (iVar6 < local_20 + 200) {
        _SfAudio_FillSilence_12
                  (param_1,DAT_0065ab40 + (uint)*(ushort *)(param_1 + 2) * iVar6 * 4,
                   (local_20 - iVar6) + 200);
      }
      FUN_00590260(iVar2,local_c,*(undefined4 *)(iVar1 + 0x34),*(undefined4 *)(iVar1 + 0x28),
                   *(undefined4 *)(iVar1 + 0x2c),*(undefined4 *)(iVar1 + 0x38),
                   *(undefined4 *)(iVar1 + 0x3c),*(undefined2 *)(param_1 + 2),local_1c,
                   (iVar6 - local_20 < 0) - 1 & iVar6 - local_20);
      return 0;
    }
  }
  _SfAudio_FillSilence_12(param_1,*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x34));
  return 0;
}


