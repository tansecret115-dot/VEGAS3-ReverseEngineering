/* Module: vegas30.exe
   Function: FUN_0046c0f0
   Address: 0046c0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0046c0f0(int param_1,uint param_2,uint param_3,uint param_4,int param_5,int param_6,
                undefined4 param_7)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *local_2c;
  undefined4 *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_4;
  
  iVar8 = 1;
  uVar1 = *(undefined4 *)(param_1 + 0xbc8);
  local_18 = (int *)FUN_005b87b0(uVar1);
  local_14 = *local_18;
  local_2c = (undefined4 *)0x0;
  local_1c = 0;
  if (0 < local_14) {
    do {
      iVar5 = *(int *)(local_18[2] + local_1c * 4);
      local_24 = iVar5;
      if ((*(uint *)(iVar5 + 0x10) & 0x100000) != 0) {
        FUN_004ea250(uVar1,iVar5,0xf,0);
        if (param_6 == 0) {
          iVar8 = FUN_0047ee30(&local_2c,iVar5,DAT_00647790,3);
          if (iVar8 < 0) break;
          if (local_2c == (undefined4 *)0x0) {
            local_28 = local_2c;
          }
          else {
            local_28 = (undefined4 *)*local_2c;
          }
          local_20 = 0;
          if (0 < (int)local_28) {
            local_10 = param_2 + param_4;
            local_c = param_3 + param_5 + (uint)CARRY4(param_2,param_4);
            do {
              puVar4 = (uint *)(local_2c[1] * local_20 + local_2c[2]);
              uVar2 = puVar4[1];
              uVar3 = *puVar4;
              uVar7 = param_3;
              uVar9 = param_2;
              if (((int)param_3 <= (int)uVar2) && (((int)param_3 < (int)uVar2 || (param_2 < uVar3)))
                 ) {
                uVar7 = uVar2;
                uVar9 = uVar3;
              }
              uVar6 = puVar4[2] + uVar3;
              iVar5 = puVar4[3] + uVar2 + (uint)CARRY4(puVar4[2],uVar3);
              if ((local_c < iVar5) || ((local_c <= iVar5 && (local_10 <= uVar6)))) {
                iVar5 = local_c;
                uVar6 = local_10;
              }
              if (((int)uVar7 <= iVar5) && (((int)uVar7 < iVar5 || (uVar9 < uVar6)))) {
                local_4 = (iVar5 - uVar7) - (uint)(uVar6 < uVar9);
                iVar8 = FUN_0046bfc0(uVar1,local_24 + 0x638,uVar9,uVar7,uVar6 - uVar9,local_4,
                                     0xffffffff,0);
                if ((iVar8 < 0) ||
                   (iVar8 = FUN_0046c030(uVar1,local_24,uVar9,uVar7,uVar6 - uVar9,local_4,0,0),
                   iVar8 < 0)) break;
              }
              local_20 = local_20 + 1;
            } while (local_20 < (int)local_28);
          }
        }
        else {
          iVar8 = FUN_0046bfc0(uVar1,iVar5 + 0x638,param_2,param_3,param_4,param_5,0xffffffff,
                               param_7);
          if ((iVar8 < 0) ||
             (iVar8 = FUN_0046c030(uVar1,iVar5,param_2,param_3,param_4,param_5,param_7,0), iVar8 < 0
             )) break;
        }
      }
      local_1c = local_1c + 1;
    } while (local_1c < local_14);
    if (local_2c != (undefined4 *)0x0) {
      _SfList_Destroy_4(local_2c);
    }
  }
  return iVar8;
}


