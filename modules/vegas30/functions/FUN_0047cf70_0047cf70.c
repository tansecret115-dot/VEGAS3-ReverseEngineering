/* Module: vegas30.exe
   Function: FUN_0047cf70
   Address: 0047cf70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047cf70(int param_1,uint param_2,int param_3,uint *param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint local_40 [2];
  uint *local_38;
  int local_34;
  uint *local_24;
  uint *local_20;
  int local_14;
  int local_10;
  int local_c;
  uint *local_8;
  
  puVar4 = param_4;
  local_20 = (uint *)&stack0xffffffb4;
  local_34 = **(int **)(param_1 + 0x30);
  if (1 < local_34) {
    local_38 = (uint *)(*(int **)(param_1 + 0x30))[2];
    local_8 = *(uint **)(param_1 + 8);
    FUN_0060ac30();
    puVar7 = local_40 + (local_34 + 1) * 4 + -3;
    if (local_8 == (uint *)0x0) {
      local_8 = puVar7 + (local_34 + 1) * 4;
    }
    local_10 = 0;
    local_14 = 0;
    local_c = param_5;
    puVar5 = puVar7;
    puVar8 = local_38;
    local_24 = (uint *)local_34;
    if (0 < local_34) {
      do {
        uVar1 = *puVar8;
        uVar2 = puVar8[1];
        if (((int)uVar2 < (int)param_4[1]) ||
           (((int)uVar2 <= (int)param_4[1] && (uVar1 < *param_4)))) {
LAB_0047d093:
          *local_20 = *puVar8;
          local_20[1] = puVar8[1];
          local_20[2] = puVar8[2];
          local_20[3] = puVar8[3];
          local_10 = local_10 + 1;
          local_20 = local_20 + 4;
        }
        else {
          for (; 1 < local_c; local_c = local_c + -1) {
            iVar9 = param_4[3] + param_4[1] + (uint)CARRY4(param_4[2],*param_4);
            if (((int)uVar2 < iVar9) || (((int)uVar2 <= iVar9 && (uVar1 < param_4[2] + *param_4))))
            break;
            param_4 = param_4 + 4;
          }
          uVar10 = param_4[1];
          uVar11 = *param_4;
          if (((int)uVar2 < (int)uVar10) || (((int)uVar2 <= (int)uVar10 && (uVar1 < uVar11))))
          goto LAB_0047d093;
          iVar9 = param_4[3] + uVar10 + (uint)CARRY4(param_4[2],uVar11);
          if ((iVar9 < (int)uVar2) || ((iVar9 <= (int)uVar2 && (param_4[2] + uVar11 <= uVar1))))
          goto LAB_0047d093;
          *puVar5 = *puVar8;
          puVar5[1] = puVar8[1];
          puVar5[2] = puVar8[2];
          puVar5[3] = puVar8[3];
          uVar1 = *puVar5;
          *puVar5 = uVar1 + param_2;
          local_14 = local_14 + 1;
          puVar5[1] = puVar5[1] + param_3 + (uint)CARRY4(uVar1,param_2);
          puVar5 = puVar5 + 4;
        }
        local_24 = (uint *)((int)local_24 + -1);
        puVar8 = puVar8 + 4;
      } while (local_24 != (uint *)0x0);
    }
    puVar5 = (uint *)&stack0xffffffb4;
    local_c = param_5;
    param_4 = (uint *)0x0;
    if (0 < local_10) {
      local_20 = (uint *)local_10;
      local_24 = puVar5;
      do {
        uVar1 = *puVar5;
        uVar2 = puVar5[1];
        iVar9 = puVar4[1] + param_3 + (uint)CARRY4(*puVar4,param_2);
        if (((int)uVar2 < iVar9) || (((int)uVar2 <= iVar9 && (uVar1 < *puVar4 + param_2)))) {
LAB_0047d18f:
          *local_24 = *puVar5;
          local_24[1] = puVar5[1];
          local_24[2] = puVar5[2];
          local_24[3] = puVar5[3];
          param_4 = (uint *)((int)param_4 + 1);
          local_24 = local_24 + 4;
        }
        else {
          for (; 1 < local_c; local_c = local_c + -1) {
            uVar10 = puVar4[2] + *puVar4;
            iVar9 = puVar4[3] + puVar4[1] + (uint)CARRY4(puVar4[2],*puVar4) + param_3 +
                    (uint)CARRY4(uVar10,param_2);
            if (((int)uVar2 < iVar9) || (((int)uVar2 <= iVar9 && (uVar1 < uVar10 + param_2))))
            break;
            puVar4 = puVar4 + 4;
          }
          uVar10 = *puVar4;
          iVar9 = puVar4[1] + param_3 + (uint)CARRY4(uVar10,param_2);
          if (((int)uVar2 < iVar9) || (((int)uVar2 <= iVar9 && (uVar1 < uVar10 + param_2))))
          goto LAB_0047d18f;
          uVar11 = puVar4[2] + uVar10;
          iVar9 = puVar4[3] + puVar4[1] + (uint)CARRY4(puVar4[2],uVar10) + param_3 +
                  (uint)CARRY4(uVar11,param_2);
          if ((iVar9 <= (int)uVar2) && ((iVar9 < (int)uVar2 || (uVar11 + param_2 <= uVar1))))
          goto LAB_0047d18f;
        }
        puVar5 = puVar5 + 4;
        local_20 = (uint *)((int)local_20 + -1);
      } while (local_20 != (uint *)0x0);
    }
    iVar9 = (int)param_4;
    iVar6 = 0;
    param_4 = (uint *)0x0;
    piVar3 = (int *)&stack0xffffffb4;
    if (0 < iVar9) {
      do {
        param_4 = (uint *)iVar6;
        if ((0 < piVar3[1]) || ((-1 < piVar3[1] && (*piVar3 != 0)))) break;
        iVar6 = iVar6 + 1;
        piVar3 = piVar3 + 4;
        param_4 = (uint *)iVar6;
      } while (iVar6 < iVar9);
    }
    iVar6 = 0;
    *(undefined1 *)local_8 = 0;
    param_3 = 0;
    puVar4 = puVar7;
    if (0 < local_14) {
      do {
        param_3 = iVar6;
        if ((0 < (int)puVar4[1]) || ((-1 < (int)puVar4[1] && (*puVar4 != 0)))) break;
        iVar6 = iVar6 + 1;
        *(undefined1 *)local_8 = 1;
        puVar4 = puVar4 + 4;
        param_3 = iVar6;
      } while (iVar6 < local_14);
    }
    iVar6 = 1;
    puVar7 = puVar7 + param_3 * 4;
    iVar12 = 0x10;
    param_5 = 2;
    puVar4 = (uint *)((int)&stack0xffffffb4 + (int)param_4 * 4 * 4);
LAB_0047d254:
    while( true ) {
      if (local_34 <= iVar6) {
        local_34 = param_5;
        _SfList_ArrayForceItemCount_12(*(undefined4 *)(param_1 + 0x30),param_5,0);
        local_38 = *(uint **)(*(int *)(param_1 + 0x30) + 8);
      }
      if (iVar9 <= (int)param_4) break;
      if (param_3 < local_14) {
        uVar1 = puVar4[1];
        if ((int)puVar7[1] < (int)uVar1) {
LAB_0047d32f:
          puVar5 = (uint *)(iVar12 + (int)local_38);
          *(undefined1 *)(iVar6 + (int)local_8) = 1;
          *puVar5 = *puVar7;
          puVar5[1] = puVar7[1];
          puVar5[2] = puVar7[2];
          puVar5[3] = puVar7[3];
          goto LAB_0047d351;
        }
        if (((int)uVar1 < (int)puVar7[1]) || (*puVar4 < *puVar7)) goto LAB_0047d2e7;
        if (((int)puVar7[1] <= (int)uVar1) && (((int)puVar7[1] < (int)uVar1 || (*puVar7 < *puVar4)))
           ) goto LAB_0047d32f;
        puVar5 = (uint *)(iVar12 + (int)local_38);
        *(undefined1 *)(iVar6 + (int)local_8) = 1;
        *puVar5 = *puVar7;
        puVar5[1] = puVar7[1];
        puVar5[2] = puVar7[2];
        puVar5[3] = puVar7[3];
        param_3 = param_3 + 1;
        puVar7 = puVar7 + 4;
      }
      else {
LAB_0047d2e7:
        puVar5 = (uint *)(iVar12 + (int)local_38);
        *(undefined1 *)(iVar6 + (int)local_8) = 0;
        *puVar5 = *puVar4;
        puVar5[1] = puVar4[1];
        puVar5[2] = puVar4[2];
        puVar5[3] = puVar4[3];
      }
      param_5 = param_5 + 1;
      iVar12 = iVar12 + 0x10;
      iVar6 = iVar6 + 1;
      param_4 = (uint *)((int)param_4 + 1);
      puVar4 = puVar4 + 4;
    }
    if (param_3 < local_14) {
      puVar5 = (uint *)((int)local_38 + iVar12);
      *(undefined1 *)(iVar6 + (int)local_8) = 1;
      *puVar5 = *puVar7;
      puVar5[1] = puVar7[1];
      puVar5[2] = puVar7[2];
      puVar5[3] = puVar7[3];
LAB_0047d351:
      iVar6 = iVar6 + 1;
      param_5 = param_5 + 1;
      iVar12 = iVar12 + 0x10;
      param_3 = param_3 + 1;
      puVar7 = puVar7 + 4;
      goto LAB_0047d254;
    }
    if (iVar6 < 1) {
      iVar6 = 1;
    }
    _SfList_ArrayForceItemCount_12(*(undefined4 *)(param_1 + 0x30),iVar6,0);
  }
  return;
}


