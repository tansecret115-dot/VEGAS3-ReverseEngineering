/* Module: vidpcore.dll
   Function: SfDibChannelMin
   Address: 5de8eca0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfDibChannelMin(void *,struct tagRECT *,long,struct tagRECT *,enum
   SF_COLOR_CHANNEL,void *,struct tagRECT *,long,struct tagRECT *,enum SF_COLOR_CHANNEL,long,long)
    */

long SfDibChannelMin(void *param_1,tagRECT *param_2,long param_3,tagRECT *param_4,
                    SF_COLOR_CHANNEL param_5,void *param_6,tagRECT *param_7,long param_8,
                    tagRECT *param_9,SF_COLOR_CHANNEL param_10,long param_11,long param_12)

{
  long lVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  void *pvVar5;
  float *pfVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  void *pvVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  byte *pbVar14;
  tagRECT *local_10 [2];
  byte *local_8;
  long local_4;
  
                    /* 0x8eca0  15
                       ?SfDibChannelMin@@YGJPAXPAUtagRECT@@J1W4SF_COLOR_CHANNEL@@01J12JJ@Z */
  lVar12 = param_12;
  lVar1 = FUN_5debbfb0(&param_1,local_10,&param_6,&param_7,param_1,param_2,param_3,param_4,param_6,
                       param_7,param_8,param_9,param_12);
  if (-1 < lVar1) {
    local_4 = lVar1;
    iVar2 = FUN_5debe420(param_5,lVar12);
    iVar3 = FUN_5debe420(param_10,lVar12);
    pbVar14 = (byte *)((int)&param_7->left + iVar2);
    param_5 = 0;
    if (0 < (int)local_10[0]) {
      do {
        if (lVar12 == 4) {
          uVar8 = ((int)(param_5 - param_11) < 0) - 1 & param_5 - param_11;
          param_10 = param_5 + param_11;
          if ((int)local_10[0] < (int)param_10) {
            param_10 = (SF_COLOR_CHANNEL)local_10[0];
          }
          param_9 = (tagRECT *)0x0;
          local_8 = pbVar14;
          if (0 < (int)param_1) {
            do {
              uVar9 = ((int)param_9 - param_11 < 0) - 1 & (int)param_9 - param_11;
              pvVar10 = (void *)((int)&param_9->left + param_11);
              pvVar5 = param_1;
              if ((int)pvVar10 <= (int)param_1) {
                pvVar5 = pvVar10;
              }
              bVar7 = 0xff;
              if ((int)uVar8 < (int)param_10) {
                iVar13 = uVar8 * param_8;
                iVar2 = param_10 - uVar8;
                do {
                  if ((int)uVar9 < (int)pvVar5) {
                    pbVar4 = (byte *)((int)param_6 + iVar13 + uVar9 * 4 + iVar3);
                    iVar11 = (int)pvVar5 - uVar9;
                    do {
                      if (*pbVar4 < bVar7) {
                        bVar7 = *pbVar4;
                      }
                      pbVar4 = pbVar4 + 4;
                      iVar11 = iVar11 + -1;
                    } while (iVar11 != 0);
                  }
                  iVar13 = iVar13 + param_8;
                  iVar2 = iVar2 + -1;
                } while (iVar2 != 0);
              }
              *local_8 = bVar7;
              local_8 = local_8 + 4;
              param_9 = (tagRECT *)((int)&param_9->left + 1);
            } while ((int)param_9 < (int)param_1);
          }
        }
        else {
          uVar8 = ((int)(param_5 - param_11) < 0) - 1 & param_5 - param_11;
          param_4 = (tagRECT *)(param_5 + param_11);
          if ((int)local_10[0] < (int)param_4) {
            param_4 = local_10[0];
          }
          param_9 = (tagRECT *)0x0;
          param_10 = (SF_COLOR_CHANNEL)pbVar14;
          if (0 < (int)param_1) {
            do {
              uVar9 = ((int)param_9 - param_11 < 0) - 1 & (int)param_9 - param_11;
              pvVar10 = (void *)((int)&param_9->left + param_11);
              if ((int)param_1 < (int)pvVar10) {
                pvVar10 = param_1;
              }
              param_2 = (tagRECT *)0x41200000;
              if ((int)uVar8 < (int)param_4) {
                iVar13 = uVar8 * param_8;
                iVar2 = (int)param_4 - uVar8;
                do {
                  if ((int)uVar9 < (int)pvVar10) {
                    pfVar6 = (float *)((int)param_6 + uVar9 * 0x10 + iVar13 + iVar3);
                    iVar11 = (int)pvVar10 - uVar9;
                    do {
                      if (*pfVar6 < (float)param_2) {
                        param_2 = (tagRECT *)*pfVar6;
                      }
                      pfVar6 = pfVar6 + 4;
                      iVar11 = iVar11 + -1;
                    } while (iVar11 != 0);
                  }
                  iVar13 = iVar13 + param_8;
                  iVar2 = iVar2 + -1;
                } while (iVar2 != 0);
              }
              *(tagRECT **)param_10 = param_2;
              param_10 = param_10 + 0x10;
              param_9 = (tagRECT *)((int)&param_9->left + 1);
            } while ((int)param_9 < (int)param_1);
          }
        }
        pbVar14 = pbVar14 + param_3;
        param_5 = param_5 + 1;
        lVar1 = local_4;
        lVar12 = param_12;
      } while ((int)param_5 < (int)local_10[0]);
    }
    return lVar1;
  }
  return lVar1;
}


