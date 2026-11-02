/* Module: vidpcore.dll
   Function: FUN_5de943b0
   Address: 5de943b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5de943b0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                int param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  uint uVar11;
  byte *pbVar12;
  float10 fVar13;
  double dVar14;
  int local_78;
  int local_74;
  float local_70;
  float local_6c;
  int local_68;
  float local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  float local_50;
  float local_4c;
  char local_48;
  char cStack_47;
  char cStack_46;
  byte bStack_45;
  double local_40;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28 [4];
  float local_18 [5];
  
  iVar4 = FUN_5debbfb0(&local_78,&local_74,&local_54,&local_60,param_1,param_2,param_3,param_4,
                       param_5,param_6,param_7,param_8,param_9);
  if (-1 < iVar4) {
    local_68 = local_74;
    if (local_78 <= local_74) {
      local_68 = local_78;
    }
    local_64 = -1.0;
    local_50 = (float)local_78 * _DAT_5df2bbe0;
    local_4c = (float)local_74 * _DAT_5df2bbe0;
    if (-1 < param_3) {
      local_64 = 1.0;
    }
    local_58 = 0;
    iVar4 = local_78;
    iVar7 = local_74;
    if (0 < local_74) {
      do {
        if ((param_9 == 4) && (local_5c = 0, 0 < iVar4)) {
          pbVar12 = (byte *)(local_54 + 2);
          do {
            local_38 = (float)pbVar12[-2] * (float)_DAT_5df231d0;
            local_6c = (float)(uint)pbVar12[1];
            local_34 = (float)pbVar12[-1] * (float)_DAT_5df231d0;
            local_30 = (float)*pbVar12 * (float)_DAT_5df231d0;
            local_2c = (float)(int)local_6c * (float)_DAT_5df231d0;
            if (_DAT_5df2daa4 <= local_38) {
              fVar13 = (float10)_CIpow();
              fVar13 = fVar13 * (float10)_DAT_5df2da98 - (float10)_DAT_5df2da90;
            }
            else {
              fVar13 = (float10)local_38 * (float10)_DAT_5df2daa0;
            }
            local_28[0] = (float)fVar13;
            if (_DAT_5df2daa4 <= local_34) {
              fVar13 = (float10)_CIpow();
              fVar13 = fVar13 * (float10)_DAT_5df2da98 - (float10)_DAT_5df2da90;
            }
            else {
              fVar13 = (float10)local_34 * (float10)_DAT_5df2daa0;
            }
            local_28[1] = (float)fVar13;
            if (_DAT_5df2daa4 <= local_30) {
              fVar13 = (float10)_CIpow();
              fVar13 = fVar13 * (float10)_DAT_5df2da98 - (float10)_DAT_5df2da90;
            }
            else {
              fVar13 = (float10)local_30 * (float10)_DAT_5df2daa0;
            }
            pfVar5 = (float *)&DAT_5df2d7d0;
            local_28[2] = (float)fVar13;
            local_28[3] = local_2c;
            pfVar10 = local_18;
            do {
              *pfVar10 = 0.0;
              pfVar8 = local_28;
              fVar1 = *pfVar10;
              iVar4 = 3;
              do {
                fVar2 = *pfVar8;
                fVar3 = *pfVar5;
                pfVar5 = pfVar5 + 1;
                pfVar8 = pfVar8 + 1;
                iVar4 = iVar4 + -1;
                fVar1 = fVar2 * fVar3 + fVar1;
              } while (iVar4 != 0);
              *pfVar10 = fVar1;
              pfVar10 = pfVar10 + 1;
            } while ((int)pfVar5 < 0x5df2d7f4);
            local_18[3] = local_2c;
            local_48 = ftol();
            cStack_47 = ftol();
            cStack_46 = ftol();
            bStack_45 = ftol();
            local_70 = (float)local_68;
            dVar14 = modf((double)(local_18[1] * local_70 + local_50),&local_40);
            local_6c = (float)dVar14;
            uVar6 = ftol();
            modf((double)(local_18[2] * local_64 * local_70 + local_4c),&local_40);
            local_70 = (float)ftol();
            iVar4 = (int)local_70 * param_3 + local_60;
            if (-1 < (int)((local_74 - (int)local_70) - 1U | (local_78 - uVar6) - 1 | (uint)local_70
                          | uVar6)) {
              iVar7 = ftol();
              iVar9 = ((uint)pbVar12[-2] - (CONCAT12(cStack_46,CONCAT11(cStack_47,local_48)) & 0xff)
                      ) * iVar7;
              *(char *)(iVar4 + uVar6 * 4) =
                   (((char)(iVar9 / 0xff) + (char)(iVar9 >> 0x1f)) -
                   (char)((longlong)iVar9 * 0x80808081 >> 0x3f)) + local_48;
              iVar9 = ((uint)pbVar12[-1] -
                      (CONCAT12(bStack_45,CONCAT11(cStack_46,cStack_47)) & 0xff)) * iVar7;
              *(char *)(iVar4 + 1 + uVar6 * 4) =
                   (((char)(iVar9 / 0xff) + (char)(iVar9 >> 0x1f)) -
                   (char)((longlong)iVar9 * 0x80808081 >> 0x3f)) + cStack_47;
              iVar9 = ((uint)*pbVar12 - (CONCAT11(bStack_45,cStack_46) & 0xff)) * iVar7;
              *(char *)(iVar4 + 2 + uVar6 * 4) =
                   (((char)(iVar9 / 0xff) + (char)(iVar9 >> 0x1f)) -
                   (char)((longlong)iVar9 * 0x80808081 >> 0x3f)) + cStack_46;
              iVar7 = ((uint)pbVar12[1] - (uint)bStack_45) * iVar7;
              *(byte *)(iVar4 + 3 + uVar6 * 4) =
                   (((char)(iVar7 / 0xff) + (char)(iVar7 >> 0x1f)) -
                   (char)((longlong)iVar7 * 0x80808081 >> 0x3f)) + bStack_45;
            }
            uVar11 = uVar6 + 1;
            if (-1 < (int)((local_74 - (int)local_70) - 1U | (local_78 - uVar11) - 1 |
                           (uint)local_70 | uVar11)) {
              iVar7 = ftol();
              iVar9 = ((uint)pbVar12[-2] - (CONCAT12(cStack_46,CONCAT11(cStack_47,local_48)) & 0xff)
                      ) * iVar7;
              *(char *)(iVar4 + uVar11 * 4) =
                   (((char)(iVar9 / 0xff) + (char)(iVar9 >> 0x1f)) -
                   (char)((longlong)iVar9 * 0x80808081 >> 0x3f)) + local_48;
              iVar9 = ((uint)pbVar12[-1] -
                      (CONCAT12(bStack_45,CONCAT11(cStack_46,cStack_47)) & 0xff)) * iVar7;
              *(char *)(iVar4 + 1 + uVar11 * 4) =
                   (((char)(iVar9 / 0xff) + (char)(iVar9 >> 0x1f)) -
                   (char)((longlong)iVar9 * 0x80808081 >> 0x3f)) + cStack_47;
              iVar9 = ((uint)*pbVar12 - (CONCAT11(bStack_45,cStack_46) & 0xff)) * iVar7;
              *(char *)(iVar4 + 2 + uVar11 * 4) =
                   (((char)(iVar9 / 0xff) + (char)(iVar9 >> 0x1f)) -
                   (char)((longlong)iVar9 * 0x80808081 >> 0x3f)) + cStack_46;
              iVar7 = ((uint)pbVar12[1] - (uint)bStack_45) * iVar7;
              *(byte *)(iVar4 + 3 + uVar11 * 4) =
                   (((char)(iVar7 / 0xff) + (char)(iVar7 >> 0x1f)) -
                   (char)((longlong)iVar7 * 0x80808081 >> 0x3f)) + bStack_45;
            }
            local_70 = (float)((int)local_70 + 1);
            iVar4 = (int)local_70 * param_3 + local_60;
            if (-1 < (int)((local_74 - (int)local_70) - 1U | (local_78 - uVar6) - 1 | (uint)local_70
                          | uVar6)) {
              iVar7 = ftol();
              iVar9 = ((uint)pbVar12[-2] - (CONCAT12(cStack_46,CONCAT11(cStack_47,local_48)) & 0xff)
                      ) * iVar7;
              *(char *)(iVar4 + uVar6 * 4) =
                   (((char)(iVar9 / 0xff) + (char)(iVar9 >> 0x1f)) -
                   (char)((longlong)iVar9 * 0x80808081 >> 0x3f)) + local_48;
              iVar9 = ((uint)pbVar12[-1] -
                      (CONCAT12(bStack_45,CONCAT11(cStack_46,cStack_47)) & 0xff)) * iVar7;
              *(char *)(iVar4 + 1 + uVar6 * 4) =
                   (((char)(iVar9 / 0xff) + (char)(iVar9 >> 0x1f)) -
                   (char)((longlong)iVar9 * 0x80808081 >> 0x3f)) + cStack_47;
              iVar9 = ((uint)*pbVar12 - (CONCAT11(bStack_45,cStack_46) & 0xff)) * iVar7;
              *(char *)(iVar4 + 2 + uVar6 * 4) =
                   (((char)(iVar9 / 0xff) + (char)(iVar9 >> 0x1f)) -
                   (char)((longlong)iVar9 * 0x80808081 >> 0x3f)) + cStack_46;
              iVar7 = ((uint)pbVar12[1] - (uint)bStack_45) * iVar7;
              *(byte *)(iVar4 + 3 + uVar6 * 4) =
                   (((char)(iVar7 / 0xff) + (char)(iVar7 >> 0x1f)) -
                   (char)((longlong)iVar7 * 0x80808081 >> 0x3f)) + bStack_45;
            }
            if (-1 < (int)((local_74 - (int)local_70) - 1U | (local_78 - uVar11) - 1 |
                           (uint)local_70 | uVar11)) {
              iVar7 = ftol();
              iVar9 = ((uint)pbVar12[-2] - (CONCAT12(cStack_46,CONCAT11(cStack_47,local_48)) & 0xff)
                      ) * iVar7;
              *(char *)(iVar4 + uVar11 * 4) =
                   (((char)(iVar9 / 0xff) + (char)(iVar9 >> 0x1f)) -
                   (char)((longlong)iVar9 * 0x80808081 >> 0x3f)) + local_48;
              iVar9 = ((uint)pbVar12[-1] -
                      (CONCAT12(bStack_45,CONCAT11(cStack_46,cStack_47)) & 0xff)) * iVar7;
              *(char *)(iVar4 + 1 + uVar11 * 4) =
                   (((char)(iVar9 / 0xff) + (char)(iVar9 >> 0x1f)) -
                   (char)((longlong)iVar9 * 0x80808081 >> 0x3f)) + cStack_47;
              iVar9 = ((uint)*pbVar12 - (CONCAT11(bStack_45,cStack_46) & 0xff)) * iVar7;
              *(char *)(iVar4 + 2 + uVar11 * 4) =
                   (((char)(iVar9 / 0xff) + (char)(iVar9 >> 0x1f)) -
                   (char)((longlong)iVar9 * 0x80808081 >> 0x3f)) + cStack_46;
              *(byte *)(iVar4 + 3 + uVar11 * 4) =
                   (char)((int)(((uint)pbVar12[1] - (uint)bStack_45) * iVar7) / 0xff) + bStack_45;
            }
            local_5c = local_5c + 1;
            pbVar12 = pbVar12 + 4;
            iVar4 = local_78;
            iVar7 = local_74;
          } while (local_5c < local_78);
        }
        local_58 = local_58 + 1;
      } while (local_58 < iVar7);
    }
    iVar4 = 0;
  }
  return iVar4;
}


