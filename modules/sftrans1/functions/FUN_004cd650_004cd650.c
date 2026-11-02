/* Module: sftrans1.dll
   Function: FUN_004cd650
   Address: 004cd650
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004cd650(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,float *param_6,
                int param_7)

{
  float fVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  float *pfVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  iVar11 = param_7;
  iVar10 = param_3;
  iVar5 = FUN_004cd9a0(&param_2,&param_1,&param_4,param_1,param_2,param_3,param_4,param_7);
  if (-1 < iVar5) {
    if ((param_6 == (float *)0x0) || (param_6[1] + param_6[2] + *param_6 <= _DAT_00557840)) {
      iVar5 = 0;
      if (0 < param_1) {
        do {
          if (iVar11 == 4) {
            iVar12 = 0;
            if (0 < param_2) {
              pbVar7 = (byte *)(param_4 + 3);
              do {
                bVar2 = pbVar7[-3];
                if (*pbVar7 <= pbVar7[-3]) {
                  bVar2 = *pbVar7;
                }
                pbVar7[-3] = bVar2;
                bVar2 = pbVar7[-2];
                if (*pbVar7 <= pbVar7[-2]) {
                  bVar2 = *pbVar7;
                }
                pbVar7[-2] = bVar2;
                bVar2 = pbVar7[-1];
                if (*pbVar7 <= pbVar7[-1]) {
                  bVar2 = *pbVar7;
                }
                pbVar7[-1] = bVar2;
                iVar12 = iVar12 + 1;
                pbVar7 = pbVar7 + 4;
              } while (iVar12 < param_2);
            }
          }
          else {
            iVar12 = 0;
            if (0 < param_2) {
              pfVar8 = (float *)(param_4 + 0xc);
              do {
                if (*pfVar8 <= pfVar8[-3]) {
                  fVar1 = *pfVar8;
                }
                else {
                  fVar1 = pfVar8[-3];
                }
                pfVar8[-3] = fVar1;
                if (*pfVar8 <= pfVar8[-2]) {
                  fVar1 = *pfVar8;
                }
                else {
                  fVar1 = pfVar8[-2];
                }
                pfVar8[-2] = fVar1;
                if (*pfVar8 <= pfVar8[-1]) {
                  fVar1 = *pfVar8;
                }
                else {
                  fVar1 = pfVar8[-1];
                }
                pfVar8[-1] = fVar1;
                iVar12 = iVar12 + 1;
                pfVar8 = pfVar8 + 4;
              } while (iVar12 < param_2);
            }
          }
          param_4 = param_4 + iVar10;
          iVar5 = iVar5 + 1;
        } while (iVar5 < param_1);
      }
    }
    else {
      bVar2 = ftol();
      uVar3 = ftol();
      uVar4 = ftol();
      local_18 = 0;
      if (0 < param_1) {
        do {
          if ((iVar11 == 4) && (param_6 = (float *)0x0, 0 < param_2)) {
            uVar9 = CONCAT12(bVar2,CONCAT11(uVar3,uVar4)) & 0xff;
            uVar13 = CONCAT11(bVar2,uVar3) & 0xff;
            pbVar7 = (byte *)(param_4 + 3);
            do {
              local_14 = (uint)*pbVar7;
              uVar6 = (((int)(uVar9 * local_14) >> 8) + (uint)pbVar7[-3]) - uVar9;
              if ((int)uVar6 < 0) {
                uVar6 = 0;
              }
              else if ((int)local_14 < (int)uVar6) {
                uVar6 = local_14;
              }
              pbVar7[-3] = (byte)uVar6;
              local_10 = (uint)*pbVar7;
              uVar6 = (((int)(uVar13 * local_10) >> 8) - uVar13) + (uint)pbVar7[-2];
              if ((int)uVar6 < 0) {
                uVar6 = 0;
              }
              else if ((int)local_10 < (int)uVar6) {
                uVar6 = local_10;
              }
              pbVar7[-2] = (byte)uVar6;
              local_c = (uint)*pbVar7;
              uVar6 = (((int)(bVar2 * local_c) >> 8) + (uint)pbVar7[-1]) - (uint)bVar2;
              if ((int)uVar6 < 0) {
                uVar6 = 0;
              }
              else if ((int)local_c < (int)uVar6) {
                uVar6 = local_c;
              }
              pbVar7[-1] = (byte)uVar6;
              param_6 = (float *)((int)param_6 + 1);
              pbVar7 = pbVar7 + 4;
              iVar10 = param_3;
              iVar11 = param_7;
            } while ((int)param_6 < param_2);
          }
          param_4 = param_4 + iVar10;
          local_18 = local_18 + 1;
        } while (local_18 < param_1);
        return 0;
      }
    }
    iVar5 = 0;
  }
  return iVar5;
}


