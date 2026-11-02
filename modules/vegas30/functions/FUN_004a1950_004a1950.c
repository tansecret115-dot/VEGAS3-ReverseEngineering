/* Module: vegas30.exe
   Function: FUN_004a1950
   Address: 004a1950
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004a1e97) */
/* WARNING: Removing unreachable block (ram,0x004a1f22) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004a1950(uint param_1,int param_2,int param_3,int param_4,uint param_5,int param_6)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  uint local_68;
  int local_64;
  LPCSTR local_60;
  int local_5c;
  int local_58;
  uint *local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_40;
  int local_38;
  int *local_34;
  undefined8 local_30;
  uint local_28;
  int local_24;
  int local_20;
  int iStack_1c;
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  int iStack_4;
  
  iVar3 = param_1;
  floor(((double)*(longlong *)(param_1 + 0xb90) * _DAT_006129c8) / (double)*(int *)(param_1 + 0xb98)
        + _DAT_00610560);
  local_30 = ftol();
  iVar8 = param_4;
  uVar15 = (uint)local_30;
  param_1 = 2;
  local_60 = (char *)0x0;
  if ((*(uint *)(param_4 + 0x10) & 0x200000) != 0) {
    FUN_005b8da0(*(undefined4 *)(iVar3 + 0xbc8),0,1);
  }
  local_4c = 0;
  if (*(int *)(iVar8 + 4) == 3) {
    local_4c = FUN_004608c0(*(int *)(iVar3 + 0xce4),
                            param_3 - *(int *)(*(int *)(*(int *)(iVar3 + 0xce4) + 0x69c) + 0x1c),0);
    if (local_4c < 0) {
      return param_1;
    }
  }
  uVar7 = param_5;
  piVar5 = *(int **)(iVar8 + 0x28);
  if (piVar5 == (int *)0x0) {
    return param_1;
  }
  iVar8 = *piVar5;
  if (iVar8 < 2) {
    return param_1;
  }
  local_10 = param_5;
  local_c = param_6;
  iVar4 = _SfList_FindSortedInsertIndexRange_20(piVar5,&local_10,0,0xffffffff,&LAB_005c5a20);
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar4 + -1;
    if (iVar4 < 0) goto LAB_004a23f1;
  }
  if (iVar8 + -1 <= iVar4) {
LAB_004a23f1:
    if (local_60 != (LPCSTR)0x0) {
      *(uint *)(iVar3 + 0x18) = *(uint *)(iVar3 + 0x18) | 0x3000;
      if (local_60 != (LPSTR)(iVar3 + 0x240)) {
        lstrcpynA((LPSTR)(iVar3 + 0x240),local_60,0x100);
        *(undefined1 *)(iVar3 + 0x33f) = 0;
      }
    }
    return param_1;
  }
  local_50 = piVar5[1] * iVar4 + piVar5[2];
  local_5c = 0;
  local_58 = 0;
  local_18 = uVar7 - uVar15;
  local_14 = (param_6 - local_30._4_4_) - (uint)(uVar7 < uVar15);
  local_28 = uVar15 + uVar7;
  local_24 = local_30._4_4_ + param_6 + (uint)CARRY4(uVar15,uVar7);
  if (0 < iVar4) {
    local_54 = (uint *)(local_50 + 0x10);
    local_64 = iVar4;
    do {
      if (((int)local_54[1] < local_14) ||
         (((int)local_54[1] <= local_14 && (*local_54 <= local_18)))) break;
      local_5c = local_5c + -1;
      local_54 = local_54 + -0x34;
      local_64 = local_64 + -1;
    } while (0 < local_64);
  }
  iVar4 = iVar4 + 2;
  if (iVar4 < iVar8) {
    puVar10 = (uint *)(local_50 + 0xe0);
    do {
      if ((local_24 < (int)puVar10[1]) || ((local_24 <= (int)puVar10[1] && (local_28 < *puVar10))))
      break;
      puVar10 = puVar10 + 0x34;
      local_58 = local_58 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar8);
  }
  local_68 = 0;
  local_38 = -local_5c;
LAB_004a1b2c:
  iVar8 = local_58;
  if (local_58 < local_38) {
    iVar8 = local_38;
  }
  uVar15 = param_1;
  if (iVar8 < (int)((local_68 ^ (int)local_68 >> 0x1f) - ((int)local_68 >> 0x1f)))
  goto LAB_004a238e;
  if (((-1 < (int)local_68) || (local_5c <= (int)local_68)) &&
     (((int)local_68 < 1 || ((int)local_68 <= local_58)))) {
    piVar5 = (int *)(local_50 + local_68 * 0xd0);
    iVar8 = *piVar5;
    if (iVar8 != 0) {
      uVar15 = *(uint *)(param_4 + 0x10);
      if ((((uVar15 & 0x40000) == 0) || ((uVar15 & 0x10000) != 0)) || (local_4c != 2)) {
        if ((((uVar15 & 0x40000) == 0) || ((uVar15 & 0x10000) != 0)) ||
           ((uVar15 = piVar5[0x32], (uint)(local_4c == 1) == (uVar15 >> 2 & 1) ||
            (((uVar15 >> 1 & 4) != (uVar15 & 4) &&
             ((iVar8 = piVar5[1], iVar8 != 0 || (iVar8 = piVar5[2], iVar8 != 0)))))))) {
          *(int *)(iVar3 + 0xcec) = iVar8;
          param_1 = 4;
          if (((*(uint *)(iVar8 + 0x10) & 8) != 0) || ((*(uint *)(iVar8 + 0x10) & 0x100000) != 0)) {
            param_1 = 8;
            uVar15 = param_1;
            goto LAB_004a238e;
          }
          iVar4 = *(int *)(iVar8 + 0x218);
          piVar13 = (int *)(iVar4 + 0x20);
          local_34 = piVar13;
          if (((((*(uint *)(param_4 + 0x10) & 0x40000) == 0) ||
               ((*(uint *)(param_4 + 0x10) & 0x10000) != 0)) || (piVar5[1] == 0)) &&
             ((*(int *)(param_4 + 4) == 3 && (piVar5[9] != 0)))) {
            if ((*(byte *)(piVar5 + 0x32) & 2) == 0) {
              piVar6 = *(int **)(iVar8 + 0x200);
            }
            else {
              piVar6 = *(int **)(iVar8 + 0x204);
            }
            if ((piVar6 != (int *)0x0) && (*piVar6 != 0)) {
              iVar11 = _SfGetUIFontSize_4();
              iVar11 = *(int *)(iVar11 + 4) + 3;
              iVar12 = (*(int *)(iVar4 + 0x2c) - *(int *)(iVar4 + 0x24)) / 2;
              if (iVar12 < iVar11) {
                iVar11 = iVar12;
              }
              local_48 = *piVar13;
              iVar14 = *(int *)(iVar4 + 0x24);
              local_40 = *(undefined4 *)(iVar4 + 0x28);
              iVar12 = *(int *)(iVar4 + 0x2c);
              if (iVar11 < iVar12 - iVar14) {
                iVar14 = iVar14 + ((iVar12 - iVar14) - iVar11) / 2;
                iVar12 = iVar11 + iVar14;
              }
              if ((iVar14 <= param_3) && (param_3 < iVar12)) {
                FUN_004a24a0(iVar3,local_68 * 0xd0 + local_50,iVar8,param_2,param_3,param_5,param_6,
                             local_30,&param_1,&local_60);
                uVar15 = param_1;
                goto LAB_004a238e;
              }
            }
          }
          if ((DAT_00647720 != 0) && (0xb < *(int *)(iVar4 + 0x28) - *piVar13)) {
            iVar4 = FUN_00480790(iVar3,iVar8,param_2,param_3);
            if (iVar4 != 0) {
              param_1 = 7;
              uVar15 = param_1;
              goto LAB_004a238e;
            }
          }
          if ((((iVar8 != 0) &&
               (iVar4 = *(int *)(iVar8 + 0x218),
               DAT_006477b8 <= *(int *)(iVar4 + 0x2c) - *(int *)(iVar4 + 0x24))) &&
              (0xb < *(int *)(iVar4 + 0x28) - *(int *)(iVar4 + 0x20))) &&
             ((DAT_00647714 != 0 && (*(int *)(iVar8 + 0xb0) != 0)))) {
            uVar7 = FUN_0047c170(iVar8 + 0x98,param_2,param_3,0xffffffff);
            if ((uVar7 != 0) && (uVar15 = uVar7 | 0x100, (uVar7 | 0x100) != 0)) goto LAB_004a238e;
          }
          iVar4 = *(int *)(iVar3 + 0xb90);
          iStack_1c = *(int *)(iVar3 + 0xb94);
          local_48 = 0;
          local_20 = iVar4;
          if (iVar4 == 0 && iStack_1c == 0) {
            local_54 = (uint *)0xffffffff;
          }
          else {
            lVar16 = ftol();
            uVar2 = lVar16 + *(int *)(iVar3 + 0xac0);
            local_54 = (uint *)uVar2;
            if ((uVar2 < 0x8000000000000000) ||
               ((-0x100000001 < (longlong)uVar2 && ((uint *)0xffffbfff < local_54)))) {
              if (0x3fff < (longlong)uVar2) {
                local_54 = (uint *)0x3fff;
              }
            }
            else {
              local_54 = (uint *)0xffffc000;
            }
          }
          if (iVar4 == 0 && iStack_1c == 0) {
            uVar15 = 0xffffffff;
          }
          else {
            local_8 = *(uint *)(iVar8 + 0x18) + *(uint *)(iVar8 + 0x20);
            iStack_4 = *(int *)(iVar8 + 0x1c) + *(int *)(iVar8 + 0x24) +
                       (uint)CARRY4(*(uint *)(iVar8 + 0x18),*(uint *)(iVar8 + 0x20));
            lVar16 = ftol();
            uVar2 = lVar16 + *(int *)(iVar3 + 0xac0);
            uVar15 = (uint)uVar2;
            if ((uVar2 < 0x8000000000000000) ||
               ((-0x100000001 < (longlong)uVar2 && (0xffffbfff < uVar15)))) {
              if (0x3fff < (longlong)uVar2) {
                uVar15 = 0x3fff;
              }
            }
            else {
              uVar15 = 0xffffc000;
            }
          }
          piVar13 = local_34;
          iVar4 = (int)((uVar15 - (int)local_54) + -2) / 3;
          if (iVar4 < 0) {
LAB_004a1f5b:
            iVar4 = -1;
          }
          else if (iVar4 < 5) {
            if (iVar4 < 1) goto LAB_004a1f5b;
          }
          else {
            iVar4 = 4;
          }
          if ((param_2 < (int)(uVar15 - iVar4)) || ((int)(uVar15 + 4) < param_2)) {
            if ((iVar4 + (int)local_54 < param_2) || (param_2 < (int)(local_54 + -1))) {
              if (iVar4 < 4) {
                local_48 = 1;
              }
            }
            else {
              param_1 = 5;
            }
          }
          else {
            param_1 = 6;
          }
          if ((DAT_0064771c != 0) && (0xc < local_34[2] - *local_34)) {
            uVar7 = FUN_00477820(iVar3,piVar5,iVar8,param_2,param_3,param_5,param_6);
            if (uVar7 != 0) {
              if (param_1 == 4) {
                if (((uVar7 != 8) && (piVar13[2] - *piVar13 < 0x24)) &&
                   (uVar15 = param_1, (piVar13[3] + piVar13[1]) / 2 <= param_3)) goto LAB_004a238e;
                param_1 = uVar7 | 0x300;
              }
              else if ((uVar7 == 4) || (uVar7 == 5)) {
                param_1 = uVar7 | 0x300;
              }
              FUN_00476d10(iVar8,param_2,param_3,(char *)(iVar3 + 0x240),0x100,uVar7);
              local_60 = (char *)(iVar3 + 0x240);
            }
          }
          iVar4 = FUN_004a2440(*(uint *)(*(int *)(iVar8 + 0x218) + 0x68) >> 2 & 1,
                               *(int *)(iVar8 + 0x218) + 0x40,&param_2);
          if (iVar4 == 0) {
            iVar4 = FUN_004a2440(*(uint *)(*(int *)(iVar8 + 0x218) + 0x68) >> 3 & 1,
                                 *(int *)(iVar8 + 0x218) + 0x48,&param_2);
            if (iVar4 != 0) {
              param_1 = 0xe;
              iVar4 = *(int *)(*(int *)(iVar8 + 0x218) + 0x4c);
              iVar8 = *(int *)(*(int *)(iVar8 + 0x218) + 0x48);
              local_60 = "Event Pan/Crop...";
              *(int *)(iVar3 + 0x3a8) = iVar8 + -10;
              *(int *)(iVar3 + 0x3ac) = iVar4 + -10;
              *(int *)(iVar3 + 0x3b0) = iVar8 + 10;
              *(int *)(iVar3 + 0x3b4) = iVar4 + 10;
              uVar15 = param_1;
              goto LAB_004a238e;
            }
            iVar4 = FUN_004a2440(*(uint *)(*(int *)(iVar8 + 0x218) + 0x68) >> 4 & 1,
                                 *(int *)(iVar8 + 0x218) + 0x50,&param_2);
            if (iVar4 != 0) {
              param_1 = 0xf;
              iVar4 = *(int *)(*(int *)(iVar8 + 0x218) + 0x54);
              iVar8 = *(int *)(*(int *)(iVar8 + 0x218) + 0x50);
              local_60 = "Generated Media...";
              *(int *)(iVar3 + 0x3a8) = iVar8 + -10;
              *(int *)(iVar3 + 0x3ac) = iVar4 + -10;
              *(int *)(iVar3 + 0x3b0) = iVar8 + 10;
              *(int *)(iVar3 + 0x3b4) = iVar4 + 10;
              uVar15 = param_1;
              goto LAB_004a238e;
            }
          }
          else {
            param_1 = 9;
            iVar4 = *(int *)(*(int *)(iVar8 + 0x218) + 0x44);
            iVar8 = *(int *)(*(int *)(iVar8 + 0x218) + 0x40);
            *(int *)(iVar3 + 0x3a8) = iVar8 + -10;
            *(int *)(iVar3 + 0x3ac) = iVar4 + -10;
            *(int *)(iVar3 + 0x3b0) = iVar8 + 10;
            *(int *)(iVar3 + 0x3b4) = iVar4 + 10;
            local_60 = (LPCSTR)_SfGetString_8(DAT_00647204,0x56);
          }
          uVar15 = param_1;
          if ((param_1 != 4) || (local_48 != 0)) goto LAB_004a238e;
        }
      }
      else {
        if (piVar5[1] != 0) {
          *(int *)(iVar3 + 0xcec) = iVar8;
          FUN_004a24a0(iVar3,local_68 * 0xd0 + local_50,iVar8,param_2,param_3,param_5,param_6,
                       local_30,&param_1,&local_60);
          uVar15 = param_1;
          goto LAB_004a238e;
        }
        if (local_5c < (int)local_68) {
          iVar4 = piVar5[5];
          if ((((local_14 <= iVar4) && ((local_14 < iVar4 || (local_18 < (uint)piVar5[4])))) &&
              (iVar4 <= local_24)) &&
             ((((iVar4 < local_24 || ((uint)piVar5[4] < local_28)) && (iVar8 != 0)) &&
              ((piVar5[-0x34] != 0 && (piVar5[-0x33] == 0)))))) {
            *(int *)(iVar3 + 0xcec) = iVar8;
            param_1 = 0xd;
            piVar5 = (int *)(local_68 * 0xd0 + local_50);
            iVar8 = piVar5[-0x34];
            iVar4 = *piVar5;
            iVar11 = *(int *)(iVar4 + 0x1c);
            iVar12 = *(int *)(iVar8 + 0x1c);
            uVar15 = *(uint *)(iVar8 + 0x18);
            if ((iVar12 <= iVar11) && ((iVar12 < iVar11 || (uVar15 < *(uint *)(iVar4 + 0x18))))) {
              local_8 = *(uint *)(iVar8 + 0x20) + uVar15;
              iVar8 = *(int *)(iVar8 + 0x24) + iVar12 + (uint)CARRY4(*(uint *)(iVar8 + 0x20),uVar15)
              ;
              iVar11 = *(int *)(iVar4 + 0x24) + iVar11 +
                       (uint)CARRY4(*(uint *)(iVar4 + 0x20),*(uint *)(iVar4 + 0x18));
              if ((iVar11 <= iVar8) &&
                 ((iVar11 < iVar8 || (*(uint *)(iVar4 + 0x20) + *(uint *)(iVar4 + 0x18) < local_8)))
                 ) {
                param_1 = 5;
              }
            }
            iVar8 = piVar5[-0x34];
            iVar4 = *piVar5;
            iVar11 = *(int *)(iVar8 + 0x1c);
            param_6 = *(int *)(iVar4 + 0x1c);
            uVar7 = *(uint *)(iVar8 + 0x18);
            uVar1 = *(uint *)(iVar4 + 0x18);
            uVar15 = param_1;
            if ((param_6 <= iVar11) && ((param_6 < iVar11 || (uVar1 < uVar7)))) {
              iVar11 = *(int *)(iVar8 + 0x24) + iVar11 + (uint)CARRY4(*(uint *)(iVar8 + 0x20),uVar7)
              ;
              iVar12 = *(int *)(iVar4 + 0x24) + param_6 +
                       (uint)CARRY4(*(uint *)(iVar4 + 0x20),uVar1);
              if ((iVar11 <= iVar12) &&
                 ((iVar11 < iVar12 ||
                  (*(uint *)(iVar8 + 0x20) + uVar7 < *(uint *)(iVar4 + 0x20) + uVar1)))) {
                *(int *)(iVar3 + 0xcec) = iVar8;
                param_1 = 6;
                uVar15 = param_1;
              }
            }
LAB_004a238e:
            param_1 = uVar15;
            if (*(int *)(iVar3 + 0xcec) != 0) {
              uVar9 = FUN_005c9450(*(undefined4 *)(iVar3 + 0xbc8),*(int *)(iVar3 + 0xcec));
              *(undefined4 *)(iVar3 + 0xce8) = uVar9;
            }
            if ((param_1 & 0xf00) == 0x100) {
              iVar8 = FUN_0047eb20(*(int *)(iVar3 + 0xcec) + 0x98,param_2,param_3,param_1,
                                   (LPCSTR)(iVar3 + 0x240),0x100);
              if (iVar8 != 0) {
                local_60 = (LPCSTR)(iVar3 + 0x240);
              }
            }
            goto LAB_004a23f1;
          }
        }
      }
    }
  }
  if ((int)local_68 < 0) {
    local_68 = -local_68;
  }
  else {
    local_68 = -local_68 - 1;
  }
  goto LAB_004a1b2c;
}


