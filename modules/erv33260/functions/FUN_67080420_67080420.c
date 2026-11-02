/* Module: erv33260.dll
   Function: FUN_67080420
   Address: 67080420
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_67080420(int *param_1,int *param_2,int param_3,int param_4,int param_5,int *param_6,
                 int *param_7,uint param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  byte bVar15;
  byte bVar16;
  uint uVar17;
  int iVar18;
  byte bVar19;
  int iVar20;
  uint uVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  undefined4 *puVar30;
  bool bVar31;
  bool bVar32;
  uint local_4c;
  uint local_48;
  int local_30;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_10;
  
  iVar1 = *param_1;
  uVar11 = param_1[2];
  uVar12 = param_1[3];
  iVar18 = param_1[1];
  uVar2 = param_2[2];
  uVar26 = param_2[3];
  bVar31 = (char)param_5 == '\x01';
  bVar32 = param_8 == 0;
  bVar15 = 1 - bVar32;
  bVar19 = 0;
  uVar5 = (uVar11 >> (bVar15 & 0x1f)) - 1;
  uVar6 = (uVar12 >> (bVar15 & 0x1f)) - 1;
  for (uVar7 = uVar11; uVar7 != 0; uVar7 = uVar7 >> 1) {
    bVar19 = bVar19 + 1;
  }
  if (uVar11 == 1 << (bVar19 - 1 & 0x1f)) {
    bVar19 = bVar19 - 1;
  }
  iVar8 = 1 << (bVar19 & 0x1f);
  iVar9 = iVar8 * 0x40 + (iVar8 * 0x40 >> 0x1f & 0xfU);
  iVar10 = iVar9 >> 4;
  bVar4 = 0;
  for (uVar7 = uVar12; uVar7 != 0; uVar7 = uVar7 >> 1) {
    bVar4 = bVar4 + 1;
  }
  if (uVar12 == 1 << (bVar4 - 1 & 0x1f)) {
    bVar4 = bVar4 - 1;
  }
  iVar3 = *param_7;
  if (iVar3 == 0) {
    param_5 = (uint)*(byte *)(param_8 + 4 + (int)param_7) << 0x18;
  }
  else if (iVar3 == 1) {
    param_5 = (uint)(byte)((-(param_8 != 0) & 0x70U) + 0x10) << 0x18;
  }
  else if (iVar3 == 2) {
    param_5 = -0x80000000;
  }
  iVar3 = *param_6;
  iVar25 = (param_6[1] + (uVar11 - uVar2) * 2 << (bVar19 + 4 & 0x1f)) +
           (uVar2 - iVar8) * iVar3 * 0x10;
  if (iVar25 < 0) {
    uVar11 = (int)(iVar25 - (uVar2 >> 1)) / (int)uVar2;
  }
  else {
    uVar11 = ((uVar2 >> 1) + iVar25) / uVar2;
  }
  iVar25 = param_6[2];
  iVar20 = ((param_6[3] + (uVar12 - uVar26) * 2) * 0x10 + iVar25 * -0x10 << (bVar4 & 0x1f)) +
           uVar26 * iVar25 * 0x10;
  if (iVar20 < 0) {
    uVar12 = (int)(iVar20 - (uVar26 >> 1)) / (int)uVar26;
  }
  else {
    uVar12 = ((uVar26 >> 1) + iVar20) / uVar26;
  }
  iVar20 = uVar12 + iVar25 * -0x10;
  iVar25 = (((1 << (bVar4 & 0x1f)) << bVar32) + -1) * iVar25 * 0x10 + iVar20 * -2 + uVar12;
  param_6 = (int *)*param_2;
  uVar26 = uVar26 >> (bVar15 & 0x1f);
  if (uVar26 != 0) {
    local_30 = 0;
    uVar12 = uVar2 >> (bVar15 & 0x1f);
    local_4c = uVar26;
    do {
      iVar25 = iVar25 + iVar20 * 2;
      iVar13 = ((iVar25 >> (bVar32 + bVar4 & 0x1f)) << (bVar32 + bVar19 & 0x1f)) + local_30 +
               iVar10 / 2;
      uVar29 = iVar13 >> (bVar19 + 6 & 0x1f);
      uVar7 = iVar13 >> (bVar19 + 2 & 0x1f) & 0xf;
      iVar13 = iVar18 * uVar29 + iVar1;
      uVar21 = 0;
      local_48 = 0;
      if (uVar12 != 0) {
        iVar28 = (iVar3 * 0x10 << (bVar32 + bVar19 & 0x1f)) + (iVar9 >> 5) + iVar3 * -0x10 + uVar11;
        do {
          uVar21 = iVar28 >> (bVar19 + 6 & 0x1f);
          uVar27 = iVar28 >> (bVar19 + 2 & 0x1f) & 0xf;
          if ((int)uVar21 < 0) {
LAB_6708071b:
            bVar16 = param_5._3_1_;
            if (*param_7 == 3) {
              param_8 = ((int)uVar21 < 0) - 1 & uVar21;
              if ((int)uVar5 <= (int)param_8) {
                param_8 = uVar5;
              }
              uVar17 = ((int)uVar29 < 0) - 1 & uVar29;
              if ((int)uVar6 <= (int)uVar17) {
                uVar17 = uVar6;
              }
              bVar16 = *(byte *)(uVar17 * iVar18 + param_8 + iVar1);
            }
LAB_6708075e:
            local_20 = (uint)bVar16;
            uVar17 = uVar21 + 1;
            if ((((int)uVar17 < 0) || ((int)uVar29 < 0)) ||
               (((int)uVar5 < (int)uVar17 || ((int)uVar6 < (int)uVar29)))) {
              bVar16 = param_5._3_1_;
              if (*param_7 == 3) {
                uVar24 = uVar5;
                if ((int)(uVar17 & ((int)uVar17 < 0) - 1) < (int)uVar5) {
                  uVar24 = ((int)(uVar21 + 1) < 0) - 1 & uVar21 + 1;
                }
                uVar17 = ((int)uVar29 < 0) - 1 & uVar29;
                if ((int)uVar6 <= (int)uVar17) {
                  uVar17 = uVar6;
                }
                bVar16 = *(byte *)(uVar17 * iVar18 + uVar24 + iVar1);
              }
            }
            else {
              bVar16 = *(byte *)(iVar13 + 1 + uVar21);
            }
            local_1c = (uint)bVar16;
            if (((((int)uVar21 < 0) || ((int)(uVar29 + 1) < 0)) || ((int)uVar5 < (int)uVar21)) ||
               ((int)uVar6 < (int)(uVar29 + 1))) {
              bVar16 = param_5._3_1_;
              if (*param_7 == 3) {
                param_8 = ((int)uVar21 < 0) - 1 & uVar21;
                if ((int)uVar5 <= (int)param_8) {
                  param_8 = uVar5;
                }
                uVar17 = uVar29 + 1;
                uVar24 = uVar6;
                if ((int)(((int)uVar17 < 0) - 1 & uVar17) < (int)uVar6) {
                  uVar24 = uVar17 & ((int)uVar17 < 0) - 1;
                }
                bVar16 = *(byte *)(uVar24 * iVar18 + param_8 + iVar1);
              }
            }
            else {
              bVar16 = *(byte *)(iVar18 + iVar13 + uVar21);
            }
            local_10 = (uint)bVar16;
            uVar17 = uVar21 + 1;
            if ((((int)uVar17 < 0) || ((int)(uVar29 + 1) < 0)) ||
               (((int)uVar5 < (int)uVar17 || ((int)uVar6 < (int)(uVar29 + 1))))) {
              if (*param_7 == 3) {
                uVar21 = uVar5;
                if ((int)(((int)uVar17 < 0) - 1 & uVar17) < (int)uVar5) {
                  uVar21 = ((int)uVar17 < 0) - 1 & uVar17;
                }
                uVar17 = uVar29 + 1;
                uVar24 = uVar6;
                if ((int)(((int)uVar17 < 0) - 1 & uVar17) < (int)uVar6) {
                  uVar24 = uVar17 & ((int)uVar17 < 0) - 1;
                }
                local_24 = (uint)*(byte *)(uVar24 * iVar18 + uVar21 + iVar1);
              }
              else {
                local_24 = (uint)param_5._3_1_;
              }
            }
            else {
              local_24 = (uint)*(byte *)(iVar18 + iVar13 + 1 + uVar21);
            }
          }
          else {
            if ((((int)uVar29 < 0) || ((int)uVar5 < (int)(uVar21 + 1))) ||
               ((int)uVar6 < (int)(uVar29 + 1))) {
              if ((((int)uVar21 < 0) || ((int)uVar29 < 0)) ||
                 (((int)uVar5 < (int)uVar21 || ((int)uVar6 < (int)uVar29)))) goto LAB_6708071b;
              bVar16 = *(byte *)(iVar13 + uVar21);
              goto LAB_6708075e;
            }
            local_20 = (uint)*(byte *)(iVar13 + uVar21);
            local_1c = (uint)*(byte *)(iVar13 + 1 + uVar21);
            local_10 = (uint)*(byte *)(uVar21 + iVar13 + iVar18);
            local_24 = (uint)*(byte *)(uVar21 + 1 + iVar13 + iVar18);
          }
          iVar28 = iVar28 + (iVar8 * 0x20 + iVar3 * -0x10 + uVar11) * 2;
          *(char *)((int)param_6 + local_48) =
               (char)((local_10 * (0x10 - uVar27) + uVar27 * local_24) * uVar7 + 0x7f +
                      (uint)bVar31 +
                      (local_20 * (0x10 - uVar27) + uVar27 * local_1c) * (0x10 - uVar7) >> 8);
          uVar21 = local_48 + 1;
          local_48 = uVar21;
        } while (uVar21 < uVar12);
      }
      if (param_3 != 0) {
        if (*param_7 == 3) {
          param_5 = (uint)*(byte *)((int)param_6 + (uVar21 - 1)) << 0x18;
        }
        if (uVar21 < param_3 + uVar12) {
          uVar29 = (param_3 + uVar12) - uVar21;
          puVar30 = (undefined4 *)((int)param_6 + uVar21);
          for (uVar7 = uVar29 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar30 = CONCAT22(CONCAT11(param_5._3_1_,param_5._3_1_),
                                CONCAT11(param_5._3_1_,param_5._3_1_));
            puVar30 = puVar30 + 1;
          }
          for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
            *(byte *)puVar30 = param_5._3_1_;
            puVar30 = (undefined4 *)((int)puVar30 + 1);
          }
        }
      }
      local_30 = local_30 + iVar10 * 0x10;
      param_6 = (int *)((int)param_6 + param_2[1]);
      local_4c = local_4c - 1;
    } while (local_4c != 0);
  }
  if (param_4 != 0) {
    iVar1 = param_2[1];
    puVar22 = (undefined1 *)(uVar26 * iVar1 + *param_2);
    if (uVar26 < param_4 + uVar26) {
      iVar18 = param_3 + (uVar2 >> (bVar15 & 0x1f));
      param_8 = (param_4 + uVar26) - uVar26;
      puVar23 = puVar22;
      do {
        if (iVar18 != 0) {
          puVar14 = puVar23;
          iVar8 = iVar18;
          do {
            if (*param_7 == 3) {
              param_5 = (uint)(byte)puVar14[(int)(puVar22 + (-(int)puVar23 - iVar1))] << 0x18;
            }
            *puVar14 = param_5._3_1_;
            puVar14 = puVar14 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        puVar23 = puVar23 + param_2[1];
        param_8 = param_8 - 1;
      } while (param_8 != 0);
    }
  }
  return;
}


