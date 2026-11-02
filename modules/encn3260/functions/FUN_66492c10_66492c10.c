/* Module: encn3260.dll
   Function: FUN_66492c10
   Address: 66492c10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66492c10(void *this,undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  ushort uVar5;
  short sVar6;
  void *pvVar7;
  ushort *puVar8;
  ushort *puVar9;
  undefined3 extraout_var;
  ushort uVar10;
  byte *pbVar11;
  byte *pbVar12;
  ushort uVar13;
  ushort *puVar14;
  ushort uVar15;
  byte *pbVar16;
  bool bVar17;
  byte local_43;
  byte *local_3c;
  byte *local_38;
  uint local_24;
  ushort *local_1c;
  int *local_c;
  
  if (*(int *)((int)this + 0x30) == 0) {
    return 0x80040009;
  }
  uVar4 = *param_2;
  pbVar16 = (byte *)*param_1;
  if ((pbVar16 == (byte *)0x0) || (uVar4 == 0)) {
    pbVar12 = (byte *)0x0;
    pbVar11 = local_38;
  }
  else {
    local_43 = *pbVar16 >> 6 & 1;
    pbVar11 = pbVar16 + 3;
    if ((char)*pbVar16 < '\0') {
      pbVar11 = pbVar16 + 5;
    }
    local_3c = pbVar16 + (uVar4 - (int)pbVar11);
    pbVar12 = pbVar11 + (int)local_3c;
    if (uVar4 < (uint)((int)pbVar12 - (int)pbVar16)) {
      pbVar12 = (byte *)0x0;
      pbVar11 = local_38;
    }
  }
  local_38 = pbVar11;
  if (pbVar12 != (byte *)0x0) {
    *param_2 = (uint)(pbVar16 + (uVar4 - (int)pbVar12));
    *param_1 = pbVar12;
    if (DAT_664f05d8 != (int *)0x0) {
      *DAT_664f05d8 = *DAT_664f05d8 + 1;
    }
    if (((byte *)0x5 < local_3c) && (pbVar16 = local_38, 0 < (int)local_3c)) {
      do {
        bVar1 = pbVar16[1];
        bVar2 = *pbVar16;
        uVar13 = CONCAT11(pbVar16[2],pbVar16[3]);
        local_c = (int *)0x0;
        bVar3 = pbVar16[6];
        uVar5 = CONCAT11(pbVar16[4],pbVar16[5]);
        if (uVar5 != 0) {
          pvVar7 = operator_new(8);
          if (pvVar7 == (void *)0x0) {
            local_c = (int *)0x0;
          }
          else {
            local_c = FUN_664c00b0(pvVar7,(int)(pbVar16 + 7),(uint)bVar3);
          }
        }
        uVar4 = (uint)uVar5 * 2 + 2;
        puVar8 = operator_new(uVar4);
        puVar9 = operator_new(uVar4);
        bVar17 = local_43 == 0;
        if (bVar17) {
          *puVar8 = uVar13;
        }
        else {
          *puVar9 = uVar13;
        }
        param_2 = (uint *)(uint)!bVar17;
        param_1 = (undefined4 *)(uint)bVar17;
        uVar15 = 0;
        sVar6 = 0;
        uVar10 = 0;
        if (uVar5 != 0) {
          local_24 = 0;
          local_1c = puVar9 + (int)param_2;
          puVar14 = puVar8 + (int)param_1;
          do {
            uVar15 = (uVar13 - uVar10) - 1;
            if (uVar13 < uVar15) {
              uVar15 = (*(short *)((int)this + 0x58) - sVar6) - 1;
              sVar6 = sVar6 + 1;
            }
            if ((int)local_24 < local_c[1] * 0x20) {
              bVar17 = FUN_664c0270(local_c,local_24);
              if (CONCAT31(extraout_var,bVar17) == 0) {
                param_2 = (uint *)((int)param_2 + 1);
                *local_1c = uVar15;
                local_1c = local_1c + 1;
              }
              else {
                *puVar14 = uVar15;
                param_1 = (undefined4 *)((int)param_1 + 1);
                puVar14 = puVar14 + 1;
              }
            }
            uVar10 = uVar10 + 1;
            local_24 = local_24 + 1;
          } while (uVar10 < uVar5);
        }
        pvVar7 = (void *)FUN_6648db10(this,(uint)CONCAT11(bVar2,bVar1));
        (**(code **)(**(int **)((int)this + 0x14) + 0x28))
                  (*(int **)((int)this + 0x14),0,pvVar7,(uint)CONCAT11(bVar2,bVar1),
                   *(undefined4 *)((int)this + 0x20),puVar8,param_1,puVar9,param_2);
        if ((uVar5 != 0) && (pvVar7 != (void *)0x0)) {
          FUN_664947a0(pvVar7,1,(uint)uVar15);
        }
        operator_delete(puVar8);
        operator_delete(puVar9);
        if (local_c != (int *)0x0) {
          FUN_664c0180(local_c);
          operator_delete(local_c);
        }
        pbVar16 = pbVar16 + 7 + bVar3;
      } while ((int)pbVar16 - (int)local_38 < (int)local_3c);
    }
    return 0;
  }
  *param_2 = 0;
  return 0x80040009;
}


