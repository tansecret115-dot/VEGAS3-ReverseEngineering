/* Module: extmondrv.dll
   Function: FUN_004066a0
   Address: 004066a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004066a0(int *param_1,int *param_2,uint param_3,int param_4)

{
  undefined3 uVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined4 local_110;
  uint local_10c;
  uint local_108;
  uint local_100;
  int *local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  undefined4 *local_e4;
  uint local_dc;
  int local_d8 [4];
  int local_c8 [50];
  
  bVar2 = false;
  bVar3 = false;
  if (param_4 == 120000) {
    local_108 = 5;
    local_ec = 60000;
    uVar13 = 5;
  }
  else {
    if (param_4 != 0x23280) {
      return 0x80070057;
    }
    uVar13 = 6;
    bVar3 = true;
    bVar2 = true;
    local_ec = 72000;
    local_108 = 6;
  }
  if ((param_1 != (int *)0x0) && ((param_2 != (int *)0x0 || ((param_1[7] & 4U) == 0)))) {
    local_f4 = 0;
    local_f0 = 0;
    while( true ) {
      FUN_00406650(param_3,uVar13,&local_dc);
      if (param_1 == (int *)0x0) {
        uVar4 = local_110._1_1_;
        local_110 = local_110 & 0xffffffc0;
        local_110 = CONCAT22(local_110._2_2_,CONCAT11(uVar4,(byte)local_110)) | 0xf00;
        local_10c = -0x5f00c1;
      }
      else {
        param_1[10] = 0;
        if ((param_1[7] & 1U) == 0) {
          local_110 = -0x3f3fe0c0;
        }
        else {
          local_110 = param_1[5];
        }
        if ((param_1[7] & 2U) == 0) {
          local_10c = -0x5f30c1;
        }
        else {
          local_10c = param_1[6];
        }
        if ((param_1[7] & 4U) == 0) {
          bVar7 = local_110._1_1_ & 0x92 | 0x12;
        }
        else {
          bVar7 = local_110._1_1_ & 0x8f ^ (local_f4 != 0 ^ local_110._1_1_ & 0x8f) & 0xf;
        }
        local_110._0_2_ = CONCAT11(bVar7,(byte)local_110);
        uVar1 = CONCAT12(bVar2 << 5 | local_110._2_1_ & 0xdf,(undefined2)local_110);
        iVar16 = *param_1;
        if (iVar16 == 32000) {
          local_110 = CONCAT13(local_110._3_1_,uVar1) & 0xd0ffffff | 0x10000000;
          if (bVar2) {
            uVar8 = 0x4f0;
            uVar12 = 0x510;
          }
          else {
            uVar8 = 0x41d;
            uVar12 = 0x438;
          }
        }
        else if (iVar16 == 0xac44) {
          local_110 = CONCAT13(local_110._3_1_,uVar1) & 0xc8ffffff | 0x8000000;
          if (bVar2) {
            uVar8 = 0x6ce;
            uVar12 = 0x6fa;
          }
          else {
            uVar8 = 0x5ac;
            uVar12 = 0x5d1;
          }
        }
        else {
          if (iVar16 != 48000) {
            return 0x80070057;
          }
          local_110 = CONCAT13(local_110._3_1_,uVar1) & 0xc0ffffff;
          if (bVar2) {
            uVar8 = 0x768;
            uVar12 = 0x798;
          }
          else {
            uVar8 = 0x62c;
            uVar12 = 0x654;
          }
        }
        local_100 = uVar12;
        if ((uint)param_1[2] < uVar12) {
          local_100 = param_1[2];
        }
        uVar5 = uVar8;
        if ((uVar8 <= local_100) && (uVar5 = uVar12, local_100 <= uVar12)) {
          uVar5 = local_100;
        }
        local_110 = CONCAT31(local_110._1_3_,
                             (byte)local_110 ^ ((char)uVar5 - (char)uVar8 ^ (byte)local_110) & 0x3f)
        ;
      }
      iVar16 = 0;
      if (uVar13 != 0) {
        piVar10 = local_c8;
        do {
          iVar15 = piVar10[iVar16 + -4];
          iVar14 = 9;
          do {
            iVar14 = iVar14 + -1;
            puVar17 = (undefined4 *)(iVar15 + 8);
            for (iVar9 = 0x12; iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar17 = 0;
              puVar17 = puVar17 + 1;
            }
          } while (iVar14 != 0);
          if (((char)local_f0 + (char)iVar16 & 1U) == 0) {
            *(uint *)(piVar10[-1] + 4) = local_110;
            iVar15 = *piVar10;
          }
          else {
            *(uint *)(piVar10[-4] + 4) = local_110;
            iVar15 = piVar10[-3];
          }
          piVar10 = piVar10 + 9;
          *(uint *)(iVar15 + 4) = local_10c;
          iVar16 = iVar16 + 1;
          bVar2 = bVar3;
        } while (iVar16 < (int)local_108);
      }
      if (param_1 == (int *)0x0) break;
      param_1[9] = local_10c;
      param_1[8] = local_110;
      param_1[10] = local_100;
      if (bVar2) {
        piVar10 = &DAT_0044dc70;
        local_e4 = &DAT_0044dae4;
        local_f8 = &DAT_0044dc70;
      }
      else {
        local_f8 = &DAT_0044dbbc;
        local_e4 = &DAT_0044da30;
        piVar10 = &DAT_0044dbbc;
      }
      puVar6 = (undefined1 *)param_1[1];
      uVar13 = local_dc * 9;
      if ((int)local_100 < (int)(local_dc * 9)) {
        uVar13 = local_100;
      }
      if (0 < (int)local_100) {
        iVar16 = 9;
        uVar12 = local_100;
        local_10c = uVar13;
        do {
          piVar11 = piVar10;
          uVar8 = uVar13;
          if (0 < (int)uVar13) {
            iVar15 = (int)local_e4 - (int)piVar10;
            uVar12 = uVar12 - uVar13;
            do {
              piVar11 = (int *)((int)piVar10 + iVar15);
              iVar14 = *piVar10;
              piVar10 = piVar10 + 1;
              iVar14 = local_d8[*piVar11 * 9 + iVar14];
              *(undefined1 *)(iVar16 + -1 + iVar14) = puVar6[1];
              *(undefined1 *)(iVar16 + iVar14) = *puVar6;
              puVar6 = puVar6 + param_1[4];
              uVar13 = uVar13 - 1;
              piVar11 = local_f8;
              uVar8 = local_10c;
            } while (uVar13 != 0);
          }
          iVar16 = iVar16 + 2;
          uVar13 = uVar8;
          if ((int)uVar12 < (int)uVar8) {
            uVar13 = uVar12;
            local_10c = uVar12;
          }
          piVar10 = piVar11;
          bVar2 = bVar3;
        } while (0 < (int)uVar12);
      }
      param_3 = param_3 + local_ec;
      local_f4 = local_f4 + 1;
      local_f0 = local_f0 + local_108;
      uVar13 = local_108;
      param_1 = param_2;
      if (1 < local_f4) {
        return 0;
      }
    }
    return 0;
  }
  return 0x80070057;
}


