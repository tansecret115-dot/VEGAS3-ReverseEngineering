/* Module: vegas30.exe
   Function: FUN_0050c470
   Address: 0050c470
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0050c58f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0050c470(int param_1,uint param_2,uint param_3,uint *param_4,int param_5,double param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  longlong lVar10;
  int local_ac;
  undefined8 local_a4;
  uint local_84 [33];
  
  puVar9 = (uint *)0x0;
  if (param_1 == 0) {
    return -1;
  }
  if (param_5 < 0) {
    param_5 = *(int *)(param_1 + 0x9c);
  }
  piVar5 = (int *)FUN_00522a00(param_5);
  if (piVar5 == (int *)0x0) {
    return -1;
  }
  iVar1 = *piVar5;
  if (iVar1 == 0) {
    return -1;
  }
  local_ac = 0;
  if (0 < iVar1) {
    iVar2 = piVar5[1];
    puVar8 = (uint *)0x0;
    puVar4 = (uint *)piVar5[2];
    lVar3 = 0;
    do {
      puVar9 = puVar4;
      lVar10 = *(longlong *)(puVar9 + 1);
      if (param_6 != _DAT_00610fd8) {
        ftol();
        lVar10 = ftol();
      }
      if (lVar10 == CONCAT44(param_3,param_2)) {
        local_84[0] = *puVar9;
LAB_0050c74a:
        for (uVar7 = local_84[0] >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *param_4 = *puVar9;
          puVar9 = puVar9 + 1;
          param_4 = param_4 + 1;
        }
        for (local_84[0] = local_84[0] & 3; local_84[0] != 0; local_84[0] = local_84[0] - 1) {
          *(char *)param_4 = (char)*puVar9;
          puVar9 = (uint *)((int)puVar9 + 1);
          param_4 = (uint *)((int)param_4 + 1);
        }
        return local_ac;
      }
      if (CONCAT44(param_3,param_2) <= lVar10) {
        if (puVar8 == (uint *)0x0) {
          uVar7 = *puVar9;
          puVar8 = param_4;
          for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar8 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar8 = puVar8 + 1;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(char *)puVar8 = (char)*puVar9;
            puVar9 = (uint *)((int)puVar9 + 1);
            puVar8 = (uint *)((int)puVar8 + 1);
          }
          param_4[1] = param_2;
          param_4[2] = param_3;
          return local_ac;
        }
        if (lVar10 - lVar3 == 0) {
          local_a4 = 0.0;
        }
        else {
          local_a4 = (double)CONCAT44((param_3 - (int)((ulonglong)lVar3 >> 0x20)) -
                                      (uint)(param_2 < (uint)lVar3),param_2 - (uint)lVar3) /
                     (double)(lVar10 - lVar3);
          switch(puVar8[3]) {
          case 1:
            if (_DAT_006106d0 <= local_a4) {
              local_a4 = _DAT_006106d0;
            }
            else {
              local_a4 = _DAT_00610fd8;
            }
            break;
          case 2:
            local_a4 = local_a4 * local_a4;
            break;
          case 3:
            local_a4 = _DAT_006106d0 - (_DAT_006106d0 - local_a4) * (_DAT_006106d0 - local_a4);
            break;
          case 4:
            local_a4 = (_DAT_00610f30 - (local_a4 + local_a4)) * local_a4 * local_a4;
          }
        }
        if (param_5 == 0) {
          local_84[0] = 0x7c;
          FUN_0050b080(local_84,piVar5,0,puVar8,puVar9,param_2,param_3,(undefined4)local_a4,
                       local_a4._4_4_);
          puVar9 = local_84;
        }
        else {
          if (param_5 < 1) {
            return local_ac;
          }
          if (2 < param_5) {
            return local_ac;
          }
          local_84[0] = 0x84;
          FUN_0050b080(local_84,piVar5,param_5,puVar8,puVar9,param_2,param_3,(undefined4)local_a4,
                       local_a4._4_4_);
          puVar9 = local_84;
        }
        goto LAB_0050c74a;
      }
      local_ac = local_ac + 1;
      puVar8 = puVar9;
      puVar4 = (uint *)((int)puVar9 + iVar2);
      lVar3 = lVar10;
    } while (local_ac < iVar1);
  }
  uVar7 = *puVar9;
  puVar8 = param_4;
  for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar8 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(char *)puVar8 = (char)*puVar9;
    puVar9 = (uint *)((int)puVar9 + 1);
    puVar8 = (uint *)((int)puVar8 + 1);
  }
  param_4[1] = param_2;
  param_4[2] = param_3;
  return iVar1 + -1;
}


