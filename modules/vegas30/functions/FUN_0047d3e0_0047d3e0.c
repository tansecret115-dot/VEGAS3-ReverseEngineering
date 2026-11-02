/* Module: vegas30.exe
   Function: FUN_0047d3e0
   Address: 0047d3e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047d3e0(int param_1,int param_2,uint param_3,int param_4,uint *param_5,uint *param_6)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint local_5c [4];
  uint local_4c;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint *local_34;
  uint *local_30;
  uint *local_2c;
  uint *local_28;
  uint *local_24;
  uint *local_20;
  undefined1 *local_1c;
  int local_18;
  uint *local_14;
  uint *local_10;
  uint *local_c;
  int local_8;
  
  puVar4 = param_5;
  local_30 = (uint *)**(undefined4 **)(param_1 + 0x30);
  if (1 < (int)local_30) {
    local_34 = (uint *)(*(undefined4 **)(param_1 + 0x30))[2];
    local_1c = *(undefined1 **)(param_1 + 8);
    local_14 = (uint *)(*(undefined4 **)(param_2 + 0x30))[2];
    local_20 = (uint *)**(undefined4 **)(param_2 + 0x30);
    puVar7 = local_30;
    if ((int)local_30 <= (int)local_20) {
      puVar7 = local_20;
    }
    FUN_0060ac30();
    param_5 = param_6;
    uVar10 = *puVar4;
    local_c = (uint *)&stack0xffffff98;
    uVar12 = puVar4[1];
    local_2c = (uint *)(&stack0xffffff98 + ((int)puVar7 + 1) * 0x10);
    puVar8 = (uint *)((int)(&stack0xffffff98 + ((int)puVar7 + 1) * 0x10) + ((int)puVar7 + 1) * 4 * 4
                     );
    puVar7 = puVar4 + 2;
    local_10 = (uint *)0x0;
    local_18 = 0;
    local_8 = 0;
    uVar1 = *puVar7;
    uVar2 = puVar4[3];
    *puVar8 = uVar1 + uVar10;
    puVar8[1] = uVar2 + uVar12 + (uint)CARRY4(uVar1,uVar10);
    puVar8[2] = *puVar4;
    puVar8[3] = puVar4[1];
    if (0 < (int)local_30) {
      local_28 = (uint *)&stack0xffffff98;
      local_24 = local_2c;
      puVar11 = local_34;
      do {
        if (((int)puVar11[1] < (int)puVar4[1]) ||
           (((int)puVar11[1] <= (int)puVar4[1] && (*puVar11 < *puVar4)))) {
LAB_0047d63e:
          *local_28 = *puVar11;
          local_28[1] = puVar11[1];
          local_28[2] = puVar11[2];
          local_28[3] = puVar11[3];
          local_10 = (uint *)((int)local_10 + 1);
          local_28 = local_28 + 4;
        }
        else {
          if (1 < (int)param_5) {
            puVar3 = puVar8 + local_8 * 4;
            puVar5 = puVar4;
            do {
              local_5c[2] = *puVar5 + *puVar7;
              iVar9 = puVar5[1] + puVar7[1] + (uint)CARRY4(*puVar5,*puVar7);
              puVar4 = puVar5;
              if (((int)puVar11[1] < iVar9) ||
                 (((int)puVar11[1] <= iVar9 && (*puVar11 < local_5c[2])))) break;
              puVar4 = puVar5 + 4;
              param_5 = (uint *)((int)param_5 + -1);
              if (((int)puVar3[1] <= (int)puVar3[3]) &&
                 (((int)puVar3[1] < (int)puVar3[3] || (*puVar3 < puVar3[2])))) {
                puVar3 = puVar3 + 4;
                local_8 = local_8 + 1;
              }
              uVar10 = *puVar4;
              uVar12 = puVar5[6];
              puVar7 = puVar5 + 6;
              uVar1 = puVar5[5];
              uVar2 = puVar5[7];
              *puVar3 = uVar10 + uVar12;
              puVar3[1] = uVar1 + uVar2 + (uint)CARRY4(uVar10,uVar12);
              puVar3[2] = *puVar4;
              puVar3[3] = puVar5[5];
              puVar5 = puVar4;
            } while (1 < (int)param_5);
          }
          local_3c = *puVar11;
          local_4c = *puVar4;
          uVar10 = puVar4[1];
          if (((int)puVar11[1] < (int)uVar10) ||
             (((int)puVar11[1] <= (int)uVar10 && (local_3c < local_4c)))) goto LAB_0047d63e;
          local_5c[0] = local_4c + puVar4[2];
          puVar7 = puVar4 + 2;
          iVar9 = uVar10 + puVar4[3] + (uint)CARRY4(local_4c,puVar4[2]);
          local_38 = puVar11[1];
          if ((iVar9 < (int)local_38) || ((iVar9 <= (int)local_38 && (local_5c[0] <= local_3c))))
          goto LAB_0047d63e;
          puVar5 = puVar8 + local_8 * 4;
          if (((int)local_38 < (int)puVar5[1]) ||
             (((int)local_38 <= (int)puVar5[1] && (*puVar11 <= *puVar5)))) {
            uVar10 = *puVar11;
            uVar12 = puVar11[1];
          }
          else {
            uVar10 = *puVar5;
            uVar12 = puVar5[1];
          }
          *puVar5 = uVar10;
          puVar5[1] = uVar12;
          if (((int)puVar5[3] < (int)puVar11[1]) ||
             (((int)puVar5[3] <= (int)puVar11[1] && (puVar5[2] <= *puVar11)))) {
            uVar10 = *puVar11;
            local_44 = uVar10;
            local_40 = puVar11[1];
          }
          else {
            uVar10 = puVar5[2];
            local_40 = puVar5[3];
          }
          puVar5[2] = uVar10;
          puVar5[3] = local_40;
          *local_24 = *puVar11;
          local_24[1] = puVar11[1];
          local_24[2] = puVar11[2];
          local_24[3] = puVar11[3];
          uVar10 = *local_24;
          *local_24 = uVar10 + param_3;
          local_24[1] = local_24[1] + param_4 + (uint)CARRY4(uVar10,param_3);
          local_18 = local_18 + 1;
          local_24 = local_24 + 4;
        }
        puVar11 = puVar11 + 4;
        local_30 = (uint *)((int)local_30 + -1);
      } while (local_30 != (uint *)0x0);
    }
    param_5 = local_c;
    puVar4 = puVar8 + local_8 * 4;
    if (((int)puVar8[local_8 * 4 + 3] < (int)puVar4[1]) ||
       (((int)puVar8[local_8 * 4 + 3] <= (int)puVar4[1] && (puVar4[2] <= *puVar4)))) {
      puVar4[2] = 0;
      puVar4[3] = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
    }
    else {
      local_8 = local_8 + 1;
    }
    if (param_1 != param_2) {
      _SfList_ArrayForceItemCount_12(*(undefined4 *)(param_1 + 0x30),1,0);
      puVar4 = local_10;
      if (0 < (int)local_10) {
        if (((int)param_5[1] < (int)local_34[1]) ||
           (((int)param_5[1] <= (int)local_34[1] && (*param_5 <= *local_34)))) {
          iVar9 = 0;
        }
        else {
          iVar9 = 1;
        }
        _SfList_ArrayForceItemCount_12(*(undefined4 *)(param_1 + 0x30),iVar9 + (int)local_10,0);
        iVar6 = ((uint)puVar4 & 0xfffffff) << 2;
        puVar4 = local_c;
        puVar7 = (uint *)(iVar9 * 0x10 + *(int *)(*(int *)(param_1 + 0x30) + 8));
        for (; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar7 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar7 = puVar7 + 1;
        }
        for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
          *(char *)puVar7 = (char)*puVar4;
          puVar4 = (uint *)((int)puVar4 + 1);
          puVar7 = (uint *)((int)puVar7 + 1);
        }
      }
      local_10 = local_20;
      puVar4 = local_14;
      puVar7 = local_c;
      for (iVar9 = ((uint)local_20 & 0xfffffff) << 2; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
        *(char *)puVar7 = (char)*puVar4;
        puVar4 = (uint *)((int)puVar4 + 1);
        puVar7 = (uint *)((int)puVar7 + 1);
      }
      puVar4 = (uint *)(local_18 + (int)local_20);
      _SfList_ArrayForceItemCount_12(*(undefined4 *)(param_2 + 0x30),puVar4,0);
      local_20 = puVar4;
      local_14 = *(uint **)(*(int *)(param_2 + 0x30) + 8);
      param_5 = local_c;
    }
    param_1 = 0;
    puVar4 = param_5;
    if (0 < (int)local_10) {
      local_34 = local_10;
      param_6 = param_5;
      do {
        local_44 = *param_6;
        uVar10 = param_6[1];
        iVar9 = param_4 + puVar8[1] + (uint)CARRY4(param_3,*puVar8);
        if (((int)uVar10 < iVar9) || (((int)uVar10 <= iVar9 && (local_44 < param_3 + *puVar8)))) {
LAB_0047d801:
          *param_5 = *param_6;
          param_5[1] = param_6[1];
          param_5[2] = param_6[2];
          param_5[3] = param_6[3];
          param_1 = param_1 + 1;
          param_5 = param_5 + 4;
        }
        else {
          while (1 < local_8) {
            iVar9 = puVar8[3] + param_4 + (uint)CARRY4(puVar8[2],param_3);
            if (((int)uVar10 < iVar9) ||
               (((int)uVar10 <= iVar9 && (local_44 <= puVar8[2] + param_3)))) break;
            puVar8 = puVar8 + 4;
            local_8 = local_8 + -1;
          }
          iVar9 = param_4 + puVar8[1] + (uint)CARRY4(param_3,*puVar8);
          if (((int)uVar10 < iVar9) || (((int)uVar10 <= iVar9 && (local_44 < param_3 + *puVar8))))
          goto LAB_0047d801;
          iVar9 = puVar8[3] + param_4 + (uint)CARRY4(puVar8[2],param_3);
          if ((iVar9 <= (int)uVar10) && ((iVar9 < (int)uVar10 || (puVar8[2] + param_3 < local_44))))
          goto LAB_0047d801;
        }
        param_6 = param_6 + 4;
        local_34 = (uint *)((int)local_34 + -1);
        puVar4 = local_c;
      } while (local_34 != (uint *)0x0);
    }
    iVar9 = param_1;
    iVar6 = 0;
    local_10 = (uint *)param_1;
    param_1 = 0;
    if (0 < iVar9) {
      do {
        param_1 = iVar6;
        if ((0 < (int)puVar4[1]) || ((-1 < (int)puVar4[1] && (*puVar4 != 0)))) break;
        iVar6 = iVar6 + 1;
        puVar4 = puVar4 + 4;
        param_1 = iVar6;
      } while (iVar6 < iVar9);
    }
    if (local_1c != (undefined1 *)0x0) {
      *local_1c = 0;
    }
    iVar9 = 0;
    param_6 = (uint *)0x0;
    puVar4 = local_2c;
    if (0 < local_18) {
      do {
        param_6 = (uint *)iVar9;
        if ((0 < (int)puVar4[1]) || ((-1 < (int)puVar4[1] && (*puVar4 != 0)))) break;
        if (local_1c != (undefined1 *)0x0) {
          *local_1c = 1;
        }
        iVar9 = iVar9 + 1;
        puVar4 = puVar4 + 4;
        param_6 = (uint *)iVar9;
      } while (iVar9 < local_18);
    }
    iVar6 = 1;
    iVar9 = 0x10;
    param_5 = (uint *)0x2;
    puVar7 = local_c + param_1 * 4;
    puVar4 = local_2c + (int)param_6 * 4;
LAB_0047d8d2:
    if ((int)local_20 <= iVar6) {
      local_20 = param_5;
      _SfList_ArrayForceItemCount_12(*(undefined4 *)(param_2 + 0x30),param_5,0);
      local_14 = *(uint **)(*(int *)(param_2 + 0x30) + 8);
    }
    if (param_1 < (int)local_10) {
      if ((int)param_6 < local_18) {
        uVar10 = puVar7[1];
        if ((int)uVar10 <= (int)puVar4[1]) {
          if (((int)uVar10 < (int)puVar4[1]) || (*puVar7 < *puVar4)) goto LAB_0047d95d;
          if (((int)uVar10 < (int)puVar4[1]) ||
             (((int)uVar10 <= (int)puVar4[1] && (*puVar7 <= *puVar4)))) {
            if (local_1c != (undefined1 *)0x0) {
              local_1c[iVar6] = 1;
            }
            iVar6 = iVar6 + 1;
            puVar8 = (uint *)(iVar9 + (int)local_14);
            iVar9 = iVar9 + 0x10;
            *puVar8 = *puVar4;
            puVar8[1] = puVar4[1];
            puVar8[2] = puVar4[2];
            puVar8[3] = puVar4[3];
            param_5 = (uint *)((int)param_5 + 1);
            param_6 = (uint *)((int)param_6 + 1);
            param_1 = param_1 + 1;
            puVar7 = puVar7 + 4;
            puVar4 = puVar4 + 4;
            goto LAB_0047d8d2;
          }
        }
        if (local_1c != (undefined1 *)0x0) {
          local_1c[iVar6] = 1;
        }
        puVar8 = (uint *)(iVar9 + (int)local_14);
        *puVar8 = *puVar4;
        puVar8[1] = puVar4[1];
        puVar8[2] = puVar4[2];
        puVar8[3] = puVar4[3];
        goto LAB_0047d9d8;
      }
LAB_0047d95d:
      if (local_1c != (undefined1 *)0x0) {
        local_1c[iVar6] = 0;
      }
      iVar6 = iVar6 + 1;
      puVar8 = (uint *)(iVar9 + (int)local_14);
      iVar9 = iVar9 + 0x10;
      *puVar8 = *puVar7;
      puVar8[1] = puVar7[1];
      puVar8[2] = puVar7[2];
      puVar8[3] = puVar7[3];
      param_5 = (uint *)((int)param_5 + 1);
      param_1 = param_1 + 1;
      puVar7 = puVar7 + 4;
      goto LAB_0047d8d2;
    }
    if ((int)param_6 < local_18) {
      if (local_1c != (undefined1 *)0x0) {
        local_1c[iVar6] = 1;
      }
      puVar8 = (uint *)(iVar9 + (int)local_14);
      *puVar8 = *puVar4;
      puVar8[1] = puVar4[1];
      puVar8[2] = puVar4[2];
      puVar8[3] = puVar4[3];
LAB_0047d9d8:
      iVar6 = iVar6 + 1;
      param_5 = (uint *)((int)param_5 + 1);
      iVar9 = iVar9 + 0x10;
      param_6 = (uint *)((int)param_6 + 1);
      puVar4 = puVar4 + 4;
      goto LAB_0047d8d2;
    }
    if (iVar6 < 1) {
      iVar6 = 1;
    }
    _SfList_ArrayForceItemCount_12(*(undefined4 *)(param_2 + 0x30),iVar6,0);
  }
  return;
}


