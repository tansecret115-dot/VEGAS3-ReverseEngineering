/* Module: sftrans1.dll
   Function: FUN_004cf0a0
   Address: 004cf0a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004cf0a0(int param_1,int param_2,int param_3,int param_4,int param_5,double *param_6)

{
  uint uVar1;
  double *pdVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  byte *pbVar6;
  int local_20 [2];
  undefined1 local_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  byte bStack_15;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar4 = param_5;
  iVar3 = FUN_004cd9a0(&param_2,local_20,&param_4,param_1,param_2,param_3,param_4,param_5);
  pdVar2 = param_6;
  if (-1 < iVar3) {
    if (iVar4 == 4) {
      uStack_16 = ftol();
      uStack_17 = ftol();
      local_18 = ftol();
      if (_DAT_00555910 <= pdVar2[3] * _DAT_00557830) {
        bStack_15 = ftol();
      }
      else {
        bStack_15 = ftol();
      }
    }
    else {
      if (_DAT_00555910 <= param_6[2]) {
        if (param_6[2] <= _DAT_00555908) {
          local_8 = (float)param_6[2];
        }
        else {
          local_8 = (float)_DAT_00555908;
        }
      }
      else {
        local_8 = (float)_DAT_00555910;
      }
      if (_DAT_00555910 <= param_6[1]) {
        if (param_6[1] <= _DAT_00555908) {
          local_c = (float)param_6[1];
        }
        else {
          local_c = (float)_DAT_00555908;
        }
      }
      else {
        local_c = (float)_DAT_00555910;
      }
      if (_DAT_00555910 <= *param_6) {
        if (*param_6 <= _DAT_00555908) {
          local_10 = (float)*param_6;
        }
        else {
          local_10 = (float)_DAT_00555908;
        }
      }
      else {
        local_10 = (float)_DAT_00555910;
      }
      if (_DAT_00555910 <= param_6[3]) {
        if (param_6[3] <= _DAT_00555908) {
          local_4 = (float)param_6[3];
        }
        else {
          local_4 = (float)_DAT_00555908;
        }
      }
      else {
        local_4 = (float)_DAT_00555910;
      }
    }
    param_1 = 0;
    if (0 < local_20[0]) {
      do {
        if (iVar4 == 4) {
          param_6 = (double *)0x0;
          if (0 < param_2) {
            uVar1 = (uint)bStack_15;
            pbVar6 = (byte *)(param_4 + 2);
            do {
              iVar4 = ((CONCAT12(uStack_16,CONCAT11(uStack_17,local_18)) & 0xff) - (uint)pbVar6[-2])
                      * uVar1;
              pbVar6[-2] = (char)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + pbVar6[-2];
              iVar4 = ((CONCAT12(bStack_15,CONCAT11(uStack_16,uStack_17)) & 0xff) - (uint)pbVar6[-1]
                      ) * uVar1;
              pbVar6[-1] = (char)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + pbVar6[-1];
              iVar4 = ((CONCAT11(bStack_15,uStack_16) & 0xff) - (uint)*pbVar6) * uVar1;
              *pbVar6 = (char)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + *pbVar6;
              param_6 = (double *)((int)param_6 + 1);
              pbVar6 = pbVar6 + 4;
              iVar4 = param_5;
            } while ((int)param_6 < param_2);
          }
        }
        else {
          iVar3 = 0;
          if (0 < param_2) {
            pfVar5 = (float *)(param_4 + 8);
            do {
              iVar3 = iVar3 + 1;
              pfVar5[-2] = (local_10 - pfVar5[-2]) * local_4 + pfVar5[-2];
              pfVar5[-1] = (local_c - pfVar5[-1]) * local_4 + pfVar5[-1];
              *pfVar5 = (local_8 - *pfVar5) * local_4 + *pfVar5;
              pfVar5 = pfVar5 + 4;
            } while (iVar3 < param_2);
          }
        }
        param_4 = param_4 + param_3;
        param_1 = param_1 + 1;
      } while (param_1 < local_20[0]);
    }
    iVar3 = 0;
  }
  return iVar3;
}


