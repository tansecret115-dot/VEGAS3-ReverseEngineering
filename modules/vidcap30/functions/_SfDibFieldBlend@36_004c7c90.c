/* Module: vidcap30.exe
   Function: _SfDibFieldBlend@36
   Address: 004c7c90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int _SfDibFieldBlend_36(int param_1,int param_2,int param_3,byte *param_4,undefined1 *param_5,
                       float *param_6,int param_7,float *param_8,int param_9)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  int iVar9;
  int local_1c;
  int local_18 [4];
  int local_8;
  
                    /* 0xc7c90  312  _SfDibFieldBlend@36 */
  iVar3 = param_7;
  iVar2 = _SfDibPrepareCopy_52
                    (&param_2,local_18,&param_1,&local_1c,param_1,param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,param_9);
  if (-1 < iVar2) {
    iVar2 = 0;
    if (0 < local_18[0]) {
      do {
        if (param_9 == 4) {
          iVar9 = param_1;
          if (iVar2 != 0) {
            iVar9 = param_1 - iVar3;
          }
          iVar6 = param_1;
          if (iVar2 + 1 < local_18[0] + -1) {
            iVar6 = iVar3 + param_1;
          }
          iVar3 = param_7;
          if (0 < param_2) {
            param_4 = (byte *)(iVar6 + 3);
            param_8 = (float *)(param_1 + 2);
            param_5 = (undefined1 *)(local_1c + 2);
            param_6 = (float *)(iVar9 + 1);
            local_8 = 1;
            do {
              uVar8 = local_8 - 2U & ((int)(local_8 - 2U) < 0) - 1;
              iVar3 = param_2 + -1;
              if (local_8 <= param_2 + -1) {
                iVar3 = local_8;
              }
              param_5[-2] = (char)((int)((uint)*(byte *)(iVar9 + uVar8 * 4) +
                                         ((uint)*(byte *)((int)param_6 + -1) +
                                          (uint)*(byte *)((int)param_8 + -2) * 2 + (uint)param_4[-3]
                                          + (uint)*(byte *)(param_1 + uVar8 * 4) +
                                         (uint)*(byte *)(param_1 + iVar3 * 4)) * 2 +
                                         (uint)*(byte *)(iVar9 + iVar3 * 4) +
                                         (uint)*(byte *)(iVar6 + uVar8 * 4) +
                                        (uint)*(byte *)(iVar6 + iVar3 * 4)) >> 4);
              param_5[-1] = (char)((int)((uint)*(byte *)(iVar9 + 1 + uVar8 * 4) +
                                         ((uint)*(byte *)((int)param_6 + (iVar6 - iVar9)) +
                                          (uint)*(byte *)((int)param_8 + -1) * 2 +
                                          (uint)*(byte *)(param_1 + 1 + uVar8 * 4) +
                                          (uint)*(byte *)(param_1 + 1 + iVar3 * 4) +
                                         (uint)*(byte *)param_6) * 2 +
                                         (uint)*(byte *)(iVar9 + 1 + iVar3 * 4) +
                                         (uint)*(byte *)(iVar6 + 1 + uVar8 * 4) +
                                        (uint)*(byte *)(iVar6 + 1 + iVar3 * 4)) >> 4);
              *param_5 = (char)((int)((uint)*(byte *)(iVar9 + 2 + uVar8 * 4) +
                                      ((uint)*(byte *)(param_1 + 2 + uVar8 * 4) +
                                       (uint)*(byte *)(param_1 + 2 + iVar3 * 4) +
                                       (uint)*(byte *)param_8 * 2 +
                                       (uint)*(byte *)((int)param_6 + 1) + (uint)param_4[-1]) * 2 +
                                      (uint)*(byte *)(iVar9 + 2 + iVar3 * 4) +
                                      (uint)*(byte *)(iVar6 + 2 + uVar8 * 4) +
                                     (uint)*(byte *)(iVar6 + 2 + iVar3 * 4)) >> 4);
              param_5[1] = (char)((int)((uint)*(byte *)(iVar9 + 3 + uVar8 * 4) +
                                        ((uint)*(byte *)(param_1 + 3 + uVar8 * 4) +
                                         (uint)*(byte *)((int)param_8 + 1) * 2 +
                                         (uint)*(byte *)(param_1 + 3 + iVar3 * 4) +
                                         (uint)*(byte *)((int)param_6 + 2) + (uint)*param_4) * 2 +
                                        (uint)*(byte *)(iVar9 + 3 + iVar3 * 4) +
                                        (uint)*(byte *)(iVar6 + 3 + uVar8 * 4) +
                                       (uint)*(byte *)(iVar6 + 3 + iVar3 * 4)) >> 4);
              param_8 = (float *)((int)param_8 + 4);
              param_5 = param_5 + 4;
              param_4 = param_4 + 4;
              param_6 = (float *)((int)param_6 + 4);
              bVar1 = local_8 < param_2;
              iVar3 = param_7;
              local_8 = local_8 + 1;
            } while (bVar1);
          }
        }
        else {
          iVar9 = param_1;
          if (iVar2 != 0) {
            iVar9 = param_1 - iVar3;
          }
          iVar6 = param_1;
          if (iVar2 + 1 < local_18[0] + -1) {
            iVar6 = param_1 + iVar3;
          }
          if (0 < param_2) {
            param_6 = (float *)(param_1 + 8);
            param_8 = (float *)(local_1c + 8);
            pfVar7 = (float *)(iVar6 + 0xc);
            param_5 = (undefined1 *)0x1;
            pfVar5 = (float *)(iVar9 + 4);
            do {
              iVar3 = param_2 + -1;
              if ((int)param_5 <= param_2 + -1) {
                iVar3 = (int)param_5;
              }
              iVar4 = (((int)((int)param_5 - 2U) < 0) - 1 & (int)param_5 - 2U) * 0x10;
              iVar3 = iVar3 * 0x10;
              param_8[-2] = param_6[-2] * _DAT_0059a204 +
                            (*(float *)(iVar9 + iVar4) + *(float *)(iVar9 + iVar3) +
                             *(float *)(iVar6 + iVar3) + *(float *)(iVar6 + iVar4)) * _DAT_0059a208
                            + (pfVar5[-1] + pfVar7[-3] + *(float *)(param_1 + iVar4) +
                              *(float *)(param_1 + iVar3)) * _DAT_0059a20c;
              param_8[-1] = param_6[-1] * _DAT_0059a204 +
                            (*(float *)(iVar9 + 4 + iVar4) + *(float *)(iVar9 + 4 + iVar3) +
                             *(float *)(iVar6 + 4 + iVar4) + *(float *)(iVar6 + 4 + iVar3)) *
                            _DAT_0059a208 +
                            (*(float *)((int)pfVar5 + (iVar6 - iVar9)) +
                             *(float *)(param_1 + 4 + iVar4) + *(float *)(param_1 + 4 + iVar3) +
                            *pfVar5) * _DAT_0059a20c;
              *param_8 = *param_6 * _DAT_0059a204 +
                         (*(float *)(iVar9 + 8 + iVar4) + *(float *)(iVar9 + 8 + iVar3) +
                          *(float *)(iVar6 + 8 + iVar4) + *(float *)(iVar6 + 8 + iVar3)) *
                         _DAT_0059a208 +
                         (pfVar5[1] + pfVar7[-1] + *(float *)(param_1 + 8 + iVar4) +
                         *(float *)(param_1 + 8 + iVar3)) * _DAT_0059a20c;
              param_8[1] = param_6[1] * _DAT_0059a204 +
                           (pfVar5[2] + *(float *)(param_1 + 0xc + iVar4) +
                            *(float *)(param_1 + 0xc + iVar3) + *pfVar7) * _DAT_0059a20c +
                           (*(float *)(iVar9 + 0xc + iVar4) + *(float *)(iVar9 + 0xc + iVar3) +
                            *(float *)(iVar6 + 0xc + iVar4) + *(float *)(iVar6 + 0xc + iVar3)) *
                           _DAT_0059a208;
              param_6 = param_6 + 4;
              pfVar7 = pfVar7 + 4;
              param_8 = param_8 + 4;
              pfVar5 = pfVar5 + 4;
              bVar1 = (int)param_5 < param_2;
              iVar3 = param_7;
              param_5 = (undefined1 *)((int)param_5 + 1);
            } while (bVar1);
          }
        }
        iVar2 = iVar2 + 1;
        local_1c = local_1c + param_3;
        param_1 = param_1 + iVar3;
      } while (iVar2 < local_18[0]);
    }
    iVar2 = 0;
  }
  return iVar2;
}


