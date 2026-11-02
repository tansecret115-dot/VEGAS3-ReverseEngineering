/* Module: vegas30.exe
   Function: FUN_005dbbc0
   Address: 005dbbc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005dbbc0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,uint param_5,
                int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined8 local_128;
  int local_11c;
  int local_118;
  int local_114 [4];
  undefined1 local_104 [260];
  
  local_11c = param_6;
  if (-1 < param_6) {
    uVar8 = CONCAT44(local_128._4_4_,(uint)local_128);
    if (0 < param_6) goto LAB_005dbbf7;
    do {
      local_128 = uVar8;
      if (param_5 == 0) {
        return 0;
      }
LAB_005dbbf7:
      do {
        iVar1 = riff64_ReadChunkHeader(param_1,local_114,&local_128);
        if (iVar1 < 0) {
          return -0x7ffb1ff8;
        }
        iVar1 = 4;
        bVar7 = true;
        piVar5 = &DAT_0062a780;
        piVar6 = local_114;
        do {
          if (iVar1 == 0) break;
          iVar1 = iVar1 + -1;
          bVar7 = *piVar5 == *piVar6;
          piVar5 = piVar5 + 1;
          piVar6 = piVar6 + 1;
        } while (bVar7);
        if (bVar7) {
          FUN_005d1520(param_3 + 0x38);
          iVar2 = _SfList_AllocItem_12(*(undefined4 *)(param_3 + 0x234),0x20,&local_118);
          iVar1 = local_118;
          if (local_118 == 0) {
            return iVar2;
          }
          iVar2 = FUN_005db0d0(param_1,param_2,&local_128,DAT_0062a780,DAT_0062a784,DAT_0062a788,
                               DAT_0062a78c,local_118,local_104);
          if (iVar2 < 0) {
            _SfList_DeleteList_16(*(undefined4 *)(param_3 + 0x234),0xffffffff,0xffffffff,0);
            if (iVar2 != -0x7ffb1f7c) {
              return iVar2;
            }
            iVar1 = _SfList_FindSpecificItemRange_16
                              (*(undefined4 *)(param_4 + 0x1dc),0,0xffffffff,param_3);
            iVar1 = iVar1 + 1;
            puVar10 = local_104;
            uVar3 = _SfGetString_8(DAT_00647204,0x5267);
            SfErrorHandler_DetailsAddString(0x8004e084,uVar3,puVar10,iVar1);
            uVar8 = local_128;
          }
          else {
            if (iVar2 == 0x4e009) {
              iVar2 = _SfList_FindSpecificItemRange_16
                                (*(undefined4 *)(param_4 + 0x1dc),0,0xffffffff,param_3);
              iVar2 = iVar2 + 1;
              puVar10 = local_104;
              uVar3 = _SfGetString_8(DAT_00647204,0x528f);
              SfErrorHandler_DetailsAddString(0x4e009,uVar3,puVar10,iVar2);
            }
            iVar2 = _SfList_InsertList_16(*(undefined4 *)(param_3 + 0x234),0xffffffff,0,0xffffffff);
            if (iVar2 < 0) {
              return iVar2;
            }
            uVar8 = local_128;
            if ((*(int *)(iVar1 + 0x1c) != 0) && (*(int *)(iVar1 + 4) == 0)) {
              *(int *)(param_3 + 0x240) = *(int *)(param_3 + 0x240) + 1;
            }
          }
        }
        else {
          uVar8 = riff64_SkipChunk(param_1,local_128);
        }
        local_128._4_4_ = (int)((ulonglong)uVar8 >> 0x20);
        local_128._0_4_ = (uint)uVar8;
        bVar7 = CARRY4(param_5,-(uint)local_128 - 0x18);
        param_5 = param_5 + (-(uint)local_128 - 0x18);
        local_11c = local_11c + ((-1 - local_128._4_4_) - (uint)(0xffffffe8 < (uint)local_128)) +
                    (uint)bVar7;
        local_128 = uVar8;
        lVar9 = __allrem(uVar8,8,0);
        if (lVar9 != 0) {
          uVar4 = (uint)lVar9 - 8;
          bVar7 = CARRY4(param_5,uVar4);
          param_5 = param_5 + uVar4;
          local_11c = local_11c + ((int)((ulonglong)lVar9 >> 0x20) - (uint)((uint)lVar9 < 8)) +
                      (uint)bVar7;
        }
      } while (0 < local_11c);
      uVar8 = local_128;
    } while (-1 < local_11c);
  }
  return 0;
}


