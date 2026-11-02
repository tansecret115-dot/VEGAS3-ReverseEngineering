/* Module: erv33260.dll
   Function: FUN_6707c880
   Address: 6707c880
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_6707c880(void *this,byte *param_1,undefined4 *param_2,undefined4 *param_3,byte *param_4,
            int param_5,byte *param_6,uint param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  byte *local_34;
  int local_30;
  uint local_2c;
  int local_20;
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  pbVar17 = param_4;
  uVar1 = (uint)param_6 >> 1;
  local_2c = 0x4b;
  local_30 = 5;
  if (*(int *)((int)this + 0x30) == 0) {
    local_2c = 0x96;
    local_30 = 10;
  }
  if (*(int *)((int)this + 0x44) != 0) {
    local_10 = (int)param_6 * 2;
    if (*(int *)((int)this + 0x30) == 0) {
      local_10 = (int)param_6 << 2;
    }
    pbVar16 = param_4 + (int)param_1;
    pbVar12 = pbVar16 + (int)param_4;
    iVar2 = 0;
    local_18 = 0;
    local_8 = 0;
    local_20 = 0;
    local_c = 0;
    local_14 = 0;
    if (param_6 != (byte *)0x0) {
      pbVar5 = pbVar16 + 1;
      local_34 = pbVar12;
      do {
        uVar11 = (uint)local_34[(int)param_1 - (int)pbVar12];
        uVar3 = (uint)pbVar5[(int)param_1 - (int)pbVar16] - (uint)*pbVar5;
        uVar7 = (int)uVar3 >> 0x1f;
        uVar4 = uVar11 - pbVar5[-1];
        uVar8 = (int)uVar4 >> 0x1f;
        local_14 = ((uVar4 ^ uVar8) - uVar8) + local_14 + ((uVar3 ^ uVar7) - uVar7);
        uVar3 = (uint)*local_34;
        uVar4 = (uint)pbVar5[(int)pbVar12 - (int)pbVar16];
        uVar7 = uVar4 - *pbVar5;
        uVar9 = (int)uVar7 >> 0x1f;
        uVar8 = uVar3 - pbVar5[-1];
        uVar10 = (int)uVar8 >> 0x1f;
        local_c = ((uVar8 ^ uVar10) - uVar10) + local_c + ((uVar7 ^ uVar9) - uVar9);
        uVar8 = (int)(pbVar5[(int)(pbVar12 + (int)param_4) - (int)pbVar16] - uVar4) >> 0x1f;
        uVar7 = (local_34 + ((int)param_1 - (int)pbVar12))
                [(int)(pbVar12 + (int)param_4) - (int)param_1] - uVar3;
        uVar9 = (int)uVar7 >> 0x1f;
        iVar2 = ((uVar7 ^ uVar9) - uVar9) + local_20 +
                ((pbVar5[(int)(pbVar12 + (int)param_4) - (int)pbVar16] - uVar4 ^ uVar8) - uVar8);
        local_8 = local_8 + pbVar5[(int)param_1 - (int)pbVar16] + uVar11;
        pbVar5 = pbVar5 + 2;
        local_18 = local_18 + uVar4 + uVar3;
        local_34 = local_34 + 2;
        local_20 = iVar2;
      } while (pbVar5 + (-1 - (int)pbVar16) < param_6);
    }
    uVar3 = iVar2 - local_c >> 0x1f;
    uVar3 = (iVar2 - local_c ^ uVar3) - uVar3;
    uVar4 = local_14 - local_c >> 0x1f;
    if (((((local_14 - local_c ^ uVar4) - uVar4 < local_10) && (uVar3 < local_10)) &&
        (local_18 < local_8)) && (local_2c * (int)param_6 < local_18)) {
      *(undefined4 *)((int)this + 0x44) = 0;
    }
    else if ((*(int *)((int)this + 0x44) == 2) && (local_10 <= uVar3)) {
      pbVar5 = pbVar12;
      pbVar6 = param_1;
      for (uVar3 = (uint)param_6 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pbVar6 = *(undefined4 *)pbVar5;
        pbVar5 = pbVar5 + 4;
        pbVar6 = pbVar6 + 4;
      }
      for (uVar3 = (uint)param_6 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pbVar6 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        pbVar6 = pbVar6 + 1;
      }
      for (uVar3 = (uint)param_6 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pbVar16 = *(undefined4 *)pbVar12;
        pbVar12 = pbVar12 + 4;
        pbVar16 = pbVar16 + 4;
      }
      for (uVar3 = (uint)param_6 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pbVar16 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        pbVar16 = pbVar16 + 1;
      }
      puVar18 = (undefined4 *)(param_5 + (int)param_2);
      puVar19 = param_2;
      for (uVar3 = (uint)param_6 >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar19 = *puVar18;
        puVar18 = puVar18 + 1;
        puVar19 = puVar19 + 1;
      }
      for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar19 = *(undefined1 *)puVar18;
        puVar18 = (undefined4 *)((int)puVar18 + 1);
        puVar19 = (undefined4 *)((int)puVar19 + 1);
      }
      puVar18 = (undefined4 *)(param_5 + (int)param_3);
      puVar19 = param_3;
      for (uVar3 = (uint)param_6 >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar19 = *puVar18;
        puVar18 = puVar18 + 1;
        puVar19 = puVar19 + 1;
      }
      for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar19 = *(undefined1 *)puVar18;
        puVar18 = (undefined4 *)((int)puVar18 + 1);
        puVar19 = (undefined4 *)((int)puVar19 + 1);
      }
    }
    else {
      pbVar12 = param_1;
      for (uVar3 = (uint)param_6 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pbVar12 = *(undefined4 *)pbVar16;
        pbVar16 = pbVar16 + 4;
        pbVar12 = pbVar12 + 4;
      }
      for (uVar3 = (uint)param_6 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pbVar12 = *pbVar16;
        pbVar16 = pbVar16 + 1;
        pbVar12 = pbVar12 + 1;
      }
      puVar18 = (undefined4 *)(param_5 + (int)param_2);
      puVar19 = param_2;
      for (uVar3 = (uint)param_6 >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar19 = *puVar18;
        puVar18 = puVar18 + 1;
        puVar19 = puVar19 + 1;
      }
      for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar19 = *(undefined1 *)puVar18;
        puVar18 = (undefined4 *)((int)puVar18 + 1);
        puVar19 = (undefined4 *)((int)puVar19 + 1);
      }
      puVar18 = (undefined4 *)(param_5 + (int)param_3);
      puVar19 = param_3;
      for (uVar3 = (uint)param_6 >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar19 = *puVar18;
        puVar18 = puVar18 + 1;
        puVar19 = puVar19 + 1;
      }
      for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar19 = *(undefined1 *)puVar18;
        puVar18 = (undefined4 *)((int)puVar18 + 1);
        puVar19 = (undefined4 *)((int)puVar19 + 1);
      }
      *(undefined4 *)((int)this + 0x44) = 1;
    }
  }
  if (*(int *)((int)this + 0x48) != 0) {
    local_10 = param_7 * 2;
    local_34 = (byte *)(param_7 * 10);
    if (*(int *)((int)this + 0x30) == 0) {
      local_34 = (byte *)(param_7 * 0x14);
      local_10 = param_7 << 2;
    }
    pbVar16 = (byte *)((param_7 >> 1) * (int)param_4);
    local_18 = 0;
    local_8 = 0;
    local_20 = 0;
    local_c = 0;
    local_14 = 0;
    if (pbVar16 != (byte *)0x0) {
      pbVar12 = param_1 + 1;
      pbVar5 = pbVar16 + 1 + (int)param_1;
      do {
        uVar10 = (uint)*pbVar5;
        uVar3 = (uint)pbVar5[-1];
        uVar13 = (uint)*pbVar12;
        uVar14 = (uint)pbVar5[-1 - (int)pbVar16];
        uVar4 = (int)(uVar3 - uVar10) >> 0x1f;
        uVar7 = (int)(uVar14 - uVar13) >> 0x1f;
        local_14 = ((uVar14 - uVar13 ^ uVar7) - uVar7) + local_14 +
                   ((uVar3 - uVar10 ^ uVar4) - uVar4);
        uVar15 = (uint)pbVar5[1];
        uVar8 = (uint)pbVar5[1 - (int)pbVar16];
        uVar4 = (int)(uVar13 - uVar8) >> 0x1f;
        uVar7 = (int)(uVar10 - uVar15) >> 0x1f;
        local_c = ((uVar10 - uVar15 ^ uVar7) - uVar7) + local_c + ((uVar13 - uVar8 ^ uVar4) - uVar4)
        ;
        uVar4 = (pbVar5 + (2 - (int)pbVar16))[(int)pbVar16] - uVar15;
        uVar11 = (int)uVar4 >> 0x1f;
        uVar7 = pbVar5[2 - (int)pbVar16] - uVar8;
        uVar9 = (int)uVar7 >> 0x1f;
        local_20 = ((uVar7 ^ uVar9) - uVar9) + local_20 + ((uVar4 ^ uVar11) - uVar11);
        local_18 = local_18 + uVar13 + uVar10;
        if ((local_2c < uVar14) && (uVar8 < uVar14 + local_30)) {
          local_8 = local_8 + 1;
        }
        if ((local_2c < uVar3) && (uVar15 < uVar3 + local_30)) {
          local_8 = local_8 + 1;
        }
        pbVar12 = pbVar12 + (int)param_4;
        pbVar5 = pbVar5 + (int)param_4;
      } while (pbVar12 + (-1 - (int)param_1) < pbVar16);
    }
    if (param_7 >> 3 < local_8) {
      *(undefined4 *)((int)this + 0x48) = 0;
    }
    else {
      uVar3 = local_14 - local_c >> 0x1f;
      uVar4 = local_20 - local_c >> 0x1f;
      if (((*(int *)((int)this + 0x48) == 2) && (local_10 <= (local_20 - local_c ^ uVar4) - uVar4))
         && ((local_14 - local_c ^ uVar3) - uVar3 < local_34)) {
        if (pbVar16 != (byte *)0x0) {
          param_4 = (byte *)((int)param_3 + 1);
          pbVar12 = param_1 + 2;
          puVar18 = param_2;
          do {
            pbVar12[-2] = *pbVar12;
            pbVar12[-1] = *pbVar12;
            (pbVar16 + -2)[(int)pbVar12] = pbVar12[(int)pbVar16];
            (pbVar16 + -1)[(int)pbVar12] = pbVar12[(int)pbVar16];
            *(undefined1 *)puVar18 = *(undefined1 *)((int)puVar18 + 1);
            pbVar12 = pbVar12 + (int)pbVar17;
            *(byte *)(((int)param_3 - (int)param_2) + (int)puVar18) = *param_4;
            puVar18 = (undefined4 *)((int)puVar18 + param_5);
            param_4 = param_4 + param_5;
          } while (pbVar12 + (-2 - (int)param_1) < pbVar16);
        }
      }
      else {
        param_4 = (byte *)0x0;
        if (pbVar16 != (byte *)0x0) {
          local_34 = (byte *)((int)param_3 + 1);
          pbVar12 = param_1;
          puVar18 = param_2;
          do {
            *pbVar12 = pbVar12[1];
            pbVar12[(int)pbVar16] = param_4[(int)(pbVar16 + 1 + (int)param_1)];
            *(undefined1 *)puVar18 = *(undefined1 *)((int)puVar18 + 1);
            pbVar12 = pbVar12 + (int)pbVar17;
            *(byte *)((int)puVar18 + ((int)param_3 - (int)param_2)) = *local_34;
            param_4 = param_4 + (int)pbVar17;
            local_34 = local_34 + param_5;
            puVar18 = (undefined4 *)((int)puVar18 + param_5);
          } while (param_4 < pbVar16);
        }
        if (local_2c * param_7 < local_18) {
          *(undefined4 *)((int)this + 0x48) = 1;
        }
      }
    }
  }
  if (*(int *)((int)this + 0x4c) != 0) {
    local_10 = (int)param_6 * 2;
    local_34 = (byte *)((int)param_6 * 10);
    if (*(int *)((int)this + 0x30) == 0) {
      local_34 = (byte *)((int)param_6 * 0x14);
      local_10 = (int)param_6 << 2;
    }
    local_18 = 0;
    local_8 = 0;
    local_20 = 0;
    pbVar5 = param_1 + (param_7 - 1) * (int)pbVar17;
    local_c = 0;
    pbVar12 = pbVar5 + -(int)pbVar17;
    local_14 = 0;
    pbVar16 = pbVar12 + -(int)pbVar17;
    if (param_6 != (byte *)0x0) {
      pbVar6 = pbVar12 + 1;
      param_1 = pbVar16;
      do {
        uVar10 = (uint)param_1[(int)pbVar5 - (int)pbVar16];
        uVar3 = (uint)pbVar6[-1];
        uVar4 = (uint)*pbVar6;
        uVar7 = (uint)pbVar6[(int)pbVar5 - (int)pbVar12];
        uVar8 = (int)(uVar7 - uVar4) >> 0x1f;
        uVar11 = (int)(uVar10 - uVar3) >> 0x1f;
        local_14 = ((uVar10 - uVar3 ^ uVar11) - uVar11) + local_14 +
                   ((uVar7 - uVar4 ^ uVar8) - uVar8);
        uVar8 = (uint)*param_1;
        uVar13 = (uint)pbVar6[(int)pbVar16 - (int)pbVar12];
        uVar11 = (int)(uVar3 - uVar8) >> 0x1f;
        uVar9 = (int)(uVar4 - uVar13) >> 0x1f;
        local_c = ((uVar4 - uVar13 ^ uVar9) - uVar9) + local_c + ((uVar3 - uVar8 ^ uVar11) - uVar11)
        ;
        local_18 = local_18 + uVar3 + uVar4;
        uVar3 = (int)(pbVar6[(int)(pbVar16 + (-(int)pbVar12 - (int)pbVar17) + -1)] - uVar8) >> 0x1f;
        uVar4 = (int)(pbVar6[(int)(pbVar16 + (-(int)pbVar12 - (int)pbVar17))] - uVar13) >> 0x1f;
        local_20 = ((pbVar6[(int)(pbVar16 + (-(int)pbVar12 - (int)pbVar17))] - uVar13 ^ uVar4) -
                   uVar4) + local_20 +
                   ((pbVar6[(int)(pbVar16 + (-(int)pbVar12 - (int)pbVar17) + -1)] - uVar8 ^ uVar3) -
                   uVar3);
        if ((local_2c < uVar10) && (uVar8 < uVar10 + local_30)) {
          local_8 = local_8 + 1;
        }
        if ((local_2c < uVar7) && (uVar13 < uVar7 + local_30)) {
          local_8 = local_8 + 1;
        }
        pbVar6 = pbVar6 + 2;
        param_1 = param_1 + 2;
      } while (pbVar6 + (-1 - (int)pbVar12) < param_6);
    }
    if ((uint)param_6 >> 3 < local_8) {
      *(undefined4 *)((int)this + 0x4c) = 0;
      return;
    }
    uVar3 = local_14 - local_c >> 0x1f;
    uVar4 = local_20 - local_c >> 0x1f;
    iVar2 = ((param_7 >> 1) - 1) * param_5;
    if (((*(int *)((int)this + 0x4c) == 2) && (local_10 <= (local_20 - local_c ^ uVar4) - uVar4)) &&
       ((local_14 - local_c ^ uVar3) - uVar3 < local_34)) {
      pbVar17 = pbVar16;
      for (uVar3 = (uint)param_6 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pbVar5 = *(undefined4 *)pbVar17;
        pbVar17 = pbVar17 + 4;
        pbVar5 = pbVar5 + 4;
      }
      for (uVar3 = (uint)param_6 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pbVar5 = *pbVar17;
        pbVar17 = pbVar17 + 1;
        pbVar5 = pbVar5 + 1;
      }
      for (uVar3 = (uint)param_6 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pbVar12 = *(undefined4 *)pbVar16;
        pbVar16 = pbVar16 + 4;
        pbVar12 = pbVar12 + 4;
      }
      for (uVar3 = (uint)param_6 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pbVar12 = *pbVar16;
        pbVar16 = pbVar16 + 1;
        pbVar12 = pbVar12 + 1;
      }
      puVar18 = (undefined4 *)((iVar2 + (int)param_2) - param_5);
      puVar19 = (undefined4 *)(iVar2 + (int)param_2);
      for (uVar3 = (uint)param_6 >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar19 = *puVar18;
        puVar18 = puVar18 + 1;
        puVar19 = puVar19 + 1;
      }
      for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar19 = *(undefined1 *)puVar18;
        puVar18 = (undefined4 *)((int)puVar18 + 1);
        puVar19 = (undefined4 *)((int)puVar19 + 1);
      }
      puVar18 = (undefined4 *)((iVar2 + (int)param_3) - param_5);
      puVar19 = (undefined4 *)(iVar2 + (int)param_3);
      for (uVar3 = (uint)param_6 >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar19 = *puVar18;
        puVar18 = puVar18 + 1;
        puVar19 = puVar19 + 1;
      }
      for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)puVar19 = *(undefined1 *)puVar18;
        puVar18 = (undefined4 *)((int)puVar18 + 1);
        puVar19 = (undefined4 *)((int)puVar19 + 1);
      }
      return;
    }
    for (uVar3 = (uint)param_6 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pbVar5 = *(undefined4 *)pbVar12;
      pbVar12 = pbVar12 + 4;
      pbVar5 = pbVar5 + 4;
    }
    for (uVar3 = (uint)param_6 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pbVar5 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      pbVar5 = pbVar5 + 1;
    }
    puVar18 = (undefined4 *)((iVar2 + (int)param_2) - param_5);
    puVar19 = (undefined4 *)(iVar2 + (int)param_2);
    for (uVar3 = (uint)param_6 >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar19 = *puVar18;
      puVar18 = puVar18 + 1;
      puVar19 = puVar19 + 1;
    }
    for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar19 = *(undefined1 *)puVar18;
      puVar18 = (undefined4 *)((int)puVar18 + 1);
      puVar19 = (undefined4 *)((int)puVar19 + 1);
    }
    puVar18 = (undefined4 *)((iVar2 + (int)param_3) - param_5);
    puVar19 = (undefined4 *)(iVar2 + (int)param_3);
    for (uVar3 = (uint)param_6 >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar19 = *puVar18;
      puVar18 = puVar18 + 1;
      puVar19 = puVar19 + 1;
    }
    for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar19 = *(undefined1 *)puVar18;
      puVar18 = (undefined4 *)((int)puVar18 + 1);
      puVar19 = (undefined4 *)((int)puVar19 + 1);
    }
    if (local_2c * (int)param_6 < local_18) {
      *(undefined4 *)((int)this + 0x4c) = 1;
    }
  }
  return;
}


