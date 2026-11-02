/* Module: vidpcore.dll
   Function: SfHaley_mills
   Address: 5de85d90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfHaley_mills(void *,struct tagRECT *,long,struct tagRECT *,void *,void
   *,long,long,struct tagRECT *,struct tagRECT *,long) */

long SfHaley_mills(void *param_1,tagRECT *param_2,long param_3,tagRECT *param_4,void *param_5,
                  void *param_6,long param_7,long param_8,tagRECT *param_9,tagRECT *param_10,
                  long param_11)

{
  tagRECT *ptVar1;
  tagRECT *ptVar2;
  long lVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  int local_14;
  undefined1 local_10 [16];
  
  lVar3 = param_11;
  ptVar2 = param_10;
                    /* 0x85d90  23  ?SfHaley_mills@@YGJPAXPAUtagRECT@@J100JJ11J@Z */
  ptVar1 = param_9;
  FUN_5debc1e0(local_10,&param_10,&local_14,&param_9,&param_11,param_1,param_2,param_3,param_4,
               param_5,param_9,param_7,param_10,param_11);
  FUN_5debc1e0(local_10,&param_10,&local_14,&param_5,&param_11,param_1,param_2,param_3,param_4,
               param_6,ptVar1,param_8,ptVar2,lVar3);
  param_4 = (tagRECT *)0x0;
  if (0 < local_14) {
    do {
      iVar6 = 0;
      if (0 < (int)param_10) {
        puVar7 = (undefined1 *)(param_11 + 2);
        pbVar9 = (byte *)((int)&param_9->left + 2);
        pbVar8 = (byte *)((int)param_5 + 2);
        do {
          iVar5 = (int)(((uint)*pbVar9 - (uint)*pbVar8) * ((uint)*pbVar9 - (uint)*pbVar8) +
                       ((uint)pbVar9[-2] - (uint)pbVar8[-2]) * ((uint)pbVar9[-2] - (uint)pbVar8[-2])
                       + ((uint)pbVar9[-1] - (uint)pbVar8[-1]) *
                         ((uint)pbVar9[-1] - (uint)pbVar8[-1])) / 6;
          if (iVar5 < 0) {
            iVar5 = 0;
          }
          else if (0xff < iVar5) {
            iVar5 = 0xff;
          }
          uVar4 = (undefined1)iVar5;
          puVar7[-2] = uVar4;
          puVar7[-1] = uVar4;
          *puVar7 = uVar4;
          puVar7[1] = 0xff;
          iVar6 = iVar6 + 1;
          pbVar8 = pbVar8 + 4;
          pbVar9 = pbVar9 + 4;
          puVar7 = puVar7 + 4;
        } while (iVar6 < (int)param_10);
      }
      param_11 = param_11 + param_3;
      param_5 = (void *)((int)param_5 + param_8);
      param_9 = (tagRECT *)((int)&param_9->left + param_7);
      param_4 = (tagRECT *)((int)&param_4->left + 1);
    } while ((int)param_4 < local_14);
  }
  return 0;
}


