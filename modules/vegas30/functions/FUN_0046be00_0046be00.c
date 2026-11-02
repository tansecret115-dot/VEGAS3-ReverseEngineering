/* Module: vegas30.exe
   Function: FUN_0046be00
   Address: 0046be00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0046be00(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,
                int param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  uint local_8;
  int local_4;
  
  iVar6 = 1;
  local_14 = (int *)FUN_005b87b0(param_1);
  local_c = *local_14;
  local_24 = (int *)0x0;
  local_18 = 0;
  if (0 < local_c) {
    do {
      local_10 = *(int *)(local_14[2] + local_18 * 4);
      if ((*(uint *)(local_10 + 0x10) & 0x100000) != 0) {
        if (param_7 == 0) {
          iVar6 = FUN_0047ee30(&local_24,local_10,DAT_00647790,3);
          if (iVar6 < 0) break;
          if (local_24 == (int *)0x0) {
            local_1c = 0;
          }
          else {
            local_1c = *local_24;
          }
          local_20 = 0;
          if (0 < local_1c) {
            local_8 = param_3 + param_5;
            local_4 = param_4 + param_6 + (uint)CARRY4(param_3,param_5);
            do {
              uVar1 = *(uint *)(local_24[1] * local_20 + local_24[2]);
              iVar2 = local_24[1] * local_20 + local_24[2];
              iVar3 = *(int *)(iVar2 + 4);
              uVar5 = param_3;
              iVar7 = param_4;
              if ((param_4 <= iVar3) && ((param_4 < iVar3 || (param_3 < uVar1)))) {
                uVar5 = uVar1;
                iVar7 = iVar3;
              }
              uVar4 = *(uint *)(iVar2 + 8) + uVar1;
              iVar3 = *(int *)(iVar2 + 0xc) + iVar3 + (uint)CARRY4(*(uint *)(iVar2 + 8),uVar1);
              if ((local_4 < iVar3) || ((local_4 <= iVar3 && (local_8 <= uVar4)))) {
                iVar3 = local_4;
                uVar4 = local_8;
              }
            } while (((iVar3 < iVar7) ||
                     (((iVar3 <= iVar7 && (uVar4 <= uVar5)) ||
                      (iVar6 = FUN_0046a5a0(param_1,local_10,param_2,uVar5,iVar7,uVar4 - uVar5,
                                            (iVar3 - iVar7) - (uint)(uVar4 < uVar5),0xffffffff),
                      -1 < iVar6)))) && (local_20 = local_20 + 1, local_20 < local_1c));
          }
        }
        else {
          iVar6 = FUN_0046a5a0(param_1,local_10,param_2,param_3,param_4,param_5,param_6,0xffffffff);
          if (iVar6 < 0) break;
        }
      }
      local_18 = local_18 + 1;
    } while (local_18 < local_c);
    if (local_24 != (int *)0x0) {
      _SfList_Destroy_4(local_24);
    }
  }
  return iVar6;
}


