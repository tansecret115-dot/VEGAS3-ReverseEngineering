/* Module: vegas30.exe
   Function: FUN_005cbf70
   Address: 005cbf70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005cbf70(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  undefined8 uVar15;
  longlong lVar16;
  uint local_90;
  int local_8c;
  int local_88;
  int *local_84;
  int *local_80;
  int local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  uint local_60;
  int local_5c;
  int *local_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined8 local_3c;
  undefined8 local_34;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  uint local_18;
  undefined8 local_14;
  undefined4 local_c;
  uint local_8;
  
  uVar2 = *(undefined4 *)(param_1 + 8);
  local_48 = 0;
  local_c = uVar2;
  FUN_005b83b0(uVar2,1);
  local_40 = DAT_00647788;
  local_7c = **(int **)(param_1 + 0x24);
  local_1c = *(int *)(param_1 + 4);
  local_18 = (uint)(local_1c == 3);
  local_68 = DAT_00649978;
  if (local_18 == 0) {
    local_68 = DAT_00647798;
  }
  if (local_1c == 3) {
    local_50 = DAT_00649980;
    local_4c = DAT_00649984;
  }
  else {
    local_50 = DAT_006477a0;
    local_4c = DAT_006477a4;
  }
  local_2c = 0;
  local_28 = 0;
  if ((*(int *)(param_1 + 0x28) == 0) &&
     (local_48 = _SfList_CreateExZ_32
                           ((undefined4 *)(param_1 + 0x28),0xd0,local_7c * 4 + 5,0x10,0x40000004,0,0
                            ,0), local_48 < 0)) {
    FUN_005b84d0(uVar2,1);
    return local_48;
  }
  piVar14 = *(int **)(param_1 + 0x28);
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  iVar6 = local_7c * 4 + 5;
  local_78 = 1;
  local_58 = piVar14;
  if (*piVar14 < iVar6) {
    _SfList_ArrayForceItemCount_12(piVar14,iVar6,0);
  }
  local_84 = (int *)0x0;
  local_80 = (int *)0x0;
  local_6c = 0;
  iVar6 = 0;
  if (0 < local_7c) {
    do {
      piVar3 = *(int **)(*(int *)(*(int *)(param_1 + 0x24) + 8) + local_6c * 4);
      if ((local_8c <= piVar3[7]) && ((local_8c < piVar3[7] || (local_90 < (uint)piVar3[6])))) {
        iVar6 = piVar14[1];
        iVar7 = piVar14[2];
        *(undefined4 *)(iVar6 * local_88 + 200 + iVar7) = 0;
        puVar5 = (undefined4 *)(iVar6 * local_88 + iVar7);
        puVar5[4] = local_90;
        puVar5[10] = 1000;
        puVar5[0x20] = 1000;
        puVar5[5] = local_8c;
        puVar5[8] = 0;
        puVar5[0x1e] = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[0x32] = ((uint)(local_78 == 0) << 1 | local_78 & 1) << 2;
        local_90 = piVar3[6];
        local_8c = piVar3[7];
        local_88 = local_88 + 1;
      }
      local_24 = piVar3[8] + piVar3[6];
      local_20 = piVar3[9] + piVar3[7] + (uint)CARRY4(piVar3[8],piVar3[6]);
      local_60 = local_24 - piVar3[0x20];
      local_5c = (local_20 - piVar3[0x21]) - (uint)(local_24 < (uint)piVar3[0x20]);
      local_44 = 0;
      local_54 = (float)piVar3[0x18];
      if ((piVar3[4] & 0x200U) != 0) {
        local_54 = local_54 * (float)piVar3[0x19];
      }
      local_74 = 0xffffffff;
      local_70 = 0x7fffffff;
      local_64 = 0;
      if ((local_6c + 1 < local_7c) &&
         (local_64 = *(int *)(*(int *)(*(int *)(param_1 + 0x24) + 8) + (local_6c + 1) * 4),
         local_64 != 0)) {
        local_74 = *(uint *)(local_64 + 0x18);
        local_70 = *(int *)(local_64 + 0x1c);
        uVar13 = *(uint *)(local_64 + 0x20) + local_74;
        iVar6 = *(int *)(local_64 + 0x24) + local_70 +
                (uint)CARRY4(*(uint *)(local_64 + 0x20),local_74);
        if ((local_20 < iVar6) || ((local_20 <= iVar6 && (local_24 < uVar13)))) {
          local_44 = 0;
          if ((local_70 <= local_20) &&
             ((((local_70 < local_20 || (local_74 < local_24)) && (local_5c <= local_70)) &&
              ((local_5c < local_70 || (local_60 <= local_74)))))) {
            local_60 = local_74;
            local_5c = local_70;
          }
        }
        else {
          local_44 = 1;
          if ((local_5c <= iVar6) && ((local_5c < iVar6 || (local_60 <= uVar13)))) {
            local_60 = uVar13;
            local_5c = iVar6;
          }
        }
      }
      if (piVar3 != (int *)0x0) {
        if (param_2 != 0) {
          piVar3[0x16] = piVar3[0x16] & 0xffffff7f;
        }
        if ((local_68 != 0) && (uVar13 = piVar3[0x16], (uVar13 & 8) != 0)) {
          if ((uVar13 & 2) == 0) {
            piVar3[0x1e] = 0;
            piVar3[0x1f] = 0;
          }
          else {
            piVar3[0x1e] = piVar3[0x22];
            piVar3[0x1f] = piVar3[0x23];
          }
          if ((uVar13 & 4) == 0) {
            piVar3[0x20] = 0;
            piVar3[0x21] = 0;
          }
          else {
            piVar3[0x20] = piVar3[0x24];
            piVar3[0x21] = piVar3[0x25];
          }
          piVar3[0x16] = uVar13 & 0xfffffff1;
        }
        if (local_40 == 0) {
          uVar13 = piVar3[0x16] & 0xffffff7f;
LAB_005cc459:
          piVar3[0x16] = uVar13;
        }
        else if (local_84 == (int *)0x0) {
          uVar13 = piVar3[0x16];
          if (((uVar13 & 1) != 0) && ((*(byte *)(piVar3 + 4) & 8) == 0)) {
            iVar6 = piVar3[0x23];
            uVar11 = piVar3[0x22];
            if ((iVar6 < 1) && (iVar6 < 0)) {
              piVar3[0x1e] = 0;
              piVar3[0x1f] = 0;
              piVar3[0x16] = uVar13 & 0xffffff7e;
              goto LAB_005cc45c;
            }
            iVar7 = piVar3[9];
            if ((iVar7 <= iVar6) && ((iVar7 < iVar6 || ((uint)piVar3[8] < uVar11)))) {
              uVar11 = piVar3[8];
              iVar6 = iVar7;
            }
            piVar3[0x1e] = uVar11;
            piVar3[0x1f] = iVar6;
          }
          piVar3[0x16] = uVar13 & 0xffffff7e;
        }
        else {
          uVar13 = piVar3[0x16];
          if (((((uVar13 & 0x10) == 0) && ((piVar3[4] & 8U) == 0)) &&
              (uVar11 = local_84[0x16], (uVar11 & 0x10) == 0)) && ((local_84[4] & 8U) == 0)) {
            if (((((local_84[4] ^ piVar3[4]) & 0x800000U) == 0) &&
                ((uVar11 >> 1 & 0x20) == (uVar13 & 0x20))) &&
               (((uVar13 & 0x300) == 0 &&
                (((uVar11 & 0x300) == 0 &&
                 (*(int *)(piVar3[0x86] + 0xa8) == *(int *)(local_84[0x86] + 0xa8))))))) {
              if (((uVar13 & 0x80) != 0) && (piVar3[0x16] = uVar13 & 0xffffff7f, (uVar13 & 1) != 0))
              {
                piVar3[0x1e] = piVar3[0x22];
                piVar3[0x1f] = piVar3[0x23];
                uVar13 = uVar13 & 0xffffff7e;
                goto LAB_005cc459;
              }
            }
            else {
              uVar11 = local_84[8];
              uVar8 = local_84[6];
              iVar6 = local_84[7];
              uVar10 = uVar11 + uVar8;
              iVar7 = local_84[9];
              if ((uVar13 & 1) == 0) {
                piVar3[0x22] = piVar3[0x1e];
                piVar3[0x23] = piVar3[0x1f];
                piVar3[0x16] = uVar13 | 2;
              }
              uVar13 = uVar10 - piVar3[6];
              iVar6 = ((iVar7 + iVar6 + (uint)CARRY4(uVar11,uVar8)) - piVar3[7]) -
                      (uint)(uVar10 < (uint)piVar3[6]);
              if ((iVar6 < 1) && (iVar6 < 0)) {
                uVar13 = 0;
                iVar6 = 0;
              }
              else {
                iVar7 = piVar3[9];
                if ((iVar7 <= iVar6) && ((iVar7 < iVar6 || ((uint)piVar3[8] < uVar13)))) {
                  uVar13 = piVar3[8];
                  iVar6 = iVar7;
                }
              }
              piVar3[0x1e] = uVar13;
              uVar13 = piVar3[0x16];
              piVar3[0x1f] = iVar6;
              uVar11 = uVar13 | 1;
              piVar3[0x16] = uVar11;
              piVar3[0x16] = (uint)(local_84[4] ^ piVar3[4]) >> 0x10 & 0x80 |
                             CONCAT31((int3)(uVar13 >> 8),(char)uVar11) & 0xffffff7f;
            }
          }
        }
      }
LAB_005cc45c:
      iVar6 = piVar3[0x1f];
      uVar13 = piVar3[0x1e];
      local_78 = (uint)(local_78 == 0);
      uVar11 = local_78;
      if (uVar13 == 0 && iVar6 == 0) {
LAB_005ccb28:
        if (local_84 != (int *)0x0) {
          local_80 = local_84;
        }
        local_84 = (int *)0x0;
        if ((local_5c < local_8c) || ((local_5c <= local_8c && (local_60 <= local_90)))) {
LAB_005ccdef:
          piVar14 = local_80;
          if ((local_20 < local_8c) || ((local_20 <= local_8c && (local_24 <= local_90))))
          goto LAB_005cd036;
          iVar6 = local_88 + 1;
          piVar14 = (int *)(local_58[1] * local_88 + local_58[2]);
          piVar14[0x32] = 0;
          piVar14[4] = local_90;
          piVar14[5] = local_8c;
          piVar14[10] = 1000;
          piVar14[0x20] = 1000;
          piVar14[8] = 0;
          piVar14[0x1e] = 0;
          *piVar14 = (int)piVar3;
          piVar14[1] = 0;
          piVar14[2] = 0;
          if (local_80 != (int *)0x0) {
            iVar7 = local_80[9] + local_80[7] + (uint)CARRY4(local_80[8],local_80[6]);
            if ((local_8c <= iVar7) &&
               ((local_8c < iVar7 || (local_90 < (uint)(local_80[8] + local_80[6]))))) {
              piVar14[2] = (int)local_80;
            }
          }
          piVar14[0x32] = ((uint)(uVar11 == 0) << 1 | uVar11 & 1) << 2 | 2;
          uVar13 = piVar14[0x1a];
          piVar14[0x12] = piVar3[10];
          piVar14[0x13] = piVar3[0xb];
          uVar11 = (uint)piVar3[4] >> 8 & 1 | uVar13 & 0xfffffffe;
          piVar14[0x1a] = uVar11;
          uVar8 = (uint)piVar3[4] >> 0x18 & 0x30;
          uVar13 = CONCAT31((int3)((uVar13 & 0xfffffffe) >> 8),(char)uVar11);
          piVar14[0x1a] = uVar8 | uVar13 & 0xffffffcf;
          uVar13 = uVar13 & 0xfffffe0f;
          uVar11 = (uint)piVar3[4] >> 0x13 & 0x1c0 | uVar8 | uVar13;
          piVar14[0x1a] = uVar11;
          uVar8 = (uVar11 ^ piVar3[4]) & 2 ^ uVar11;
          piVar14[0x1a] = uVar8;
          uVar13 = CONCAT22((short)(uVar13 >> 0x10),CONCAT11((char)(uVar11 >> 8),(char)uVar8));
          uVar11 = ((*(uint *)(param_1 + 0x634) ^ piVar3[0x3f]) & 1) << 9;
          piVar14[0x1a] = uVar11 | uVar13 & 0xfffffdff;
          piVar14[0x1a] = (uint)piVar3[4] >> 0x12 & 4 | uVar11 | uVar13 & 0xfffffdfb;
          local_88 = iVar6;
          if (piVar3[0x14] != 0) {
            if (*(int *)(piVar3[0x14] + 0x18) == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = FUN_005f13f0(*(undefined4 *)(param_1 + 4));
            }
            piVar14[8] = iVar6;
            uVar13 = piVar3[6];
            uVar11 = *(uint *)(piVar3[0x14] + 8);
            uVar8 = uVar11 - uVar13;
            iVar6 = *(int *)(piVar3[0x14] + 0xc);
            iVar7 = piVar3[7];
            piVar14[6] = uVar8 + local_90;
            piVar14[7] = ((iVar6 - iVar7) - (uint)(uVar11 < uVar13)) + local_8c +
                         (uint)CARRY4(uVar8,local_90);
            piVar14[10] = piVar3[0x3e];
          }
          uVar13 = piVar14[0x1a];
          iVar6 = piVar14[8];
          piVar14[0x1a] = uVar13 & 0xfffffff7;
          if (iVar6 != 0) {
            uVar11 = *(uint *)(*(int *)(iVar6 + 8) + 0x134) >> 5 & 1;
            if (uVar11 == 0) {
              uVar11 = *(uint *)(iVar6 + 0x8c) & 1;
            }
            piVar14[0x1a] = uVar11 << 3 | uVar13 & 0xfffffff7;
          }
          piVar14[9] = piVar3[0x1b];
          piVar14[0xe] = 0;
          piVar14[0xc] = (int)local_54;
          piVar14[0xb] = 0;
          piVar14[0xf] = 0;
          piVar14[0x10] = local_24 - local_90;
          piVar14[0x11] = (local_20 - local_8c) - (uint)(local_24 < local_90);
          local_90 = local_24;
          local_8c = local_20;
          piVar14 = local_80;
          if ((local_20 < local_70) || ((local_20 <= local_70 && (local_24 <= local_74))))
          goto LAB_005cd036;
          local_90 = local_74;
          local_88 = local_88 + -1;
          local_8c = local_70;
          local_84 = (int *)0x0;
          if ((*(int *)(local_64 + 0x78) == 0 && *(int *)(local_64 + 0x7c) == 0) &&
             (piVar14 = piVar3, local_40 == 0)) goto LAB_005cd036;
          goto LAB_005cd032;
        }
        iVar6 = local_88 + 1;
        piVar14 = (int *)(local_58[1] * local_88 + local_58[2]);
        piVar14[0x32] = 0;
        piVar14[4] = local_90;
        piVar14[5] = local_8c;
        piVar14[10] = 1000;
        piVar14[0x20] = 1000;
        piVar14[8] = 0;
        piVar14[0x1e] = 0;
        *piVar14 = (int)piVar3;
        piVar14[1] = 0;
        piVar14[2] = 0;
        if (local_80 != (int *)0x0) {
          iVar7 = local_80[9] + local_80[7] + (uint)CARRY4(local_80[8],local_80[6]);
          if ((local_8c <= iVar7) &&
             ((local_8c < iVar7 || (local_90 < (uint)(local_80[8] + local_80[6]))))) {
            piVar14[2] = (int)local_80;
          }
        }
        piVar14[0x32] = ((uint)(uVar11 == 0) << 1 | uVar11 & 1) << 2;
        piVar14[0x12] = piVar3[10];
        uVar13 = piVar14[0x1a];
        piVar14[0x13] = piVar3[0xb];
        uVar8 = (uint)piVar3[4] >> 8 & 1 | uVar13 & 0xfffffffe;
        piVar14[0x1a] = uVar8;
        uVar10 = (uint)piVar3[4] >> 0x18 & 0x30;
        uVar13 = CONCAT31((int3)((uVar13 & 0xfffffffe) >> 8),(char)uVar8);
        piVar14[0x1a] = uVar10 | uVar13 & 0xffffffcf;
        uVar13 = uVar13 & 0xfffffe0f;
        uVar8 = (uint)piVar3[4] >> 0x13 & 0x1c0 | uVar10 | uVar13;
        piVar14[0x1a] = uVar8;
        uVar10 = (uVar8 ^ piVar3[4]) & 2 ^ uVar8;
        piVar14[0x1a] = uVar10;
        uVar13 = CONCAT22((short)(uVar13 >> 0x10),CONCAT11((char)(uVar8 >> 8),(char)uVar10));
        uVar8 = ((*(uint *)(param_1 + 0x634) ^ piVar3[0x3f]) & 1) << 9;
        piVar14[0x1a] = uVar8 | uVar13 & 0xfffffdff;
        piVar14[0x1a] = (uint)piVar3[4] >> 0x12 & 4 | uVar8 | uVar13 & 0xfffffdfb;
        local_88 = iVar6;
        if (piVar3[0x14] != 0) {
          if (*(int *)(piVar3[0x14] + 0x18) == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = FUN_005f13f0(*(undefined4 *)(param_1 + 4));
          }
          piVar14[8] = iVar6;
          uVar13 = piVar3[6];
          uVar8 = *(uint *)(piVar3[0x14] + 8);
          uVar10 = uVar8 - uVar13;
          iVar6 = *(int *)(piVar3[0x14] + 0xc);
          iVar7 = piVar3[7];
          piVar14[6] = uVar10 + local_90;
          piVar14[7] = ((iVar6 - iVar7) - (uint)(uVar8 < uVar13)) + local_8c +
                       (uint)CARRY4(uVar10,local_90);
          piVar14[10] = piVar3[0x3e];
        }
        uVar13 = piVar14[0x1a];
        iVar6 = piVar14[8];
        piVar14[0x1a] = uVar13 & 0xfffffff7;
        if (iVar6 != 0) {
          uVar8 = *(uint *)(*(int *)(iVar6 + 8) + 0x134) >> 5 & 1;
          if (uVar8 == 0) {
            uVar8 = *(uint *)(iVar6 + 0x8c) & 1;
          }
          piVar14[0x1a] = uVar8 << 3 | uVar13 & 0xfffffff7;
        }
        piVar14[0xb] = (int)local_54;
        piVar14[9] = 0;
        local_90 = local_60;
        local_8c = local_5c;
        if ((local_5c < local_70) || ((local_5c <= local_70 && (local_60 <= local_74))))
        goto LAB_005ccdef;
        if ((local_74 == piVar14[4]) && (local_70 == piVar14[5])) {
          local_88 = local_88 + -1;
        }
        local_90 = local_74;
        local_8c = local_70;
        if (local_44 != 0) {
          FUN_005cd250(param_1,local_58,piVar3,uVar11,&local_88,&local_6c,&local_90,param_2);
          local_74 = 0xffffffff;
          local_70 = 0x7fffffff;
          local_64 = 0;
          if ((local_6c + 1 < local_7c) &&
             (local_64 = *(int *)(*(int *)(*(int *)(param_1 + 0x24) + 8) + (local_6c + 1) * 4),
             local_64 != 0)) {
            local_74 = *(uint *)(local_64 + 0x18);
            local_70 = *(int *)(local_64 + 0x1c);
            local_44 = 0;
          }
          goto LAB_005ccb28;
        }
        if (*(int *)(local_64 + 0x78) != 0 || *(int *)(local_64 + 0x7c) != 0) goto LAB_005cd032;
joined_r0x005ccde0:
        local_84 = (int *)0x0;
        piVar14 = piVar3;
        local_74 = local_90;
        local_70 = local_8c;
        if (local_40 != 0) goto LAB_005cd032;
      }
      else {
        iVar7 = piVar3[9];
        if ((iVar7 < iVar6) || ((iVar7 <= iVar6 && ((uint)piVar3[8] <= uVar13)))) {
          uVar13 = piVar3[8];
          iVar6 = iVar7;
        }
        iVar7 = local_88 + 1;
        piVar14 = (int *)(local_58[1] * local_88 + local_58[2]);
        piVar14[0x32] = 0;
        piVar14[4] = local_90;
        piVar14[5] = local_8c;
        piVar14[10] = 1000;
        piVar14[0x20] = 1000;
        piVar14[8] = 0;
        piVar14[0x1e] = 0;
        *piVar14 = (int)piVar3;
        piVar14[1] = 0;
        piVar14[2] = 0;
        if (local_80 != (int *)0x0) {
          local_8 = local_80[8] + local_80[6];
          iVar9 = local_80[9] + local_80[7] + (uint)CARRY4(local_80[8],local_80[6]);
          if ((local_8c <= iVar9) && ((local_8c < iVar9 || (local_90 < local_8)))) {
            piVar14[2] = (int)local_80;
          }
        }
        piVar14[0x32] = ((uint)(local_78 == 0) << 1 | local_78) << 2;
        local_88 = iVar7;
        if (piVar3[0x14] != 0) {
          if (*(int *)(piVar3[0x14] + 0x18) == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = FUN_005f13f0(*(undefined4 *)(param_1 + 4));
          }
          piVar14[8] = iVar7;
          uVar11 = *(uint *)(piVar3[0x14] + 8);
          uVar8 = piVar3[6];
          uVar10 = uVar11 - piVar3[6];
          iVar7 = *(int *)(piVar3[0x14] + 0xc);
          iVar9 = piVar3[7];
          piVar14[6] = uVar10 + local_90;
          piVar14[7] = ((iVar7 - iVar9) - (uint)(uVar11 < uVar8)) + local_8c +
                       (uint)CARRY4(uVar10,local_90);
          piVar14[10] = piVar3[0x3e];
        }
        piVar4 = local_84;
        iVar7 = piVar3[0x1a];
        piVar14[0xe] = 0;
        piVar14[0x10] = uVar13;
        piVar14[9] = iVar7;
        piVar14[0xc] = 0;
        piVar14[0xb] = (int)local_54;
        piVar14[0xf] = 0;
        piVar14[0x11] = iVar6;
        uVar11 = piVar14[0x1a];
        piVar14[0x12] = piVar3[10];
        piVar14[0x13] = piVar3[0xb];
        uVar8 = (uint)piVar3[4] >> 8 & 1 | uVar11 & 0xfffffffe;
        piVar14[0x1a] = uVar8;
        uVar10 = (uint)piVar3[4] >> 0x18 & 0x30;
        uVar11 = CONCAT31((int3)((uVar11 & 0xfffffffe) >> 8),(char)uVar8);
        piVar14[0x1a] = uVar10 | uVar11 & 0xffffffcf;
        uVar11 = uVar11 & 0xfffffe0f;
        uVar8 = (uint)piVar3[4] >> 0x13 & 0x1c0 | uVar10 | uVar11;
        piVar14[0x1a] = uVar8;
        uVar10 = (uVar8 ^ piVar3[4]) & 2 ^ uVar8;
        piVar14[0x1a] = uVar10;
        uVar11 = CONCAT22((short)(uVar11 >> 0x10),CONCAT11((char)(uVar8 >> 8),(char)uVar10));
        uVar8 = ((piVar3[0x3f] ^ *(uint *)(param_1 + 0x634)) & 1) << 9;
        piVar14[0x1a] = uVar8 | uVar11 & 0xfffffdff;
        uVar11 = (uint)piVar3[4] >> 0x12 & 4 | uVar8 | uVar11 & 0xfffffdf3;
        iVar7 = piVar14[8];
        piVar14[0x1a] = uVar11;
        if (iVar7 != 0) {
          uVar8 = *(uint *)(*(int *)(iVar7 + 8) + 0x134) >> 5 & 1;
          if (uVar8 == 0) {
            uVar8 = *(uint *)(iVar7 + 0x8c) & 1;
          }
          piVar14[0x1a] = uVar8 << 3 | uVar11;
        }
        local_90 = uVar13 + piVar3[6];
        local_8c = iVar6 + piVar3[7] + (uint)CARRY4(uVar13,piVar3[6]);
        if (local_84 != (int *)0x0) {
          piVar14[1] = (int)local_84;
          piVar14[0x1e] = 0;
          piVar14[0x20] = 1000;
          piVar14[0x1f] = piVar3[0x1c];
          fVar1 = (float)local_84[0x18];
          piVar14[0x22] = (int)fVar1;
          if ((local_84[4] & 0x200U) != 0) {
            piVar14[0x22] = (int)(fVar1 * (float)local_84[0x19]);
          }
          piVar14[0x24] = piVar14[0xe];
          piVar14[0x26] = piVar14[0x10];
          piVar14[0x21] = 0;
          piVar14[0x25] = piVar14[0xf];
          piVar14[0x27] = piVar14[0x11];
          uVar13 = piVar14[0x30];
          piVar14[0x28] = local_84[10];
          piVar14[0x29] = local_84[0xb];
          uVar11 = (uint)local_84[4] >> 8 & 1 | uVar13 & 0xfffffffe;
          piVar14[0x30] = uVar11;
          uVar13 = CONCAT31((int3)((uVar13 & 0xfffffffe) >> 8),(char)uVar11) & 0xffffffcf;
          uVar11 = (uint)local_84[4] >> 0x18 & 0x30 | uVar13;
          piVar14[0x30] = uVar11;
          uVar11 = (uVar11 ^ local_84[4]) & 2 ^ uVar11;
          piVar14[0x30] = uVar11;
          uVar13 = CONCAT22((short)(uVar13 >> 0x10),CONCAT11((char)(uVar13 >> 8),(char)uVar11));
          uVar11 = ((local_84[0x3f] ^ *(uint *)(param_1 + 0x634)) & 1) << 9;
          piVar14[0x30] = uVar11 | uVar13 & 0xfffffdff;
          piVar14[0x30] = (uint)local_84[4] >> 0x12 & 4 | uVar11 | uVar13 & 0xfffffdfb;
          if (local_84[0x14] != 0) {
            if (*(int *)(local_84[0x14] + 0x18) == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = FUN_005f13f0(*(undefined4 *)(param_1 + 4));
            }
            piVar14[0x1e] = iVar6;
            uVar13 = piVar4[6];
            uVar11 = *(uint *)(piVar4[0x14] + 8);
            uVar8 = uVar11 - uVar13;
            iVar6 = *(int *)(piVar4[0x14] + 0xc);
            iVar7 = piVar4[7];
            piVar14[0x1c] = uVar8 + piVar14[4];
            piVar14[0x1d] =
                 ((iVar6 - iVar7) - (uint)(uVar11 < uVar13)) + piVar14[5] +
                 (uint)CARRY4(uVar8,piVar14[4]);
            piVar14[0x20] = piVar4[0x3e];
          }
          uVar13 = piVar14[0x30];
          iVar6 = piVar14[0x1e];
          piVar14[0x30] = uVar13 & 0xfffffff7;
          if (iVar6 != 0) {
            uVar11 = *(uint *)(*(int *)(iVar6 + 8) + 0x134) >> 5 & 1;
            if (uVar11 == 0) {
              uVar11 = *(uint *)(iVar6 + 0x8c) & 1;
            }
            piVar14[0x30] = uVar11 << 3 | uVar13 & 0xfffffff7;
          }
          uVar13 = piVar4[6] + piVar4[8];
          iVar6 = piVar4[7] + piVar4[9] + (uint)CARRY4(piVar4[6],piVar4[8]);
          if ((iVar6 <= local_8c) && ((iVar6 < local_8c || (uVar13 < local_90)))) {
            iVar7 = uVar13 - piVar3[6];
            iVar6 = (iVar6 - piVar3[7]) - (uint)(uVar13 < (uint)piVar3[6]);
            if ((iVar6 < 1) && (iVar6 < 0)) {
              iVar7 = 0;
              iVar6 = 0;
            }
            piVar14[0x26] = iVar7;
            piVar14[0x27] = iVar6;
          }
          if (param_2 != 0) {
            if (((piVar4[4] ^ piVar3[4]) & 0x800000U) == 0) {
              piVar3[0x22] = 0;
              piVar3[0x16] = piVar3[0x16] & 0xfffffffc;
              piVar3[0x23] = 0;
              piVar4[0x1b] = piVar3[0x1c];
              piVar4[0x20] = piVar14[0x26];
              piVar4[0x21] = piVar14[0x27];
            }
            else {
              iVar6 = local_6c + -1;
              if (-1 < iVar6) {
                local_80 = (int *)(*(int *)(*(int *)(param_1 + 0x24) + 8) + iVar6 * 4);
                do {
                  iVar7 = *local_80;
                  if (((*(uint *)(iVar7 + 0x10) ^ piVar3[4]) & 0x800000) == 0) {
                    iVar9 = *(int *)(iVar7 + 0x24) + *(int *)(iVar7 + 0x1c) +
                            (uint)CARRY4(*(uint *)(iVar7 + 0x20),*(uint *)(iVar7 + 0x18));
                    if ((piVar3[7] < iVar9) ||
                       ((piVar3[7] <= iVar9 &&
                        ((uint)piVar3[6] < *(uint *)(iVar7 + 0x20) + *(uint *)(iVar7 + 0x18)))))
                    goto LAB_005cca53;
                  }
                  iVar6 = iVar6 + -1;
                  local_80 = local_80 + -1;
                } while (-1 < iVar6);
              }
              local_3c._0_4_ = 0;
              local_3c._4_4_ = 0;
              local_34._0_4_ = 0;
              local_34._4_4_ = 0;
              local_34 = 0;
              local_3c = 0;
              if (local_68 != 0) {
                iVar6 = piVar3[0x14];
                local_3c = 0;
                if ((iVar6 != 0) &&
                   (local_3c = 0, *(int *)(iVar6 + 8) != 0 || *(int *)(iVar6 + 0xc) != 0)) {
                  iVar6 = piVar3[9];
                  uVar15 = __allmul(local_50,local_4c,2,0);
                  iVar7 = (int)((ulonglong)uVar15 >> 0x20);
                  if ((iVar7 < iVar6) || ((iVar7 <= iVar6 && ((uint)uVar15 <= (uint)piVar3[8])))) {
                    local_3c = CONCAT44(local_4c,local_50);
                  }
                  else {
                    local_3c = __alldiv(piVar3[8],iVar6,2,0);
                  }
                }
                if ((piVar4[0x14] == 0) || (*(int *)(piVar4[0x14] + 0x18) == 0)) {
                  iVar6 = 0;
                }
                else {
                  iVar6 = FUN_005f13f0(local_1c);
                }
                if (iVar6 != 0) {
                  lVar16 = ftol();
                  local_14 = lVar16;
                  if (lVar16 != 0) {
                    iVar6 = piVar4[9];
                    uVar13 = *(uint *)(piVar4[0x14] + 8);
                    lVar16 = __allrem(uVar13 + piVar4[8],
                                      *(int *)(piVar4[0x14] + 0xc) + iVar6 +
                                      (uint)CARRY4(uVar13,piVar4[8]),lVar16);
                    if (lVar16 != 0) {
                      uVar15 = __allmul(local_50,local_4c,2,0);
                      iVar7 = (int)((ulonglong)uVar15 >> 0x20);
                      if ((iVar7 < iVar6) || ((iVar7 <= iVar6 && ((uint)uVar15 <= (uint)piVar4[8])))
                         ) {
                        local_34 = CONCAT44(local_4c,local_50);
                      }
                      else {
                        local_34 = __alldiv(piVar4[8],iVar6,2,0);
                      }
                    }
                  }
                }
              }
              piVar3[0x16] = piVar3[0x16] | 3;
              *(undefined8 *)(piVar3 + 0x22) = local_3c;
              *(undefined8 *)(piVar4 + 0x20) = local_34;
            }
          }
LAB_005cca53:
          local_80 = piVar4;
          local_84 = (int *)0x0;
        }
        uVar11 = local_78;
        if ((local_8c < local_70) || ((local_8c <= local_70 && (local_90 <= local_74))))
        goto LAB_005ccb28;
        local_8c = piVar14[5];
        local_90 = piVar14[4];
        if ((local_70 < local_8c) || ((local_70 <= local_8c && (local_74 <= local_90)))) {
          local_88 = local_88 + -1;
          goto LAB_005ccb28;
        }
        local_90 = local_74;
        local_8c = local_70;
        iVar6 = (local_70 - piVar3[7]) - (uint)(local_74 < (uint)piVar3[6]);
        piVar14[0x10] = local_74 - piVar3[6];
        piVar14[0x11] = iVar6;
        piVar14[0x26] = piVar14[0x10];
        piVar14[0x27] = iVar6;
        iVar6 = *(int *)(local_64 + 0x24) + *(int *)(local_64 + 0x1c) +
                (uint)CARRY4(*(uint *)(local_64 + 0x20),*(uint *)(local_64 + 0x18));
        if ((iVar6 < local_20) ||
           ((iVar6 <= local_20 &&
            (*(uint *)(local_64 + 0x20) + *(uint *)(local_64 + 0x18) < local_24))))
        goto LAB_005ccb28;
        if (*(int *)(local_64 + 0x78) == 0 && *(int *)(local_64 + 0x7c) == 0)
        goto joined_r0x005ccde0;
LAB_005cd032:
        local_90 = local_74;
        local_8c = local_70;
        local_84 = piVar3;
        piVar14 = local_80;
      }
LAB_005cd036:
      local_80 = piVar14;
      local_6c = local_6c + 1;
      iVar6 = local_28;
      piVar14 = local_58;
    } while (local_6c < local_7c);
  }
  if ((-1 < local_8c) && ((0 < local_8c || (local_90 != 0)))) {
    iVar12 = local_88 + 1;
    iVar7 = piVar14[1];
    iVar9 = piVar14[2];
    *(undefined4 *)(local_88 * iVar7 + 200 + iVar9) = 0;
    puVar5 = (undefined4 *)(local_88 * iVar7 + iVar9);
    puVar5[4] = local_90;
    puVar5[5] = local_8c;
    puVar5[8] = 0;
    puVar5[0x1e] = 0;
    iVar9 = ((uint)(local_78 == 0) << 1 | local_78 & 1) << 2;
    puVar5[10] = 1000;
    puVar5[0x20] = 1000;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[0x32] = iVar9;
    local_88 = local_88 + 2;
    iVar12 = iVar12 * piVar14[1];
    iVar7 = piVar14[2];
    *(undefined4 *)(iVar12 + 0x10 + iVar7) = 0xffffffff;
    puVar5 = (undefined4 *)(iVar12 + iVar7);
    puVar5[5] = 0x3fffffff;
    puVar5[8] = 0;
    puVar5[0x1e] = 0;
    puVar5[10] = 1000;
    puVar5[0x20] = 1000;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[0x32] = iVar9;
  }
  _SfList_ArrayForceItemCount_12(piVar14,local_88,0);
  if (((-1 < local_8c) &&
      (((0 < local_8c || (local_90 != 0)) &&
       (local_2c = local_90, iVar6 = local_8c, 0x1ffffffe < local_8c)))) &&
     ((0x1fffffff < local_8c || (local_90 == 0xffffffff)))) {
    iVar6 = 0;
    local_2c = 0;
    if (0 < local_7c) {
      local_68 = local_7c;
      piVar14 = *(int **)(*(int *)(param_1 + 0x24) + 8);
      do {
        iVar7 = *piVar14;
        uVar13 = *(uint *)(iVar7 + 0x20);
        if ((uVar13 != 0xffffffff) || (*(int *)(iVar7 + 0x24) != 0x1fffffff)) {
          uVar11 = *(uint *)(iVar7 + 0x18) + uVar13;
          iVar7 = *(int *)(iVar7 + 0x1c) + *(int *)(iVar7 + 0x24) +
                  (uint)CARRY4(*(uint *)(iVar7 + 0x18),uVar13);
          if ((iVar6 <= iVar7) && ((iVar6 < iVar7 || (local_2c <= uVar11)))) {
            iVar6 = iVar7;
            local_2c = uVar11;
          }
        }
        piVar14 = piVar14 + 1;
        local_68 = local_68 + -1;
      } while (local_68 != 0);
    }
  }
  iVar7 = 0;
  *(uint *)(param_1 + 0x30) = local_2c;
  *(int *)(param_1 + 0x34) = iVar6;
  if (0 < local_7c) {
    do {
      iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0x24) + 8) + iVar7 * 4);
      *(uint *)(iVar6 + 0x58) = *(uint *)(iVar6 + 0x58) & 0xfffffe9f;
      *(undefined4 *)(*(int *)(iVar6 + 0x218) + 0xa8) = 0;
      if ((local_18 != 0) && (*(int *)(iVar6 + 0xf4) == 0)) {
        local_48 = FUN_0043d0c0(iVar6);
        if (local_48 < 0) {
          local_48 = 0;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < local_7c);
  }
  FUN_005b84d0(local_c,1);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffdfffff;
  return local_48;
}


