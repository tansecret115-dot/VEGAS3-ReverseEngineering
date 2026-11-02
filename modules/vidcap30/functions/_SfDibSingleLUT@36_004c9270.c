/* Module: vidcap30.exe
   Function: _SfDibSingleLUT@36
   Address: 004c9270
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int _SfDibSingleLUT_36(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
                      int param_7,int param_8,int param_9)

{
  byte *pbVar1;
  float *pfVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  
                    /* 0xc9270  342  _SfDibSingleLUT@36 */
  iVar5 = _SfDibPrepareSet_32(&param_2,&param_1,&param_4,param_1,param_2,param_3,param_4,param_5);
  uVar4 = param_6;
  if (-1 < iVar5) {
    if (param_9 == 0) {
      param_9 = 0;
      iVar5 = param_2;
      if (0 < param_1) {
        do {
          if (param_5 == 4) {
            iVar8 = 0;
            if (0 < iVar5) {
              do {
                pbVar1 = (byte *)(param_4 + iVar8 * 4);
                *pbVar1 = *(byte *)(*pbVar1 + uVar4);
                pbVar1[1] = *(byte *)(pbVar1[1] + uVar4);
                pbVar1[2] = *(byte *)(pbVar1[2] + uVar4);
                if (param_8 != 0) {
                  pbVar1[3] = *(byte *)(pbVar1[3] + uVar4);
                }
                iVar8 = iVar8 + 1;
                iVar5 = param_2;
              } while (iVar8 < param_2);
            }
          }
          else if (param_7 == 0) {
            iVar8 = 0;
            if (0 < iVar5) {
              iVar9 = 0;
              do {
                pfVar2 = (float *)(iVar9 + param_4);
                iVar5 = ftol();
                param_6 = (uint)*(ushort *)(uVar4 + iVar5 * -2);
                *pfVar2 = (float)param_6 * _DAT_0059a210;
                iVar5 = ftol();
                param_6 = (uint)*(ushort *)(uVar4 + iVar5 * -2);
                pfVar2[1] = (float)param_6 * _DAT_0059a210;
                iVar5 = ftol();
                param_6 = (uint)*(ushort *)(uVar4 + iVar5 * -2);
                pfVar2[2] = (float)param_6 * _DAT_0059a210;
                if (param_8 != 0) {
                  iVar5 = ftol();
                  param_6 = (uint)*(ushort *)(uVar4 + iVar5 * -2);
                  pfVar2[3] = (float)param_6 * _DAT_0059a210;
                }
                iVar8 = iVar8 + 1;
                iVar9 = iVar9 + 0x10;
                iVar5 = param_2;
              } while (iVar8 < param_2);
            }
          }
          else {
            iVar8 = 0;
            if (0 < iVar5) {
              iVar9 = 0;
              do {
                pfVar2 = (float *)(iVar9 + param_4);
                iVar5 = ftol();
                param_6 = (uint)*(byte *)(uVar4 - iVar5);
                *pfVar2 = (float)param_6 * _DAT_0059a218;
                iVar5 = ftol();
                param_6 = (uint)*(byte *)(uVar4 - iVar5);
                pfVar2[1] = (float)param_6 * _DAT_0059a218;
                iVar5 = ftol();
                param_6 = (uint)*(byte *)(uVar4 - iVar5);
                pfVar2[2] = (float)param_6 * _DAT_0059a218;
                if (param_8 != 0) {
                  iVar5 = ftol();
                  param_6 = (uint)*(byte *)(uVar4 - iVar5);
                  pfVar2[3] = (float)param_6 * _DAT_0059a218;
                }
                iVar8 = iVar8 + 1;
                iVar9 = iVar9 + 0x10;
                iVar5 = param_2;
              } while (iVar8 < param_2);
            }
          }
          param_4 = param_4 + param_3;
          param_9 = param_9 + 1;
        } while (param_9 < param_1);
      }
    }
    else {
      param_9 = 0;
      iVar5 = param_2;
      if (0 < param_1) {
        do {
          if (param_5 == 4) {
            iVar8 = 0;
            if (0 < iVar5) {
              do {
                pbVar1 = (byte *)(param_4 + iVar8 * 4);
                if (param_8 != 0) {
                  pbVar1[3] = *(byte *)(pbVar1[3] + uVar4);
                }
                bVar6 = pbVar1[3];
                bVar7 = *(byte *)(*pbVar1 + uVar4);
                if (bVar6 <= *(byte *)(*pbVar1 + uVar4)) {
                  bVar7 = bVar6;
                }
                *pbVar1 = bVar7;
                bVar7 = *(byte *)(pbVar1[1] + uVar4);
                if (bVar6 <= *(byte *)(pbVar1[1] + uVar4)) {
                  bVar7 = bVar6;
                }
                pbVar1[1] = bVar7;
                if (*(byte *)(pbVar1[2] + uVar4) < bVar6) {
                  bVar6 = *(byte *)(pbVar1[2] + uVar4);
                }
                pbVar1[2] = bVar6;
                iVar8 = iVar8 + 1;
                iVar5 = param_2;
              } while (iVar8 < param_2);
            }
          }
          else if (param_7 == 0) {
            iVar8 = 0;
            if (0 < iVar5) {
              iVar9 = 0;
              do {
                pfVar2 = (float *)(iVar9 + param_4);
                if (param_8 != 0) {
                  iVar5 = ftol();
                  param_6 = (uint)*(ushort *)(uVar4 + iVar5 * -2);
                  pfVar2[3] = (float)param_6 * _DAT_0059a210;
                }
                iVar5 = ftol();
                param_6 = (uint)*(ushort *)(uVar4 + iVar5 * -2);
                fVar3 = (float)param_6 * _DAT_0059a210;
                if (pfVar2[3] <= fVar3) {
                  fVar3 = pfVar2[3];
                }
                *pfVar2 = fVar3;
                iVar5 = ftol();
                param_6 = (uint)*(ushort *)(uVar4 + iVar5 * -2);
                fVar3 = (float)param_6 * _DAT_0059a210;
                if (pfVar2[3] <= fVar3) {
                  fVar3 = pfVar2[3];
                }
                pfVar2[1] = fVar3;
                iVar5 = ftol();
                param_6 = (uint)*(ushort *)(uVar4 + iVar5 * -2);
                fVar3 = (float)param_6 * _DAT_0059a210;
                if (pfVar2[3] <= fVar3) {
                  fVar3 = pfVar2[3];
                }
                pfVar2[2] = fVar3;
                iVar8 = iVar8 + 1;
                iVar9 = iVar9 + 0x10;
                iVar5 = param_2;
              } while (iVar8 < param_2);
            }
          }
          else {
            iVar8 = 0;
            if (0 < iVar5) {
              iVar9 = 0;
              do {
                pfVar2 = (float *)(iVar9 + param_4);
                if (param_8 != 0) {
                  iVar5 = ftol();
                  param_6 = (uint)*(byte *)(uVar4 - iVar5);
                  pfVar2[3] = (float)param_6 * _DAT_0059a218;
                }
                iVar5 = ftol();
                param_6 = (uint)*(byte *)(uVar4 - iVar5);
                fVar3 = (float)param_6 * _DAT_0059a218;
                if (pfVar2[3] <= fVar3) {
                  fVar3 = pfVar2[3];
                }
                *pfVar2 = fVar3;
                iVar5 = ftol();
                param_6 = (uint)*(byte *)(uVar4 - iVar5);
                fVar3 = (float)param_6 * _DAT_0059a218;
                if (pfVar2[3] <= fVar3) {
                  fVar3 = pfVar2[3];
                }
                pfVar2[1] = fVar3;
                iVar5 = ftol();
                param_6 = (uint)*(byte *)(uVar4 - iVar5);
                fVar3 = (float)param_6 * _DAT_0059a218;
                if (pfVar2[3] <= fVar3) {
                  fVar3 = pfVar2[3];
                }
                pfVar2[2] = fVar3;
                iVar8 = iVar8 + 1;
                iVar9 = iVar9 + 0x10;
                iVar5 = param_2;
              } while (iVar8 < param_2);
            }
          }
          param_4 = param_4 + param_3;
          param_9 = param_9 + 1;
        } while (param_9 < param_1);
        return 0;
      }
    }
    iVar5 = 0;
  }
  return iVar5;
}


