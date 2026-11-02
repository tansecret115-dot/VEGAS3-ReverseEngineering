/* Module: sftrans1.dll
   Function: SfDibGlow
   Address: 00476890
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall SfDibGlow(void *,struct tagRECT *,long,struct tagRECT *,void *,struct tagRECT
   *,long,struct tagRECT *,struct tGLOWPROP const *,long) */

long SfDibGlow(void *param_1,tagRECT *param_2,long param_3,tagRECT *param_4,void *param_5,
              tagRECT *param_6,long param_7,tagRECT *param_8,tGLOWPROP *param_9,long param_10)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  tGLOWPROP *ptVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  byte bVar12;
  short sVar13;
  long lVar14;
  int iVar15;
  void *pvVar16;
  int iVar17;
  LONG *pLVar18;
  LONG *pLVar19;
  int iVar20;
  byte *pbVar21;
  
                    /* 0x76890  19  ?SfDibGlow@@YGJPAXPAUtagRECT@@J101J1PBUtGLOWPROP@@J@Z */
  lVar14 = FUN_004cda40(&param_5,&param_1,&param_6,&param_8,param_1,param_2,param_3,param_4,param_5,
                        param_6,param_7,param_8,param_10);
  ptVar8 = param_9;
  if (-1 < lVar14) {
    param_4 = (tagRECT *)(float)*(double *)(param_9 + 8);
    param_9 = (tGLOWPROP *)ftol();
    dVar1 = *(double *)(ptVar8 + 0x10);
    uVar9 = ftol();
    uVar10 = ftol();
    uVar11 = ftol();
    bVar12 = ftol();
    dVar2 = *(double *)(ptVar8 + 0x18);
    dVar3 = *(double *)(ptVar8 + 0x20);
    dVar4 = *(double *)(ptVar8 + 0x28);
    dVar5 = *(double *)(ptVar8 + 0x30);
    param_2 = (tagRECT *)0x0;
    pvVar16 = param_5;
    if (0 < (int)param_1) {
      do {
        if (param_10 == 4) {
          iVar20 = 0;
          if (0 < (int)pvVar16) {
            pbVar21 = (byte *)((int)&param_8->left + 2);
            do {
              sVar13 = ftol();
              iVar17 = (int)sVar13;
              iVar15 = ((CONCAT12(uVar11,CONCAT11(uVar10,uVar9)) & 0xff) - (uint)pbVar21[-2]) *
                       iVar17;
              pbVar21[-2] = (char)(iVar15 + (iVar15 >> 0x1f & 0xffU) >> 8) + pbVar21[-2];
              iVar15 = ((CONCAT12(bVar12,CONCAT11(uVar11,uVar10)) & 0xff) - (uint)pbVar21[-1]) *
                       iVar17;
              pbVar21[-1] = (char)(iVar15 + (iVar15 >> 0x1f & 0xffU) >> 8) + pbVar21[-1];
              iVar15 = ((CONCAT11(bVar12,uVar11) & 0xff) - (uint)*pbVar21) * iVar17;
              *pbVar21 = (char)(iVar15 + (iVar15 >> 0x1f & 0xffU) >> 8) + *pbVar21;
              iVar17 = ((uint)bVar12 - (uint)pbVar21[1]) * iVar17;
              iVar20 = iVar20 + 1;
              pbVar21[1] = (char)(iVar17 + (iVar17 >> 0x1f & 0xffU) >> 8) + pbVar21[1];
              pvVar16 = param_5;
              pbVar21 = pbVar21 + 4;
            } while (iVar20 < (int)param_5);
          }
        }
        else {
          iVar20 = 0;
          if (0 < (int)pvVar16) {
            pLVar19 = &param_6->top;
            pLVar18 = &param_8->right;
            do {
              fVar6 = (((float)pLVar19[1] + (float)((tagRECT *)(pLVar19 + -1))->left +
                       (float)*pLVar19) * _DAT_00562db0 - (float)dVar1) * (float)param_4;
              fVar7 = _DAT_00557840;
              if ((_DAT_00557840 <= fVar6) && (fVar7 = fVar6, _DAT_0055c008 < fVar6)) {
                fVar7 = _DAT_0055c008;
              }
              pLVar19 = pLVar19 + 4;
              iVar20 = iVar20 + 1;
              ((tagRECT *)(pLVar18 + -2))->left =
                   (LONG)(((float)dVar2 - (float)((tagRECT *)(pLVar18 + -2))->left) * fVar7 +
                         (float)((tagRECT *)(pLVar18 + -2))->left);
              pLVar18[-1] = (LONG)(((float)dVar3 - (float)pLVar18[-1]) * fVar7 + (float)pLVar18[-1])
              ;
              *pLVar18 = (LONG)(((float)dVar4 - (float)*pLVar18) * fVar7 + (float)*pLVar18);
              pLVar18[1] = (LONG)(((float)dVar5 - (float)pLVar18[1]) * fVar7 + (float)pLVar18[1]);
              pvVar16 = param_5;
              pLVar18 = pLVar18 + 4;
            } while (iVar20 < (int)param_5);
          }
        }
        param_8 = (tagRECT *)((int)&param_8->left + param_3);
        param_6 = (tagRECT *)((int)&param_6->left + param_7);
        param_2 = (tagRECT *)((int)&param_2->left + 1);
      } while ((int)param_2 < (int)param_1);
    }
    return lVar14;
  }
  return lVar14;
}


