/* Module: vidpcore.dll
   Function: FUN_5dec1fa0
   Address: 5dec1fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5dec1fa0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  byte *pbVar1;
  float *pfVar2;
  float fVar3;
  byte bVar4;
  int iVar5;
  byte bVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  undefined1 local_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  
  iVar5 = FUN_5debbf10(&param_2,&param_1,&param_4,param_1,param_2,param_3,param_4,param_5);
  if (-1 < iVar5) {
    iVar9 = 0;
    iVar5 = param_2;
    if (0 < param_1) {
      do {
        if (param_5 == 4) {
          if (param_6 == 0) {
            iVar8 = 0;
            if (0 < iVar5) {
              pbVar10 = (byte *)(param_4 + 1);
              do {
                bVar4 = (byte)((ulonglong)
                               ((longlong)
                                (int)((uint)pbVar10[1] + (uint)*pbVar10 + (uint)pbVar10[-1]) *
                               0x55555556) >> 0x20);
                if (pbVar10[2] <= bVar4) {
                  bVar4 = pbVar10[2];
                }
                pbVar10[-1] = bVar4;
                *pbVar10 = bVar4;
                pbVar10[1] = bVar4;
                pbVar10 = pbVar10 + 4;
                iVar8 = iVar8 + 1;
                iVar5 = param_2;
              } while (iVar8 < param_2);
            }
          }
          else {
            iVar8 = 0;
            if (0 < iVar5) {
              pbVar10 = (byte *)(param_4 + 3);
              do {
                pbVar1 = pbVar10 + -3;
                FUN_5ded1830(local_40,pbVar1);
                local_38 = 0;
                local_34 = 0;
                FUN_5ded1f00(pbVar1,local_40);
                bVar4 = *pbVar10;
                bVar6 = *pbVar1;
                if (bVar4 <= *pbVar1) {
                  bVar6 = bVar4;
                }
                *pbVar1 = bVar6;
                bVar6 = pbVar10[-2];
                if (bVar4 <= pbVar10[-2]) {
                  bVar6 = bVar4;
                }
                pbVar10[-2] = bVar6;
                if (pbVar10[-1] < bVar4) {
                  bVar4 = pbVar10[-1];
                }
                pbVar10[-1] = bVar4;
                pbVar10 = pbVar10 + 4;
                iVar8 = iVar8 + 1;
                iVar5 = param_2;
              } while (iVar8 < param_2);
            }
          }
        }
        else if (param_6 == 0) {
          iVar8 = 0;
          if (0 < iVar5) {
            pfVar7 = (float *)(param_4 + 4);
            do {
              fVar3 = (pfVar7[1] + *pfVar7 + pfVar7[-1]) * _DAT_5df231d8;
              if (pfVar7[2] <= fVar3) {
                fVar3 = pfVar7[2];
              }
              pfVar7[-1] = fVar3;
              *pfVar7 = fVar3;
              pfVar7[1] = fVar3;
              pfVar7 = pfVar7 + 4;
              iVar8 = iVar8 + 1;
              iVar5 = param_2;
            } while (iVar8 < param_2);
          }
        }
        else {
          iVar8 = 0;
          if (0 < iVar5) {
            pfVar7 = (float *)(param_4 + 0xc);
            do {
              pfVar2 = pfVar7 + -3;
              FUN_5ded1aa0(local_20,pfVar2);
              local_18 = 0;
              local_14 = 0;
              FUN_5ded2140(pfVar2,local_20);
              if (*pfVar7 <= *pfVar2) {
                fVar3 = *pfVar7;
              }
              else {
                fVar3 = *pfVar2;
              }
              *pfVar2 = fVar3;
              if (*pfVar7 <= pfVar7[-2]) {
                fVar3 = *pfVar7;
              }
              else {
                fVar3 = pfVar7[-2];
              }
              pfVar7[-2] = fVar3;
              if (*pfVar7 <= pfVar7[-1]) {
                fVar3 = *pfVar7;
              }
              else {
                fVar3 = pfVar7[-1];
              }
              pfVar7[-1] = fVar3;
              pfVar7 = pfVar7 + 4;
              iVar8 = iVar8 + 1;
              iVar5 = param_2;
            } while (iVar8 < param_2);
          }
        }
        param_4 = param_4 + param_3;
        iVar9 = iVar9 + 1;
      } while (iVar9 < param_1);
    }
    iVar5 = 0;
  }
  return iVar5;
}


