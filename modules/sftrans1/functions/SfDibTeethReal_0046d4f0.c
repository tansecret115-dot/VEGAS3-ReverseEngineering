/* Module: sftrans1.dll
   Function: SfDibTeethReal
   Address: 0046d4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfDibTeethReal(void *,struct tagRECT *,long,struct tagRECT *,void *,struct tagRECT
   *,long,struct tagRECT *,void *,struct tagRECT *,long,struct tagRECT *,long,struct tTEETHPROP
   &,double) */

long SfDibTeethReal(void *param_1,tagRECT *param_2,long param_3,tagRECT *param_4,void *param_5,
                   tagRECT *param_6,long param_7,tagRECT *param_8,void *param_9,tagRECT *param_10,
                   long param_11,tagRECT *param_12,long param_13,tTEETHPROP *param_14,
                   double param_15)

{
  void *pvVar1;
  tagRECT *ptVar2;
  tagRECT *ptVar3;
  long lVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  long lVar8;
  undefined4 unaff_EDI;
  byte *pbVar9;
  int local_1c;
  int local_18;
  int local_14;
  undefined1 local_10 [16];
  
  ptVar3 = param_4;
  lVar8 = param_3;
  ptVar2 = param_2;
                    /* 0x6d4f0  26  ?SfDibTeethReal@@YGJPAXPAUtagRECT@@J101J101J1JAAUtTEETHPROP@@N@Z
                        */
  pvVar1 = param_1;
  lVar4 = FUN_004cd320(param_1,param_2,param_3,param_4,param_13,0,0,0,0,0,0,0,0);
  if (-1 < lVar4) {
    param_4 = (tagRECT *)0xffffffff;
    lVar4 = SfDibTeethDraw(pvVar1,ptVar2,lVar8,ptVar3,param_13,(tSFRGBA *)&param_4,param_14,
                           (double)CONCAT44(unaff_EDI,param_15._4_4_));
    if (-1 < lVar4) {
      lVar4 = FUN_004da570(pvVar1,ptVar2,lVar8,ptVar3,pvVar1,ptVar2,lVar8,ptVar3,0,0x40240000,0,
                           0x40240000,3,param_13);
      if (-1 < lVar4) {
        lVar4 = FUN_004cdc70(local_10,&param_1,&local_14,&local_1c,&param_2,pvVar1,ptVar2,lVar8,
                             ptVar3,param_5,param_6,param_7,param_8,param_13);
        if (-1 < lVar4) {
          lVar4 = FUN_004cdc70(local_10,&param_1,&local_14,&local_18,&param_2,pvVar1,ptVar2,lVar8,
                               ptVar3,param_9,param_10,param_11,param_12,param_13);
          if ((-1 < lVar4) && (param_14 = (tTEETHPROP *)0x0, 0 < local_14)) {
            do {
              param_13 = 0;
              if (0 < (int)param_1) {
                pbVar6 = (byte *)((int)&param_2->left + 3);
                pbVar7 = (byte *)(local_18 + 2);
                pbVar9 = (byte *)(local_1c + 2);
                do {
                  param_6 = (tagRECT *)(uint)pbVar9[-2];
                  param_8 = (tagRECT *)(uint)*pbVar6;
                  iVar5 = ((uint)pbVar7[-2] - (int)param_6) * (int)param_8;
                  pbVar6[-3] = (char)(iVar5 + (iVar5 >> 0x1f & 0xffU) >> 8) + pbVar9[-2];
                  param_5 = (void *)(uint)pbVar9[-1];
                  iVar5 = ((uint)pbVar7[-1] - (int)param_5) * (int)param_8;
                  pbVar6[-2] = (char)(iVar5 + (iVar5 >> 0x1f & 0xffU) >> 8) + pbVar9[-1];
                  param_12 = (tagRECT *)(uint)*pbVar9;
                  iVar5 = ((uint)*pbVar7 - (int)param_12) * (int)param_8;
                  pbVar6[-1] = (char)(iVar5 + (iVar5 >> 0x1f & 0xffU) >> 8) + *pbVar9;
                  param_10 = (tagRECT *)(uint)pbVar9[1];
                  iVar5 = ((uint)pbVar7[1] - (int)param_10) * (int)param_8;
                  *pbVar6 = (char)(iVar5 + (iVar5 >> 0x1f & 0xffU) >> 8) + pbVar9[1];
                  param_13 = param_13 + 1;
                  pbVar6 = pbVar6 + 4;
                  pbVar7 = pbVar7 + 4;
                  lVar8 = param_3;
                  pbVar9 = pbVar9 + 4;
                } while (param_13 < (int)param_1);
              }
              local_1c = local_1c + param_7;
              local_18 = local_18 + param_11;
              param_2 = (tagRECT *)((int)&param_2->left + lVar8);
              param_14 = param_14 + 1;
            } while ((int)param_14 < local_14);
          }
        }
      }
    }
  }
  return lVar4;
}


