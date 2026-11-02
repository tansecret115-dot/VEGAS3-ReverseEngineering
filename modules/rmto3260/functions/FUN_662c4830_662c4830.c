/* Module: rmto3260.dll
   Function: FUN_662c4830
   Address: 662c4830
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c4830(int *param_1,void *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  byte *pbVar3;
  ushort *puVar4;
  ushort *puVar5;
  uint uVar6;
  byte *pbVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_58 [4];
  undefined4 uStack_54;
  int local_38 [3];
  ushort local_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  uint local_24;
  int local_20;
  undefined4 local_1c [2];
  byte *local_14;
  ushort *local_10;
  uint local_c;
  int local_8;
  
  iVar10 = 0;
  FUN_662ef160(local_38,s_RMFF_1_0_Flags_6630a194);
  FUN_662eeff0(auStack_58,local_38);
  FUN_662dfd50(param_2);
  pbVar3 = operator_new(local_c & 0xffff);
  if (pbVar3 == (byte *)0x0) {
    iVar10 = -0x7ff8fff2;
  }
  local_14 = pbVar3;
  if (-1 < iVar10) {
    FUN_662eeff0(&stack0xffffffa4,local_38);
    iVar10 = FUN_662dfdb0(param_2);
    if (((-1 < iVar10) && (pbVar3 != (byte *)0x0)) && ((local_c & 0xffff) != 0)) {
      uVar1 = CONCAT11(*pbVar3,pbVar3[1]);
      uVar6 = (uint)uVar1;
      local_2c = uVar1;
      puVar4 = operator_new(uVar6 * 2);
      uStack_2a = SUB42(puVar4,0);
      uStack_28 = (undefined2)((uint)puVar4 >> 0x10);
      puVar5 = puVar4;
      pbVar7 = local_14;
      if (uVar1 != 0) {
        do {
          *puVar5 = (ushort)pbVar3[2] << 8;
          *puVar5 = *puVar5 | (ushort)pbVar3[3];
          uVar6 = uVar6 - 1;
          puVar5 = puVar5 + 1;
          pbVar3 = pbVar3 + 2;
        } while (uVar6 != 0);
      }
      goto LAB_662c4916;
    }
  }
  puVar4 = (ushort *)CONCAT22(uStack_28,uStack_2a);
  pbVar7 = pbVar3;
LAB_662c4916:
  iVar9 = 0;
  if (-1 < iVar10) {
    uVar8 = 0xffff;
    local_24 = (uint)local_2c;
    local_8 = 0;
    pbVar7 = local_14;
    if (local_2c != 0) {
      do {
        local_10 = puVar4;
        pbVar7 = local_14;
        if (iVar10 != 0) break;
        uStack_54 = 0x662c494a;
        iVar10 = FUN_662dffa0(param_2,iVar9,(short *)local_1c,(undefined4 *)&local_2c);
        uVar2 = local_1c[0];
        if ((short)local_1c[0] != (short)uVar8) {
          local_8 = 0;
        }
        if ((-1 < iVar10) && ((*local_10 & 2) != 0)) {
          uStack_54 = 0x662c497b;
          iVar10 = (**(code **)(*param_1 + 0x24))();
          if (-1 < iVar10) {
            *(undefined2 *)(local_20 + 0x14) = (undefined2)local_8;
          }
        }
        local_8 = local_8 + 1;
        iVar9 = iVar9 + 1;
        local_10 = local_10 + 1;
        uVar8 = uVar2;
        pbVar7 = local_14;
        puVar4 = local_10;
      } while (iVar9 < (int)local_24);
    }
  }
  if (pbVar7 != (byte *)0x0) {
    operator_delete(pbVar7);
  }
  FUN_662ef0f0(local_38);
  return iVar10;
}


