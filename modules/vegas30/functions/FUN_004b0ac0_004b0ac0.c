/* Module: vegas30.exe
   Function: FUN_004b0ac0
   Address: 004b0ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004b0ac0(int param_1,int *param_2,undefined4 param_3,uint *param_4,uint *param_5,
                 uint param_6,undefined4 param_7)

{
  undefined4 uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  float10 extraout_ST0;
  float10 extraout_ST1;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  undefined8 local_1c;
  uint local_14 [5];
  
  local_2c = *param_4;
  local_28 = param_4[1];
  puVar2 = *(uint **)(param_1 + 0x16c);
  local_24 = *param_5;
  local_20 = param_5[1];
  uVar7 = 0;
  local_30 = 0x7f88;
  param_4 = (uint *)0x0;
  switch(param_7) {
  case 0:
    if ((DAT_0064761c & 0x800) != 0) {
      return 0x7f88;
    }
    iVar4 = FUN_004aa8a0();
    if ((iVar4 == 0) || (param_4 = (uint *)FUN_004aa8e0(), param_4 == (uint *)0x0)) {
      if (puVar2 != (uint *)0x0) {
        puVar2[0x1b] = 0;
        uVar1 = FUN_004aac00();
        FUN_004abbe0(param_1,puVar2,uVar1);
        FUN_004aac70(param_1,uVar1);
      }
      return 0x7f88;
    }
    lVar10 = ftol();
    lVar10 = lVar10 + *(longlong *)(param_1 + 0xb88);
    if (puVar2 != (uint *)0x0) {
LAB_004b0bfd:
      puVar2[0x13] = param_6;
      param_6 = puVar2[0x1a];
      floor(((double)*(longlong *)(param_1 + 0xb90) * (double)(int)puVar2[0x1a]) /
            (double)*(int *)(param_1 + 0xb98) + _DAT_00610560);
      lVar12 = ftol();
      *(longlong *)(puVar2 + 0x14) = lVar10 - lVar12;
      puVar2[0x16] = local_24;
      puVar2[0x17] = local_20;
      puVar2[0x18] = local_2c;
      puVar2[0x19] = local_28;
      puVar2[0x1b] = (uint)param_4;
      uVar7 = FUN_004aec50(param_1,puVar2);
      return uVar7;
    }
    if ((param_2 != (int *)0x0) || (1 < _DAT_00000000)) {
      puVar2 = (uint *)FUN_004ab3d0(param_1,param_2,local_28,lVar10,param_6);
      *(uint **)(param_1 + 0x16c) = puVar2;
      if (puVar2 != (uint *)0x0) goto LAB_004b0bfd;
    }
    break;
  case 1:
    if (puVar2 != (uint *)0x0) {
      FUN_004aed80(param_1,puVar2);
    }
    *(undefined4 *)(param_1 + 0x170) = DAT_00649e10;
    return 0x7f88;
  case 2:
    if (puVar2 == (uint *)0x0) {
      return 0;
    }
    local_1c = CONCAT44(local_1c._4_4_,(undefined4)local_1c);
    if (((DAT_0064761c & 0x800) == 0) &&
       (local_1c = CONCAT44(local_1c._4_4_,(undefined4)local_1c), 0 < *param_2)) {
      iVar4 = FUN_004aa8a0();
      if (iVar4 != 0) {
        uVar7 = FUN_004aa8e0();
        param_4 = (uint *)uVar7;
      }
      puVar2[0x1b] = uVar7;
      if (uVar7 == 0) {
        FUN_004aed80(param_1,puVar2);
        return 0x7f88;
      }
      param_5 = (uint *)(local_2c - *(int *)(param_1 + 0xac0));
      uVar1 = *(undefined4 *)(param_1 + 0x170);
      param_4 = (uint *)0x0;
      lVar11 = ftol();
      lVar10 = *(longlong *)(param_1 + 0xb88);
      param_5 = (uint *)puVar2[0x1a];
      floor((double)(((float10)(int)param_5 * extraout_ST1) / extraout_ST0 + (float10)_DAT_00610560)
           );
      lVar12 = ftol();
      lVar12 = (lVar11 + lVar10) - lVar12;
      puVar2[0x14] = (uint)lVar12;
      puVar2[0x13] = param_6;
      puVar2[0x15] = (uint)((ulonglong)lVar12 >> 0x20);
      puVar2[0x16] = local_24;
      puVar2[0x17] = local_20;
      puVar2[0x18] = local_2c;
      puVar2[0x19] = local_28;
      local_1c = lVar12;
      FUN_004aec50(param_1,puVar2);
      iVar4 = FUN_004ae9d0(param_1,puVar2,&local_24,param_3,&param_4,puVar2);
      local_30 = FUN_004aec50(param_1,puVar2);
      if ((iVar4 != 0) && (iVar4 != 2)) {
        if (((*puVar2 & 0x100) != 0) && ((param_6 & 4) != 0)) {
          puVar3 = (uint *)(param_1 + 0xce0);
          puVar8 = local_14;
          for (iVar9 = 5; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar8 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar8 = puVar8 + 1;
          }
          lVar12 = local_1c;
          if (local_14[3] != 0) {
            param_6 = *(uint *)(local_14[3] + 4);
            uVar7 = puVar2[2];
            uVar5 = 0;
            if (0 < (int)uVar7) {
              puVar3 = puVar2 + 0x30;
              do {
                if (((uVar5 < puVar2[2]) && (puVar3 != (uint *)0x50)) &&
                   ((puVar3[-0x14] & 0x40) == 0)) {
                  if (puVar3[-0x12] == param_6) {
                    *puVar3 = local_14[3];
                    puVar3[-1] = *(uint *)(local_14[3] + 8);
                  }
                  else {
                    *puVar3 = 0;
                    puVar3[-1] = 0;
                    puVar3[-0x14] = puVar3[-0x14] | 0x40;
                  }
                }
                uVar5 = uVar5 + 1;
                puVar3 = puVar3 + 0x1a;
              } while ((int)uVar5 < (int)uVar7);
            }
          }
        }
        FUN_004abc80(param_1,puVar2,local_28,lVar12,0);
        iVar4 = FUN_004aec00(param_1,param_2,puVar2,iVar4,&param_4,puVar2);
        local_30 = (uint)(-1 < iVar4);
      }
      *(undefined4 *)(param_1 + 0x170) = uVar1;
    }
    FUN_004aed80(param_1,puVar2);
    return local_30;
  case 3:
    if (((DAT_0064761c & 0x800) == 0) && (0 < *param_2)) {
      iVar9 = 1;
      param_5 = (uint *)0x0;
      iVar4 = FUN_004aa8a0();
      if (iVar4 != 0) {
        uVar7 = FUN_004aa8e0();
        param_4 = (uint *)uVar7;
      }
      if (puVar2 != (uint *)0x0) {
        puVar2[0x1b] = uVar7;
      }
      if (uVar7 != 0) {
        if (*(int *)(param_1 + 0x170) == 2) {
          param_5 = (uint *)((uint)param_5 | 0x100);
          puVar3 = (uint *)(param_1 + 0xce0);
          puVar8 = local_14;
          for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar8 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar8 = puVar8 + 1;
          }
          uVar7 = (uint)param_4;
          if (local_14[3] != 0) {
            uVar5 = puVar2[2];
            param_6 = *(uint *)(local_14[3] + 4);
            uVar6 = 0;
            if (0 < (int)uVar5) {
              puVar3 = puVar2 + 0x30;
              do {
                if (((uVar6 < puVar2[2]) && (puVar3 != (uint *)0x50)) &&
                   ((puVar3[-0x14] & 0x40) == 0)) {
                  if (puVar3[-0x12] == param_6) {
                    *puVar3 = local_14[3];
                    puVar3[-1] = *(uint *)(local_14[3] + 8);
                  }
                  else {
                    *puVar3 = 0;
                    puVar3[-1] = 0;
                    puVar3[-0x14] = puVar3[-0x14] | 0x40;
                  }
                }
                uVar6 = uVar6 + 1;
                puVar3 = puVar3 + 0x1a;
              } while ((int)uVar6 < (int)uVar5);
            }
          }
        }
        if (uVar7 == 10) {
          param_5 = (uint *)((uint)param_5 | 0x400000);
        }
        iVar9 = FUN_004ae1e0(param_1,param_2,puVar2,0,&param_5);
      }
      FUN_004aed80(param_1,puVar2);
      local_30 = (uint)(-1 < iVar9);
    }
    *(undefined4 *)(param_1 + 0x170) = DAT_00649e10;
    return local_30;
  case 4:
    if (puVar2 != (uint *)0x0) {
      iVar4 = FUN_004aa8a0();
      if (iVar4 != 0) {
        FUN_004aa8e0();
      }
      FUN_004aedc0(param_1,puVar2,&local_2c);
    }
  }
  return 0x7f88;
}


