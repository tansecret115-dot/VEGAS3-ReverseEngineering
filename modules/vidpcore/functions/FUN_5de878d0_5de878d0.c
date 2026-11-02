/* Module: vidpcore.dll
   Function: FUN_5de878d0
   Address: 5de878d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5de878d0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                undefined4 *param_6)

{
  byte *pbVar1;
  float *pfVar2;
  float fVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  float *pfVar9;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  double local_48;
  double local_40;
  double local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar6 = FUN_5debbf10(&local_54,&local_4c,&local_58,param_1,param_2,param_3,param_4,param_5);
  if (-1 < iVar6) {
    local_50 = 0;
    local_28 = *param_6;
    uStack_24 = param_6[1];
    local_20 = param_6[2];
    uStack_1c = param_6[3];
    local_18 = param_6[4];
    uStack_14 = param_6[5];
    iVar6 = local_54;
    if (0 < local_4c) {
      do {
        if (param_5 == 4) {
          iVar7 = 0;
          if (0 < iVar6) {
            pbVar8 = (byte *)(local_58 + 3);
            do {
              pbVar1 = pbVar8 + -3;
              FUN_5ded1830(&local_48,pbVar1);
              local_48 = local_48 + (double)CONCAT44(uStack_24,local_28);
              if (_DAT_5df18830 < local_48) {
                local_48 = local_48 - _DAT_5df18830;
              }
              local_40 = local_40 * (double)CONCAT44(uStack_1c,local_20);
              if (_DAT_5df18838 <= local_40) {
                if (_DAT_5df18830 < local_40) {
                  local_40 = 1.0;
                }
              }
              else {
                local_40 = 0.0;
              }
              local_38 = local_38 * (double)CONCAT44(uStack_14,local_18);
              if (_DAT_5df18838 <= local_38) {
                if (_DAT_5df18830 < local_38) {
                  local_38 = 1.0;
                }
              }
              else {
                local_38 = 0.0;
              }
              FUN_5ded1f00(pbVar1,&local_48);
              bVar4 = *pbVar1;
              if (*pbVar8 <= *pbVar1) {
                bVar4 = *pbVar8;
              }
              bVar5 = pbVar8[-2];
              *pbVar1 = bVar4;
              if (*pbVar8 <= bVar5) {
                bVar5 = *pbVar8;
              }
              bVar4 = pbVar8[-1];
              pbVar8[-2] = bVar5;
              if (*pbVar8 <= bVar4) {
                bVar4 = *pbVar8;
              }
              pbVar8[-1] = bVar4;
              pbVar8 = pbVar8 + 4;
              iVar7 = iVar7 + 1;
              iVar6 = local_54;
            } while (iVar7 < local_54);
          }
        }
        else {
          iVar7 = 0;
          if (0 < iVar6) {
            pfVar9 = (float *)(local_58 + 0xc);
            do {
              pfVar2 = pfVar9 + -3;
              FUN_5ded1cd0(&local_48,pfVar2);
              local_48 = local_48 + (double)CONCAT44(uStack_24,local_28);
              if (_DAT_5df18830 < local_48) {
                local_48 = local_48 - _DAT_5df18830;
              }
              local_40 = local_40 * (double)CONCAT44(uStack_1c,local_20);
              if (_DAT_5df18838 <= local_40) {
                if (_DAT_5df18830 < local_40) {
                  local_40 = 1.0;
                }
              }
              else {
                local_40 = 0.0;
              }
              local_38 = local_38 * (double)CONCAT44(uStack_14,local_18);
              if (_DAT_5df18838 <= local_38) {
                if (_DAT_5df18830 < local_38) {
                  local_38 = 1.0;
                }
              }
              else {
                local_38 = 0.0;
              }
              FUN_5ded22b0(pfVar2,&local_48);
              if (*pfVar9 <= *pfVar2) {
                fVar3 = *pfVar9;
              }
              else {
                fVar3 = *pfVar2;
              }
              *pfVar2 = fVar3;
              if (*pfVar9 <= pfVar9[-2]) {
                fVar3 = *pfVar9;
              }
              else {
                fVar3 = pfVar9[-2];
              }
              pfVar9[-2] = fVar3;
              if (*pfVar9 <= pfVar9[-1]) {
                fVar3 = *pfVar9;
              }
              else {
                fVar3 = pfVar9[-1];
              }
              pfVar9[-1] = fVar3;
              pfVar9 = pfVar9 + 4;
              iVar7 = iVar7 + 1;
              iVar6 = local_54;
            } while (iVar7 < local_54);
          }
        }
        local_58 = local_58 + param_3;
        local_50 = local_50 + 1;
      } while (local_50 < local_4c);
    }
    iVar6 = 0;
  }
  return iVar6;
}


