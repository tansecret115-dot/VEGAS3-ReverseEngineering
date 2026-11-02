/* Module: vegas30.exe
   Function: FUN_005a2800
   Address: 005a2800
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x005a2a09) */
/* WARNING: Removing unreachable block (ram,0x005a2d79) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_005a2800(int param_1,int param_2,int *param_3,int param_4,int param_5,uint *param_6,
                 int *param_7,int *param_8)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  char cVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int *local_28;
  int local_24;
  int *local_20;
  int local_1c;
  undefined8 local_18;
  int *local_10;
  int local_c;
  int local_4;
  
  if (param_6 != (uint *)0x0) {
    *param_6 = 0;
  }
  if (param_7 != (int *)0x0) {
    *param_7 = 0;
  }
  if (param_8 != (int *)0x0) {
    piVar2 = param_8;
    for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar2 = 0;
      piVar2 = piVar2 + 1;
    }
  }
  if (param_2 == 0) {
    return '\0';
  }
  piVar2 = *(int **)(param_2 + 0x28);
  if (piVar2 == (int *)0x0) {
    return '\0';
  }
  if (*piVar2 == 0) {
    return '\0';
  }
  local_10 = param_3;
  local_c = param_4;
  local_20 = piVar2;
  iVar7 = _SfList_FindSortedInsertIndexRange_20(piVar2,&local_10,0,0xffffffff,&LAB_005c5a20);
  if (iVar7 < 1) {
    iVar7 = 0;
  }
  else {
    iVar7 = iVar7 + -1;
  }
  piVar2 = (int *)(piVar2[1] * iVar7 + piVar2[2]);
  if (piVar2 == (int *)0x0) {
    return '\0';
  }
  floor(((double)*(longlong *)(param_1 + 0xb90) * _DAT_006129c8) / (double)*(int *)(param_1 + 0xb98)
        + _DAT_00610560);
  local_18 = ftol();
  if (piVar2[1] != 0) {
    uVar8 = piVar2[0x32] & 2;
    cVar12 = (uVar8 != 0) + '\x01';
    if (param_6 != (uint *)0x0) {
      iVar7 = *piVar2;
      if (uVar8 == 0) {
        iVar10 = *(int *)(iVar7 + 0x200);
      }
      else {
        iVar10 = *(int *)(iVar7 + 0x204);
      }
      if (iVar10 == 0) {
        iVar7 = 0;
      }
      else {
        if (uVar8 == 0) {
          piVar13 = *(int **)(iVar7 + 0x200);
        }
        else {
          piVar13 = *(int **)(iVar7 + 0x204);
        }
        iVar7 = *piVar13;
      }
      *param_6 = (uint)(iVar7 != 0);
    }
    if (param_7 == (int *)0x0) {
      return cVar12;
    }
    *param_7 = *piVar2;
    return cVar12;
  }
  iVar10 = *piVar2;
  if (iVar10 == 0) {
    return '\0';
  }
  local_28 = (int *)(iVar7 + 1);
  piVar13 = (int *)piVar2[0x38];
  local_24 = piVar2[0x39];
  if (iVar7 != 0) {
    piVar4 = (int *)piVar2[4];
    local_4 = piVar2[5];
    iVar3 = (param_4 - local_4) - (uint)(param_3 < piVar4);
    iVar9 = (local_24 - param_4) - (uint)(piVar13 < param_3);
    if ((iVar3 <= iVar9) &&
       ((iVar3 < iVar9 || ((uint)((int)param_3 - (int)piVar4) < (uint)((int)piVar13 - (int)param_3))
        ))) {
      local_28 = (int *)(iVar7 + -1);
      piVar13 = piVar4;
      local_24 = local_4;
    }
  }
  iVar9 = (local_24 - param_4) - (uint)(piVar13 < param_3);
  iVar3 = -((int)((ulonglong)local_18 >> 0x20) + (uint)((int)local_18 != 0));
  lVar1 = local_18;
  if ((iVar3 <= iVar9) &&
     (((iVar3 < iVar9 || ((uint)-(int)local_18 <= (uint)((int)piVar13 - (int)param_3))) &&
      (CONCAT44(iVar9,(int)piVar13 - (int)param_3) <= local_18)))) {
    piVar4 = (int *)(local_20[1] * (int)local_28 + local_20[2]);
    if (*(int *)(local_20[1] * (int)local_28 + 4 + local_20[2]) == 0) {
      iVar3 = *piVar4;
      if ((iVar3 != 0) && (iVar3 != iVar10)) {
        iVar9 = iVar10;
        if ((int)local_28 < iVar7) {
          iVar9 = iVar3;
          iVar3 = iVar10;
        }
        uVar5 = DAT_00649988;
        uVar11 = DAT_0064998c;
        if (param_5 != 0) {
          uVar5 = DAT_00649980;
          uVar11 = DAT_00649984;
        }
        local_28 = piVar13;
        local_20 = piVar13;
        local_1c = local_24;
        FUN_005a2e00(&local_28,&local_20,uVar5,uVar11);
        if (param_8 != (int *)0x0) {
          param_8[8] = (int)local_20 - (int)local_28;
          param_8[9] = (local_1c - local_24) - (uint)(local_20 < local_28);
        }
        uVar8 = *(uint *)(iVar9 + 0x18);
        iVar7 = *(int *)(iVar9 + 0x1c);
        uVar14 = uVar8 + *(uint *)(iVar9 + 0x20);
        iVar10 = *(int *)(iVar3 + 0x1c);
        iVar6 = iVar7 + *(int *)(iVar9 + 0x24) + (uint)CARRY4(uVar8,*(uint *)(iVar9 + 0x20));
        uVar15 = *(uint *)(iVar3 + 0x18);
        if ((uVar14 == uVar15) && (iVar6 == iVar10)) {
          if (param_6 != (uint *)0x0) {
            *param_6 = 0;
          }
          if (param_7 != (int *)0x0) {
            *param_7 = iVar3;
          }
          if (param_8 == (int *)0x0) {
            return '\x01';
          }
          if ((local_20 != (int *)(*(uint *)(iVar9 + 0x18) + *(uint *)(iVar9 + 0x20))) ||
             (local_1c !=
              *(int *)(iVar9 + 0x1c) + *(int *)(iVar9 + 0x24) +
              (uint)CARRY4(*(uint *)(iVar9 + 0x18),*(uint *)(iVar9 + 0x20)))) {
            param_8[2] = (int)local_20;
            *param_8 = iVar9;
            param_8[3] = local_1c;
          }
          if ((local_28 == *(int **)(iVar3 + 0x18)) && (local_24 == *(int *)(iVar3 + 0x1c))) {
            return '\x01';
          }
          param_8[4] = iVar3;
          param_8[6] = (int)local_28;
          param_8[7] = local_24;
          return '\x01';
        }
        if ((iVar10 <= iVar7) && ((iVar10 < iVar7 || (uVar15 <= uVar8)))) {
          iVar16 = *(int *)(iVar3 + 0x24) + iVar10 + (uint)CARRY4(*(uint *)(iVar3 + 0x20),uVar15);
          if ((iVar6 <= iVar16) && ((iVar6 < iVar16 || (uVar14 < *(uint *)(iVar3 + 0x20) + uVar15)))
             ) {
            if (param_6 != (uint *)0x0) {
              *param_6 = 0;
            }
            if (param_7 != (int *)0x0) {
              *param_7 = iVar9;
            }
            if (param_8 == (int *)0x0) {
              return '\x02';
            }
            *param_8 = iVar9;
            param_8[2] = (int)local_20;
            param_8[3] = local_1c;
            return '\x02';
          }
        }
        lVar1 = local_18;
        if ((iVar7 <= iVar10) && ((iVar7 < iVar10 || (uVar8 <= uVar15)))) {
          iVar7 = *(int *)(iVar3 + 0x24) + iVar10 + (uint)CARRY4(*(uint *)(iVar3 + 0x20),uVar15);
          if ((iVar7 <= iVar6) && ((iVar7 < iVar6 || (*(uint *)(iVar3 + 0x20) + uVar15 < uVar14))))
          {
            if (param_6 != (uint *)0x0) {
              *param_6 = 0;
            }
            if (param_7 != (int *)0x0) {
              *param_7 = iVar3;
            }
            if (param_8 == (int *)0x0) {
              return '\x01';
            }
            param_8[4] = iVar3;
            param_8[6] = (int)local_28;
            param_8[7] = local_24;
            return '\x01';
          }
        }
      }
    }
    else {
      uVar8 = piVar4[0x32] & 2;
      cVar12 = (uVar8 != 0) + '\x01';
      if (param_6 != (uint *)0x0) {
        iVar7 = *piVar4;
        if (uVar8 == 0) {
          iVar10 = *(int *)(iVar7 + 0x200);
        }
        else {
          iVar10 = *(int *)(iVar7 + 0x204);
        }
        if (iVar10 == 0) {
          iVar7 = 0;
        }
        else {
          if (uVar8 == 0) {
            piVar13 = *(int **)(iVar7 + 0x200);
          }
          else {
            piVar13 = *(int **)(iVar7 + 0x204);
          }
          iVar7 = *piVar13;
        }
        *param_6 = (uint)(iVar7 != 0);
      }
      if (param_7 != (int *)0x0) {
        *param_7 = *piVar4;
      }
      if (cVar12 != '\0') {
        return cVar12;
      }
    }
  }
  cVar12 = '\0';
  local_18._4_4_ = (int)((ulonglong)lVar1 >> 0x20);
  local_18._0_4_ = (int *)lVar1;
  iVar7 = *piVar2;
  uVar8 = *(uint *)(iVar7 + 0x18);
  piVar13 = (int *)(*(uint *)(iVar7 + 0x78) + uVar8);
  iVar10 = *(int *)(iVar7 + 0x7c) + *(int *)(iVar7 + 0x1c) +
           (uint)CARRY4(*(uint *)(iVar7 + 0x78),uVar8);
  if ((param_4 <= iVar10) && ((param_4 < iVar10 || (param_3 < piVar13)))) {
    cVar12 = '\x01';
    goto LAB_005a2d87;
  }
  uVar15 = *(uint *)(iVar7 + 0x20) - *(uint *)(iVar7 + 0x80);
  piVar4 = (int *)(uVar15 + uVar8);
  iVar3 = ((*(int *)(iVar7 + 0x24) - *(int *)(iVar7 + 0x84)) -
          (uint)(*(uint *)(iVar7 + 0x20) < *(uint *)(iVar7 + 0x80))) + *(int *)(iVar7 + 0x1c) +
          (uint)CARRY4(uVar15,uVar8);
  if ((param_4 < iVar3) || ((param_4 <= iVar3 && (param_3 <= piVar4)))) {
    iVar9 = (param_4 - local_18._4_4_) - (uint)(param_3 < (int *)local_18);
    if ((iVar9 <= iVar10) &&
       ((iVar9 < iVar10 || ((int *)((int)param_3 - (int)(int *)local_18) < piVar13)))) {
      cVar12 = '\x01';
      goto LAB_005a2d87;
    }
    if (lVar1 + CONCAT44(param_4,param_3) <= CONCAT44(iVar3,piVar4)) goto LAB_005a2d87;
  }
  cVar12 = '\x02';
LAB_005a2d87:
  if (cVar12 == '\x01') {
    if (param_6 != (uint *)0x0) {
      iVar10 = 0;
      if (*(int **)(iVar7 + 0x200) != (int *)0x0) {
        iVar10 = **(int **)(iVar7 + 0x200);
      }
      *param_6 = (uint)(iVar10 != 0);
    }
  }
  else {
    if (cVar12 != '\x02') {
      return cVar12;
    }
    if (param_6 != (uint *)0x0) {
      iVar10 = 0;
      if (*(int **)(iVar7 + 0x204) != (int *)0x0) {
        iVar10 = **(int **)(iVar7 + 0x204);
      }
      *param_6 = (uint)(iVar10 != 0);
    }
  }
  if (param_7 != (int *)0x0) {
    *param_7 = *piVar2;
  }
  return cVar12;
}


