/* Module: vidcap30.exe
   Function: _SfDibBlur@36
   Address: 004ca6f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int _SfDibBlur_36(undefined1 *param_1,int param_2,int param_3,int param_4,float *param_5,int param_6
                 ,int param_7,int param_8,int param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  int iVar36;
  float *pfVar37;
  float *pfVar38;
  uint uVar39;
  int iVar40;
  float *pfVar41;
  float *pfVar42;
  float *pfVar43;
  float *pfVar44;
  float *pfVar45;
  int local_10;
  undefined1 local_c;
  undefined1 local_8;
  undefined1 local_4;
  
                    /* 0xca6f0  297  _SfDibBlur@36 */
  iVar40 = param_7;
  iVar36 = _SfDibPrepareCopy_52
                     (&param_6,&local_10,&param_5,&param_4,param_1,param_2,param_3,param_4,param_5,
                      param_6,param_7,param_8,param_9);
  if (-1 < iVar36) {
    param_2 = 0;
    if (0 < local_10) {
      do {
        if (param_9 == 4) {
          pfVar37 = (float *)((int)param_5 - iVar40);
          if (param_2 == 0) {
            pfVar37 = param_5;
          }
          pfVar42 = (float *)((int)param_5 + iVar40);
          if (local_10 + -1 == param_2) {
            pfVar42 = param_5;
          }
          param_8 = 0;
          if (0 < param_6) {
            param_1 = (undefined1 *)(param_4 + 2);
            pfVar41 = param_5;
            do {
              iVar40 = -1;
              if (param_8 == 0) {
                iVar40 = 0;
              }
              uVar39 = (uint)(param_6 + -1 != param_8);
              bVar5 = *(byte *)((int)pfVar41 + iVar40 * 4 + 1);
              bVar6 = *(byte *)((int)pfVar41 + 1);
              bVar7 = *(byte *)((int)pfVar41 + uVar39 * 4 + 1);
              bVar8 = *(byte *)((int)pfVar42 + 1);
              bVar9 = *(byte *)((int)pfVar37 + 1);
              bVar10 = *(byte *)((int)pfVar37 + iVar40 * 4 + 1);
              bVar11 = *(byte *)((int)pfVar37 + uVar39 * 4 + 1);
              bVar12 = *(byte *)((int)pfVar42 + iVar40 * 4 + 1);
              bVar13 = *(byte *)((int)pfVar42 + uVar39 * 4 + 1);
              bVar14 = *(byte *)((int)pfVar41 + uVar39 * 4 + 2);
              bVar15 = *(byte *)((int)pfVar41 + iVar40 * 4 + 2);
              bVar16 = *(byte *)((int)pfVar41 + 2);
              bVar17 = *(byte *)((int)pfVar42 + 2);
              bVar18 = *(byte *)((int)pfVar37 + 2);
              bVar19 = *(byte *)((int)pfVar37 + iVar40 * 4 + 2);
              bVar20 = *(byte *)((int)pfVar37 + uVar39 * 4 + 2);
              bVar21 = *(byte *)((int)pfVar42 + iVar40 * 4 + 2);
              bVar22 = *(byte *)((int)pfVar42 + uVar39 * 4 + 2);
              bVar23 = *(byte *)((int)pfVar41 + iVar40 * 4 + 3);
              bVar24 = *(byte *)((int)pfVar41 + 3);
              bVar25 = *(byte *)((int)pfVar41 + uVar39 * 4 + 3);
              bVar26 = *(byte *)((int)pfVar42 + 3);
              bVar27 = *(byte *)((int)pfVar37 + 3);
              bVar28 = *(byte *)((int)pfVar37 + iVar40 * 4 + 3);
              bVar29 = *(byte *)((int)pfVar37 + uVar39 * 4 + 3);
              bVar30 = *(byte *)((int)pfVar42 + iVar40 * 4 + 3);
              local_c = (undefined1)
                        ((int)((uint)*(byte *)(pfVar37 + uVar39) +
                               ((uint)*(byte *)(pfVar41 + iVar40) + (uint)*(byte *)pfVar41 * 2 +
                                (uint)*(byte *)pfVar42 + (uint)*(byte *)pfVar37 +
                               (uint)*(byte *)(pfVar41 + uVar39)) * 2 +
                               (uint)*(byte *)(pfVar42 + iVar40) + (uint)*(byte *)(pfVar42 + uVar39)
                              + (uint)*(byte *)(pfVar37 + iVar40)) >> 4);
              bVar31 = *(byte *)((int)pfVar42 + uVar39 * 4 + 3);
              param_1[-2] = local_c;
              local_8 = (undefined1)
                        ((int)((uint)bVar10 +
                               ((uint)bVar5 + (uint)bVar6 * 2 + (uint)bVar7 + (uint)bVar8 +
                               (uint)bVar9) * 2 + (uint)bVar11 + (uint)bVar12 + (uint)bVar13) >> 4);
              param_1[-1] = local_8;
              local_4 = (undefined1)
                        ((int)((uint)bVar19 +
                               ((uint)bVar15 + (uint)bVar14 + (uint)bVar16 * 2 + (uint)bVar17 +
                               (uint)bVar18) * 2 + (uint)bVar20 + (uint)bVar21 + (uint)bVar22) >> 4)
              ;
              *param_1 = local_4;
              param_1[1] = (char)((int)((uint)bVar28 +
                                        ((uint)bVar23 + (uint)bVar24 * 2 + (uint)bVar25 +
                                         (uint)bVar26 + (uint)bVar27) * 2 + (uint)bVar29 +
                                        (uint)bVar30 + (uint)bVar31) >> 4);
              param_1 = param_1 + 4;
              param_8 = param_8 + 1;
              pfVar37 = pfVar37 + 1;
              iVar40 = param_7;
              pfVar42 = pfVar42 + 1;
              pfVar41 = pfVar41 + 1;
            } while (param_8 < param_6);
          }
        }
        else {
          pfVar37 = (float *)((int)param_5 - iVar40);
          if (param_2 == 0) {
            pfVar37 = param_5;
          }
          pfVar42 = (float *)((int)param_5 + iVar40);
          if (local_10 + -1 == param_2) {
            pfVar42 = param_5;
          }
          param_8 = 0;
          if (0 < param_6) {
            pfVar41 = (float *)(param_4 + 8);
            pfVar44 = param_5;
            do {
              iVar40 = -1;
              if (param_8 == 0) {
                iVar40 = 0;
              }
              uVar39 = (uint)(param_6 + -1 != param_8);
              pfVar45 = pfVar44 + 4;
              pfVar38 = pfVar37 + 4;
              pfVar43 = pfVar42 + 4;
              param_8 = param_8 + 1;
              fVar1 = pfVar44[iVar40 * 4] + *pfVar42 + pfVar45[uVar39 * 4 + -4] + *pfVar37;
              fVar32 = (*pfVar44 * _DAT_0059a228 + fVar1 + fVar1 + pfVar43[uVar39 * 4 + -4] +
                        pfVar43[iVar40 * 4 + -4] + pfVar38[uVar39 * 4 + -4] +
                       pfVar38[iVar40 * 4 + -4]) * _DAT_0059a208;
              fVar4 = pfVar45[iVar40 * 4 + -3] + pfVar45[uVar39 * 4 + -3] + pfVar42[1] + pfVar37[1];
              fVar1 = pfVar45[iVar40 * 4 + -2] + pfVar45[uVar39 * 4 + -2] + pfVar42[2] + pfVar37[2];
              fVar33 = (pfVar44[2] * _DAT_0059a228 +
                       fVar1 + fVar1 + pfVar38[iVar40 * 4 + -2] + pfVar38[uVar39 * 4 + -2] +
                       pfVar43[iVar40 * 4 + -2] + pfVar43[uVar39 * 4 + -2]) * _DAT_0059a208;
              fVar34 = pfVar45[iVar40 * 4 + -1] + pfVar45[uVar39 * 4 + -1] + pfVar42[3] + pfVar37[3]
              ;
              fVar35 = pfVar44[3] * _DAT_0059a228;
              fVar1 = pfVar38[iVar40 * 4 + -1];
              fVar2 = pfVar38[uVar39 * 4 + -1];
              fVar3 = pfVar43[iVar40 * 4 + -1];
              pfVar41[-1] = (pfVar44[1] * _DAT_0059a228 + fVar4 + fVar4 + pfVar38[iVar40 * 4 + -3] +
                             pfVar38[uVar39 * 4 + -3] + pfVar43[iVar40 * 4 + -3] +
                            pfVar43[uVar39 * 4 + -3]) * _DAT_0059a208;
              fVar4 = pfVar43[uVar39 * 4 + -1];
              *pfVar41 = fVar33;
              fVar1 = (fVar35 + fVar34 + fVar34 + fVar1 + fVar2 + fVar3 + fVar4) * _DAT_0059a208;
              pfVar41[-2] = fVar32;
              pfVar41[1] = fVar1;
              pfVar37 = pfVar38;
              iVar40 = param_7;
              pfVar41 = pfVar41 + 4;
              pfVar42 = pfVar43;
              pfVar44 = pfVar45;
            } while (param_8 < param_6);
          }
        }
        param_5 = (float *)((int)param_5 + iVar40);
        param_4 = param_4 + param_3;
        param_2 = param_2 + 1;
      } while (param_2 < local_10);
    }
    iVar36 = 0;
  }
  return iVar36;
}


