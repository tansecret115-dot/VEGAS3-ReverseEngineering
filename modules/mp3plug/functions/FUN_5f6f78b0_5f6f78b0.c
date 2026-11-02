/* Module: mp3plug.dll
   Function: FUN_5f6f78b0
   Address: 5f6f78b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_5f6f78b0(uint param_1,int param_2,undefined4 param_3,int *param_4,int *param_5,
            undefined4 *param_6,uint *param_7,undefined4 param_8,int param_9,int param_10,
            int param_11,int *param_12)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  int local_11c [39];
  int aiStack_80 [5];
  int local_6c;
  int local_58;
  uint local_54;
  undefined4 *local_50;
  double local_4c;
  int *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int *local_34;
  uint local_30;
  uint *local_2c;
  int *local_28;
  uint local_24;
  int local_1c;
  
  if (param_2 == 2) {
    if (0x23 < (int)param_1) {
      param_1 = 0x24;
    }
    local_38 = 0x27;
  }
  else {
    if (0x14 < (int)param_1) {
      param_1 = 0x15;
    }
    local_38 = 0x16;
  }
  local_34 = param_12;
  local_40 = param_11;
  local_58 = param_10;
  local_3c = param_9;
  local_50 = param_6;
  *param_7 = 0;
  local_44 = param_4;
  local_28 = param_5;
  do {
    FUN_5f6d5b90(local_44,local_11c,param_1);
    if ((int)param_1 < local_38) {
      piVar3 = local_11c + (param_1 - 4);
      iVar6 = local_38 + -4;
      local_1c = (int)piVar3 + ((int)(local_11c + iVar6) - (int)piVar3 & 0xfffffff8U);
      if ((int)piVar3 < local_1c) {
        do {
          iVar9 = local_1c;
          piVar3[4] = -9999;
          piVar3[5] = -9999;
          piVar3 = piVar3 + 2;
        } while ((int)piVar3 < iVar9);
      }
      for (; (int)piVar3 < (int)(local_11c + iVar6); piVar3 = piVar3 + 1) {
        piVar3[4] = -9999;
      }
    }
    piVar2 = local_28;
    piVar3 = local_11c;
    iVar6 = 0x7fffffff;
    if ((int)param_1 < 1) {
LAB_5f6f7a20:
      iVar6 = 0;
    }
    else {
      do {
        iVar9 = *piVar3;
        if ((iVar9 != -9999) && (iVar9 < iVar6)) {
          iVar6 = iVar9;
        }
        piVar3 = piVar3 + 1;
      } while ((int)piVar3 < (int)(local_11c + param_1));
      if (0x7ffffffe < iVar6) goto LAB_5f6f7a20;
      iVar6 = -iVar6;
    }
    *local_28 = iVar6;
    uVar4 = 0;
    local_54 = 0;
    if (0 < (int)param_1) {
      local_30 = param_1;
      puVar8 = &stack0xfffffed4;
      do {
        if (*(int *)(puVar8 + 0x10) != -9999) {
          local_24 = uVar4 + 1;
          local_6c = *(int *)(puVar8 + 0x10) + *piVar2;
          local_4c = (double)local_6c / (double)(1 << ((char)*param_7 + 1U & 0x1f));
          dVar11 = floor(local_4c);
          uVar4 = local_24;
          if (_DAT_5f75e3c0 <= local_4c - dVar11) {
            local_54 = local_54 + 1;
          }
        }
        puVar8 = puVar8 + 4;
      } while ((int)puVar8 < (int)(local_11c + (param_1 - 4)));
      local_28 = piVar2;
      param_1 = local_30;
    }
    if ((int)(uVar4 + (0x7fffffff < uVar4)) >> 1 <= (int)local_54) {
      *local_28 = *local_28 + (1 << ((byte)*param_7 & 0x1f));
    }
    if (0 < (int)param_1) {
      puVar8 = &stack0xfffffed4;
      do {
        if ((*(int *)(puVar8 + 0x10) != -9999) &&
           (iVar6 = *(int *)(puVar8 + 0x10) + *local_28, *(int *)(puVar8 + 0x10) = iVar6, iVar6 < 0)
           ) {
          *(undefined4 *)(puVar8 + 0x10) = 0;
        }
        puVar8 = puVar8 + 4;
      } while ((int)puVar8 < (int)(local_11c + (param_1 - 4)));
    }
    if (param_2 == 2) {
      local_2c = param_7;
      local_54 = 0;
      iVar6 = 0;
      do {
        iVar9 = 0x7fffffff;
        piVar3 = (int *)((int)local_11c + local_54);
        if ((int)param_1 < 1) {
LAB_5f6f7ffc:
          iVar9 = 0;
        }
        else {
          piVar2 = piVar3 + param_1;
          do {
            iVar5 = *piVar3;
            if ((iVar5 != -9999) && (iVar5 < iVar9)) {
              iVar9 = iVar5;
            }
            piVar3 = piVar3 + 3;
          } while ((int)piVar3 < (int)piVar2);
          if (iVar9 == 0x7fffffff) goto LAB_5f6f7ffc;
        }
        local_50[iVar6] = (int)(iVar9 + ((uint)(iVar9 >> 2) >> 0x1d)) >> 3;
        if (iVar6 < (int)param_1) {
          piVar3 = local_11c + iVar6 + -4;
          do {
            if (piVar3[4] != -9999) {
              piVar3[4] = piVar3[4] + local_50[iVar6] * -8;
            }
            piVar3 = piVar3 + 3;
          } while ((int)piVar3 < (int)(local_11c + (param_1 - 4)));
        }
        iVar6 = iVar6 + 1;
        local_54 = local_54 + 4;
      } while (iVar6 < 3);
      *local_34 = 0;
      param_7 = local_2c;
    }
    else {
      if (local_40 == 0) {
        *local_34 = 0;
      }
      else {
        uVar1 = 0;
        uVar4 = uVar1;
        if (0 < (int)param_1) {
          while (((local_11c[uVar1] == -9999 ||
                  (uVar4 = uVar1,
                  (int)((&DAT_5f741f88)[uVar1] << ((char)*param_7 + 1U & 0x1f)) <= local_11c[uVar1])
                  ) && (uVar4 = uVar1 + 1, (int)uVar4 < (int)param_1))) {
            if (((local_11c[uVar4] != -9999) &&
                (local_11c[uVar4] < (int)((&DAT_5f741f88)[uVar4] << ((char)*param_7 + 1U & 0x1f))))
               || (uVar1 = uVar1 + 2, uVar4 = uVar1, (int)param_1 <= (int)uVar1)) break;
          }
        }
        if (uVar4 == param_1) {
          *local_34 = 1;
        }
        else {
          *local_34 = 0;
        }
      }
      if ((*local_34 != 0) && (iVar6 = 0, 0 < (int)param_1)) {
        do {
          if (local_11c[iVar6] != -9999) {
            local_11c[iVar6] =
                 local_11c[iVar6] - ((&DAT_5f741f88)[iVar6] << ((char)*param_7 + 1U & 0x1f));
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)param_1);
      }
      *local_50 = 0;
      local_50[1] = 0;
      local_50[2] = 0;
    }
    uVar4 = param_1;
    if (0 < (int)param_1) {
      local_30 = param_1;
      puVar8 = &stack0xfffffed4;
      do {
        if (*(int *)(puVar8 + 0x10) != -9999) {
          *(int *)(puVar8 + 0x10) =
               *(int *)(puVar8 + 0x10) + (1 << ((byte)*param_7 & 0x1f)) >>
               ((byte)*param_7 + 1 & 0x1f);
        }
        puVar8 = puVar8 + 4;
        uVar4 = local_30;
      } while ((int)puVar8 < (int)(local_11c + (param_1 - 4)));
    }
    piVar3 = local_44;
    if (*param_7 == 1) {
LAB_5f6f7e6c:
      FUN_5f6d5b90(local_11c,local_44,uVar4);
      local_34 = (int *)0x0;
      iVar9 = -4;
      iVar6 = 0;
      do {
        iVar10 = (1 << ((byte)*(undefined4 *)(local_58 + 0x10 + iVar9 * 4) & 0x1f)) + -1;
        iVar5 = iVar6 + *(int *)(local_3c + 0x10 + iVar9 * 4);
        if (iVar6 < iVar5) {
          piVar2 = piVar3 + iVar6;
          piVar7 = local_34;
          do {
            iVar6 = *piVar2;
            local_34 = piVar7;
            if (((iVar6 != -9999) && (iVar10 < iVar6)) &&
               (local_34 = (int *)(iVar6 - iVar10), (int)local_34 < (int)piVar7)) {
              local_34 = piVar7;
            }
            piVar2 = piVar2 + 1;
            piVar7 = local_34;
          } while ((int)piVar2 < (int)(piVar3 + iVar5));
        }
        iVar9 = iVar9 + 1;
        iVar6 = iVar5;
      } while (iVar9 != 0);
      if (0 < (int)uVar4) {
        piVar2 = piVar3 + uVar4;
        do {
          if (*piVar3 != -9999) {
            iVar6 = *piVar3 - (int)local_34;
            if (iVar6 < 0) {
              iVar6 = 0;
            }
            *piVar3 = iVar6;
          }
          piVar3 = piVar3 + 1;
        } while ((int)piVar3 < (int)piVar2);
      }
      *local_28 = *local_28 - (1 << ((char)*param_7 + 1U & 0x1f)) * (int)local_34;
      return;
    }
    iVar9 = 0;
    local_2c = param_7;
    iVar6 = 0;
    local_30 = uVar4;
    local_54 = local_54 & 0xffffff00;
    do {
      iVar5 = *(int *)(local_3c + iVar6 * 4);
      piVar2 = local_11c + iVar9;
      aiStack_80[iVar6] = -0x80000000;
      if (0 < iVar5) {
        piVar7 = piVar2 + iVar5;
        do {
          iVar5 = *piVar2;
          if ((iVar5 != -9999) && (aiStack_80[iVar6] < iVar5)) {
            aiStack_80[iVar6] = iVar5;
          }
          piVar2 = piVar2 + 1;
        } while ((int)piVar2 < (int)piVar7);
      }
      if (1 << ((byte)*(undefined4 *)(local_58 + iVar6 * 4) & 0x1f) <= aiStack_80[iVar6]) {
        local_54 = CONCAT31(local_54._1_3_,1);
      }
      iVar9 = iVar9 + *(int *)(local_3c + iVar6 * 4);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 4);
    param_7 = local_2c;
    uVar4 = local_30;
    if (((char)local_54 == '\0') ||
       (uVar1 = *param_7, *param_7 = uVar1 + 1, param_1 = local_30, 1 < uVar1 + 1))
    goto LAB_5f6f7e6c;
  } while( true );
}


