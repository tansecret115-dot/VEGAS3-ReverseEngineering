/* Module: mcmpgdec.dll
   Function: FUN_1001af84
   Address: 1001af84
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_1001af84(undefined8 *param_1,int param_2,int param_3,undefined4 *param_4,int param_5,int param_6
            )

{
  int iVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  short sVar11;
  short sVar13;
  short sVar14;
  short sVar15;
  undefined8 uVar12;
  undefined8 uVar16;
  int local_10;
  
  iVar1 = param_3 - param_5 >> 1;
  iVar6 = 0;
  pbVar7 = (byte *)*param_4;
  pbVar10 = (byte *)param_4[2];
  pbVar8 = (byte *)param_4[1];
  if (0 < param_6) {
    iVar9 = param_5 >> 1;
    do {
      iVar6 = iVar6 + 1;
      local_10 = 0;
      if (0 < iVar9 + -7) {
        do {
          uVar12 = *(undefined8 *)(&DAT_10032b70 + (uint)*pbVar10 * 8);
          uVar16 = *(undefined8 *)(&DAT_10032370 + (uint)*pbVar8 * 8);
          sVar11 = (short)uVar12 + (short)uVar16;
          sVar13 = (short)((ulonglong)uVar12 >> 0x10) + (short)((ulonglong)uVar16 >> 0x10);
          sVar14 = (short)((ulonglong)uVar12 >> 0x20) + (short)((ulonglong)uVar16 >> 0x20);
          sVar15 = (short)((ulonglong)uVar12 >> 0x30) + (short)((ulonglong)uVar16 >> 0x30);
          uVar12 = *(undefined8 *)(&DAT_10033370 + (uint)*pbVar7 * 8);
          uVar16 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar7[1] * 8);
          uVar12 = psraw(CONCAT26(sVar15 + (short)((ulonglong)uVar12 >> 0x30),
                                  CONCAT24(sVar14 + (short)((ulonglong)uVar12 >> 0x20),
                                           CONCAT22(sVar13 + (short)((ulonglong)uVar12 >> 0x10),
                                                    sVar11 + (short)uVar12))),6);
          uVar16 = psraw(CONCAT26(sVar15 + (short)((ulonglong)uVar16 >> 0x30),
                                  CONCAT24(sVar14 + (short)((ulonglong)uVar16 >> 0x20),
                                           CONCAT22(sVar13 + (short)((ulonglong)uVar16 >> 0x10),
                                                    sVar11 + (short)uVar16))),6);
          sVar11 = (short)uVar12;
          sVar13 = (short)((ulonglong)uVar12 >> 0x10);
          sVar14 = (short)((ulonglong)uVar12 >> 0x20);
          sVar15 = (short)((ulonglong)uVar12 >> 0x30);
          sVar2 = (short)uVar16;
          sVar3 = (short)((ulonglong)uVar16 >> 0x10);
          sVar4 = (short)((ulonglong)uVar16 >> 0x20);
          sVar5 = (short)((ulonglong)uVar16 >> 0x30);
          *param_1 = CONCAT17((0 < sVar5) * (sVar5 < 0x100) * (char)((ulonglong)uVar16 >> 0x30) -
                              (0xff < sVar5),
                              CONCAT16((0 < sVar4) * (sVar4 < 0x100) *
                                       (char)((ulonglong)uVar16 >> 0x20) - (0xff < sVar4),
                                       CONCAT15((0 < sVar3) * (sVar3 < 0x100) *
                                                (char)((ulonglong)uVar16 >> 0x10) - (0xff < sVar3),
                                                CONCAT14((0 < sVar2) * (sVar2 < 0x100) *
                                                         (char)uVar16 - (0xff < sVar2),
                                                         CONCAT13((0 < sVar15) * (sVar15 < 0x100) *
                                                                  (char)((ulonglong)uVar12 >> 0x30)
                                                                  - (0xff < sVar15),
                                                                  CONCAT12((0 < sVar14) *
                                                                           (sVar14 < 0x100) *
                                                                           (char)((ulonglong)uVar12
                                                                                 >> 0x20) -
                                                                           (0xff < sVar14),
                                                                           CONCAT11((0 < sVar13) *
                                                                                    (sVar13 < 0x100)
                                                                                    * (char)((
                                                  ulonglong)uVar12 >> 0x10) - (0xff < sVar13),
                                                  (0 < sVar11) * (sVar11 < 0x100) * (char)uVar12 -
                                                  (0xff < sVar11))))))));
          uVar12 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar10[1] * 8);
          uVar16 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar8[1] * 8);
          sVar11 = (short)uVar12 + (short)uVar16;
          sVar13 = (short)((ulonglong)uVar12 >> 0x10) + (short)((ulonglong)uVar16 >> 0x10);
          sVar14 = (short)((ulonglong)uVar12 >> 0x20) + (short)((ulonglong)uVar16 >> 0x20);
          sVar15 = (short)((ulonglong)uVar12 >> 0x30) + (short)((ulonglong)uVar16 >> 0x30);
          uVar12 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar7[2] * 8);
          uVar16 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar7[3] * 8);
          uVar12 = psraw(CONCAT26(sVar15 + (short)((ulonglong)uVar12 >> 0x30),
                                  CONCAT24(sVar14 + (short)((ulonglong)uVar12 >> 0x20),
                                           CONCAT22(sVar13 + (short)((ulonglong)uVar12 >> 0x10),
                                                    sVar11 + (short)uVar12))),6);
          uVar16 = psraw(CONCAT26(sVar15 + (short)((ulonglong)uVar16 >> 0x30),
                                  CONCAT24(sVar14 + (short)((ulonglong)uVar16 >> 0x20),
                                           CONCAT22(sVar13 + (short)((ulonglong)uVar16 >> 0x10),
                                                    sVar11 + (short)uVar16))),6);
          sVar11 = (short)uVar12;
          sVar13 = (short)((ulonglong)uVar12 >> 0x10);
          sVar14 = (short)((ulonglong)uVar12 >> 0x20);
          sVar15 = (short)((ulonglong)uVar12 >> 0x30);
          sVar2 = (short)uVar16;
          sVar3 = (short)((ulonglong)uVar16 >> 0x10);
          sVar4 = (short)((ulonglong)uVar16 >> 0x20);
          sVar5 = (short)((ulonglong)uVar16 >> 0x30);
          param_1[1] = CONCAT17((0 < sVar5) * (sVar5 < 0x100) * (char)((ulonglong)uVar16 >> 0x30) -
                                (0xff < sVar5),
                                CONCAT16((0 < sVar4) * (sVar4 < 0x100) *
                                         (char)((ulonglong)uVar16 >> 0x20) - (0xff < sVar4),
                                         CONCAT15((0 < sVar3) * (sVar3 < 0x100) *
                                                  (char)((ulonglong)uVar16 >> 0x10) - (0xff < sVar3)
                                                  ,CONCAT14((0 < sVar2) * (sVar2 < 0x100) *
                                                            (char)uVar16 - (0xff < sVar2),
                                                            CONCAT13((0 < sVar15) * (sVar15 < 0x100)
                                                                     * (char)((ulonglong)uVar12 >>
                                                                             0x30) - (0xff < sVar15)
                                                                     ,CONCAT12((0 < sVar14) *
                                                                               (sVar14 < 0x100) *
                                                                               (char)((ulonglong)
                                                                                      uVar12 >> 0x20
                                                                                     ) - (0xff < 
                                                  sVar14),CONCAT11((0 < sVar13) * (sVar13 < 0x100) *
                                                                   (char)((ulonglong)uVar12 >> 0x10)
                                                                   - (0xff < sVar13),
                                                                   (0 < sVar11) * (sVar11 < 0x100) *
                                                                   (char)uVar12 - (0xff < sVar11))))
                                                  ))));
          uVar12 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar10[2] * 8);
          uVar16 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar8[2] * 8);
          sVar11 = (short)uVar12 + (short)uVar16;
          sVar13 = (short)((ulonglong)uVar12 >> 0x10) + (short)((ulonglong)uVar16 >> 0x10);
          sVar14 = (short)((ulonglong)uVar12 >> 0x20) + (short)((ulonglong)uVar16 >> 0x20);
          sVar15 = (short)((ulonglong)uVar12 >> 0x30) + (short)((ulonglong)uVar16 >> 0x30);
          uVar12 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar7[4] * 8);
          uVar16 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar7[5] * 8);
          uVar12 = psraw(CONCAT26(sVar15 + (short)((ulonglong)uVar12 >> 0x30),
                                  CONCAT24(sVar14 + (short)((ulonglong)uVar12 >> 0x20),
                                           CONCAT22(sVar13 + (short)((ulonglong)uVar12 >> 0x10),
                                                    sVar11 + (short)uVar12))),6);
          uVar16 = psraw(CONCAT26(sVar15 + (short)((ulonglong)uVar16 >> 0x30),
                                  CONCAT24(sVar14 + (short)((ulonglong)uVar16 >> 0x20),
                                           CONCAT22(sVar13 + (short)((ulonglong)uVar16 >> 0x10),
                                                    sVar11 + (short)uVar16))),6);
          sVar11 = (short)uVar12;
          sVar13 = (short)((ulonglong)uVar12 >> 0x10);
          sVar14 = (short)((ulonglong)uVar12 >> 0x20);
          sVar15 = (short)((ulonglong)uVar12 >> 0x30);
          sVar2 = (short)uVar16;
          sVar3 = (short)((ulonglong)uVar16 >> 0x10);
          sVar4 = (short)((ulonglong)uVar16 >> 0x20);
          sVar5 = (short)((ulonglong)uVar16 >> 0x30);
          param_1[2] = CONCAT17((0 < sVar5) * (sVar5 < 0x100) * (char)((ulonglong)uVar16 >> 0x30) -
                                (0xff < sVar5),
                                CONCAT16((0 < sVar4) * (sVar4 < 0x100) *
                                         (char)((ulonglong)uVar16 >> 0x20) - (0xff < sVar4),
                                         CONCAT15((0 < sVar3) * (sVar3 < 0x100) *
                                                  (char)((ulonglong)uVar16 >> 0x10) - (0xff < sVar3)
                                                  ,CONCAT14((0 < sVar2) * (sVar2 < 0x100) *
                                                            (char)uVar16 - (0xff < sVar2),
                                                            CONCAT13((0 < sVar15) * (sVar15 < 0x100)
                                                                     * (char)((ulonglong)uVar12 >>
                                                                             0x30) - (0xff < sVar15)
                                                                     ,CONCAT12((0 < sVar14) *
                                                                               (sVar14 < 0x100) *
                                                                               (char)((ulonglong)
                                                                                      uVar12 >> 0x20
                                                                                     ) - (0xff < 
                                                  sVar14),CONCAT11((0 < sVar13) * (sVar13 < 0x100) *
                                                                   (char)((ulonglong)uVar12 >> 0x10)
                                                                   - (0xff < sVar13),
                                                                   (0 < sVar11) * (sVar11 < 0x100) *
                                                                   (char)uVar12 - (0xff < sVar11))))
                                                  ))));
          uVar12 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar10[3] * 8);
          uVar16 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar8[3] * 8);
          sVar11 = (short)uVar12 + (short)uVar16;
          sVar13 = (short)((ulonglong)uVar12 >> 0x10) + (short)((ulonglong)uVar16 >> 0x10);
          sVar14 = (short)((ulonglong)uVar12 >> 0x20) + (short)((ulonglong)uVar16 >> 0x20);
          sVar15 = (short)((ulonglong)uVar12 >> 0x30) + (short)((ulonglong)uVar16 >> 0x30);
          uVar12 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar7[6] * 8);
          uVar16 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar7[7] * 8);
          uVar12 = psraw(CONCAT26(sVar15 + (short)((ulonglong)uVar12 >> 0x30),
                                  CONCAT24(sVar14 + (short)((ulonglong)uVar12 >> 0x20),
                                           CONCAT22(sVar13 + (short)((ulonglong)uVar12 >> 0x10),
                                                    sVar11 + (short)uVar12))),6);
          uVar16 = psraw(CONCAT26(sVar15 + (short)((ulonglong)uVar16 >> 0x30),
                                  CONCAT24(sVar14 + (short)((ulonglong)uVar16 >> 0x20),
                                           CONCAT22(sVar13 + (short)((ulonglong)uVar16 >> 0x10),
                                                    sVar11 + (short)uVar16))),6);
          sVar11 = (short)uVar12;
          sVar13 = (short)((ulonglong)uVar12 >> 0x10);
          sVar14 = (short)((ulonglong)uVar12 >> 0x20);
          sVar15 = (short)((ulonglong)uVar12 >> 0x30);
          sVar2 = (short)uVar16;
          sVar3 = (short)((ulonglong)uVar16 >> 0x10);
          sVar4 = (short)((ulonglong)uVar16 >> 0x20);
          sVar5 = (short)((ulonglong)uVar16 >> 0x30);
          param_1[3] = CONCAT17((0 < sVar5) * (sVar5 < 0x100) * (char)((ulonglong)uVar16 >> 0x30) -
                                (0xff < sVar5),
                                CONCAT16((0 < sVar4) * (sVar4 < 0x100) *
                                         (char)((ulonglong)uVar16 >> 0x20) - (0xff < sVar4),
                                         CONCAT15((0 < sVar3) * (sVar3 < 0x100) *
                                                  (char)((ulonglong)uVar16 >> 0x10) - (0xff < sVar3)
                                                  ,CONCAT14((0 < sVar2) * (sVar2 < 0x100) *
                                                            (char)uVar16 - (0xff < sVar2),
                                                            CONCAT13((0 < sVar15) * (sVar15 < 0x100)
                                                                     * (char)((ulonglong)uVar12 >>
                                                                             0x30) - (0xff < sVar15)
                                                                     ,CONCAT12((0 < sVar14) *
                                                                               (sVar14 < 0x100) *
                                                                               (char)((ulonglong)
                                                                                      uVar12 >> 0x20
                                                                                     ) - (0xff < 
                                                  sVar14),CONCAT11((0 < sVar13) * (sVar13 < 0x100) *
                                                                   (char)((ulonglong)uVar12 >> 0x10)
                                                                   - (0xff < sVar13),
                                                                   (0 < sVar11) * (sVar11 < 0x100) *
                                                                   (char)uVar12 - (0xff < sVar11))))
                                                  ))));
          uVar12 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar10[4] * 8);
          uVar16 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar8[4] * 8);
          sVar11 = (short)uVar12 + (short)uVar16;
          sVar13 = (short)((ulonglong)uVar12 >> 0x10) + (short)((ulonglong)uVar16 >> 0x10);
          sVar14 = (short)((ulonglong)uVar12 >> 0x20) + (short)((ulonglong)uVar16 >> 0x20);
          sVar15 = (short)((ulonglong)uVar12 >> 0x30) + (short)((ulonglong)uVar16 >> 0x30);
          uVar12 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar7[8] * 8);
          uVar16 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar7[9] * 8);
          uVar12 = psraw(CONCAT26(sVar15 + (short)((ulonglong)uVar12 >> 0x30),
                                  CONCAT24(sVar14 + (short)((ulonglong)uVar12 >> 0x20),
                                           CONCAT22(sVar13 + (short)((ulonglong)uVar12 >> 0x10),
                                                    sVar11 + (short)uVar12))),6);
          uVar16 = psraw(CONCAT26(sVar15 + (short)((ulonglong)uVar16 >> 0x30),
                                  CONCAT24(sVar14 + (short)((ulonglong)uVar16 >> 0x20),
                                           CONCAT22(sVar13 + (short)((ulonglong)uVar16 >> 0x10),
                                                    sVar11 + (short)uVar16))),6);
          sVar11 = (short)uVar12;
          sVar13 = (short)((ulonglong)uVar12 >> 0x10);
          sVar14 = (short)((ulonglong)uVar12 >> 0x20);
          sVar15 = (short)((ulonglong)uVar12 >> 0x30);
          sVar2 = (short)uVar16;
          sVar3 = (short)((ulonglong)uVar16 >> 0x10);
          sVar4 = (short)((ulonglong)uVar16 >> 0x20);
          sVar5 = (short)((ulonglong)uVar16 >> 0x30);
          param_1[4] = CONCAT17((0 < sVar5) * (sVar5 < 0x100) * (char)((ulonglong)uVar16 >> 0x30) -
                                (0xff < sVar5),
                                CONCAT16((0 < sVar4) * (sVar4 < 0x100) *
                                         (char)((ulonglong)uVar16 >> 0x20) - (0xff < sVar4),
                                         CONCAT15((0 < sVar3) * (sVar3 < 0x100) *
                                                  (char)((ulonglong)uVar16 >> 0x10) - (0xff < sVar3)
                                                  ,CONCAT14((0 < sVar2) * (sVar2 < 0x100) *
                                                            (char)uVar16 - (0xff < sVar2),
                                                            CONCAT13((0 < sVar15) * (sVar15 < 0x100)
                                                                     * (char)((ulonglong)uVar12 >>
                                                                             0x30) - (0xff < sVar15)
                                                                     ,CONCAT12((0 < sVar14) *
                                                                               (sVar14 < 0x100) *
                                                                               (char)((ulonglong)
                                                                                      uVar12 >> 0x20
                                                                                     ) - (0xff < 
                                                  sVar14),CONCAT11((0 < sVar13) * (sVar13 < 0x100) *
                                                                   (char)((ulonglong)uVar12 >> 0x10)
                                                                   - (0xff < sVar13),
                                                                   (0 < sVar11) * (sVar11 < 0x100) *
                                                                   (char)uVar12 - (0xff < sVar11))))
                                                  ))));
          uVar12 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar10[5] * 8);
          uVar16 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar8[5] * 8);
          sVar11 = (short)uVar12 + (short)uVar16;
          sVar13 = (short)((ulonglong)uVar12 >> 0x10) + (short)((ulonglong)uVar16 >> 0x10);
          sVar14 = (short)((ulonglong)uVar12 >> 0x20) + (short)((ulonglong)uVar16 >> 0x20);
          sVar15 = (short)((ulonglong)uVar12 >> 0x30) + (short)((ulonglong)uVar16 >> 0x30);
          uVar12 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar7[10] * 8);
          uVar16 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar7[0xb] * 8);
          uVar12 = psraw(CONCAT26(sVar15 + (short)((ulonglong)uVar12 >> 0x30),
                                  CONCAT24(sVar14 + (short)((ulonglong)uVar12 >> 0x20),
                                           CONCAT22(sVar13 + (short)((ulonglong)uVar12 >> 0x10),
                                                    sVar11 + (short)uVar12))),6);
          uVar16 = psraw(CONCAT26(sVar15 + (short)((ulonglong)uVar16 >> 0x30),
                                  CONCAT24(sVar14 + (short)((ulonglong)uVar16 >> 0x20),
                                           CONCAT22(sVar13 + (short)((ulonglong)uVar16 >> 0x10),
                                                    sVar11 + (short)uVar16))),6);
          sVar11 = (short)uVar12;
          sVar13 = (short)((ulonglong)uVar12 >> 0x10);
          sVar14 = (short)((ulonglong)uVar12 >> 0x20);
          sVar15 = (short)((ulonglong)uVar12 >> 0x30);
          sVar2 = (short)uVar16;
          sVar3 = (short)((ulonglong)uVar16 >> 0x10);
          sVar4 = (short)((ulonglong)uVar16 >> 0x20);
          sVar5 = (short)((ulonglong)uVar16 >> 0x30);
          param_1[5] = CONCAT17((0 < sVar5) * (sVar5 < 0x100) * (char)((ulonglong)uVar16 >> 0x30) -
                                (0xff < sVar5),
                                CONCAT16((0 < sVar4) * (sVar4 < 0x100) *
                                         (char)((ulonglong)uVar16 >> 0x20) - (0xff < sVar4),
                                         CONCAT15((0 < sVar3) * (sVar3 < 0x100) *
                                                  (char)((ulonglong)uVar16 >> 0x10) - (0xff < sVar3)
                                                  ,CONCAT14((0 < sVar2) * (sVar2 < 0x100) *
                                                            (char)uVar16 - (0xff < sVar2),
                                                            CONCAT13((0 < sVar15) * (sVar15 < 0x100)
                                                                     * (char)((ulonglong)uVar12 >>
                                                                             0x30) - (0xff < sVar15)
                                                                     ,CONCAT12((0 < sVar14) *
                                                                               (sVar14 < 0x100) *
                                                                               (char)((ulonglong)
                                                                                      uVar12 >> 0x20
                                                                                     ) - (0xff < 
                                                  sVar14),CONCAT11((0 < sVar13) * (sVar13 < 0x100) *
                                                                   (char)((ulonglong)uVar12 >> 0x10)
                                                                   - (0xff < sVar13),
                                                                   (0 < sVar11) * (sVar11 < 0x100) *
                                                                   (char)uVar12 - (0xff < sVar11))))
                                                  ))));
          uVar12 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar10[6] * 8);
          uVar16 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar8[6] * 8);
          sVar11 = (short)uVar12 + (short)uVar16;
          sVar13 = (short)((ulonglong)uVar12 >> 0x10) + (short)((ulonglong)uVar16 >> 0x10);
          sVar14 = (short)((ulonglong)uVar12 >> 0x20) + (short)((ulonglong)uVar16 >> 0x20);
          sVar15 = (short)((ulonglong)uVar12 >> 0x30) + (short)((ulonglong)uVar16 >> 0x30);
          uVar12 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar7[0xc] * 8);
          uVar16 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar7[0xd] * 8);
          uVar12 = psraw(CONCAT26(sVar15 + (short)((ulonglong)uVar12 >> 0x30),
                                  CONCAT24(sVar14 + (short)((ulonglong)uVar12 >> 0x20),
                                           CONCAT22(sVar13 + (short)((ulonglong)uVar12 >> 0x10),
                                                    sVar11 + (short)uVar12))),6);
          uVar16 = psraw(CONCAT26(sVar15 + (short)((ulonglong)uVar16 >> 0x30),
                                  CONCAT24(sVar14 + (short)((ulonglong)uVar16 >> 0x20),
                                           CONCAT22(sVar13 + (short)((ulonglong)uVar16 >> 0x10),
                                                    sVar11 + (short)uVar16))),6);
          sVar11 = (short)uVar12;
          sVar13 = (short)((ulonglong)uVar12 >> 0x10);
          sVar14 = (short)((ulonglong)uVar12 >> 0x20);
          sVar15 = (short)((ulonglong)uVar12 >> 0x30);
          sVar2 = (short)uVar16;
          sVar3 = (short)((ulonglong)uVar16 >> 0x10);
          sVar4 = (short)((ulonglong)uVar16 >> 0x20);
          sVar5 = (short)((ulonglong)uVar16 >> 0x30);
          param_1[6] = CONCAT17((0 < sVar5) * (sVar5 < 0x100) * (char)((ulonglong)uVar16 >> 0x30) -
                                (0xff < sVar5),
                                CONCAT16((0 < sVar4) * (sVar4 < 0x100) *
                                         (char)((ulonglong)uVar16 >> 0x20) - (0xff < sVar4),
                                         CONCAT15((0 < sVar3) * (sVar3 < 0x100) *
                                                  (char)((ulonglong)uVar16 >> 0x10) - (0xff < sVar3)
                                                  ,CONCAT14((0 < sVar2) * (sVar2 < 0x100) *
                                                            (char)uVar16 - (0xff < sVar2),
                                                            CONCAT13((0 < sVar15) * (sVar15 < 0x100)
                                                                     * (char)((ulonglong)uVar12 >>
                                                                             0x30) - (0xff < sVar15)
                                                                     ,CONCAT12((0 < sVar14) *
                                                                               (sVar14 < 0x100) *
                                                                               (char)((ulonglong)
                                                                                      uVar12 >> 0x20
                                                                                     ) - (0xff < 
                                                  sVar14),CONCAT11((0 < sVar13) * (sVar13 < 0x100) *
                                                                   (char)((ulonglong)uVar12 >> 0x10)
                                                                   - (0xff < sVar13),
                                                                   (0 < sVar11) * (sVar11 < 0x100) *
                                                                   (char)uVar12 - (0xff < sVar11))))
                                                  ))));
          uVar12 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar10[7] * 8);
          uVar16 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar8[7] * 8);
          sVar11 = (short)uVar12 + (short)uVar16;
          sVar13 = (short)((ulonglong)uVar12 >> 0x10) + (short)((ulonglong)uVar16 >> 0x10);
          sVar14 = (short)((ulonglong)uVar12 >> 0x20) + (short)((ulonglong)uVar16 >> 0x20);
          sVar15 = (short)((ulonglong)uVar12 >> 0x30) + (short)((ulonglong)uVar16 >> 0x30);
          uVar12 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar7[0xe] * 8);
          uVar16 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar7[0xf] * 8);
          uVar12 = psraw(CONCAT26(sVar15 + (short)((ulonglong)uVar12 >> 0x30),
                                  CONCAT24(sVar14 + (short)((ulonglong)uVar12 >> 0x20),
                                           CONCAT22(sVar13 + (short)((ulonglong)uVar12 >> 0x10),
                                                    sVar11 + (short)uVar12))),6);
          uVar16 = psraw(CONCAT26(sVar15 + (short)((ulonglong)uVar16 >> 0x30),
                                  CONCAT24(sVar14 + (short)((ulonglong)uVar16 >> 0x20),
                                           CONCAT22(sVar13 + (short)((ulonglong)uVar16 >> 0x10),
                                                    sVar11 + (short)uVar16))),6);
          sVar11 = (short)uVar12;
          sVar13 = (short)((ulonglong)uVar12 >> 0x10);
          sVar14 = (short)((ulonglong)uVar12 >> 0x20);
          sVar15 = (short)((ulonglong)uVar12 >> 0x30);
          sVar2 = (short)uVar16;
          sVar3 = (short)((ulonglong)uVar16 >> 0x10);
          sVar4 = (short)((ulonglong)uVar16 >> 0x20);
          sVar5 = (short)((ulonglong)uVar16 >> 0x30);
          param_1[7] = CONCAT17((0 < sVar5) * (sVar5 < 0x100) * (char)((ulonglong)uVar16 >> 0x30) -
                                (0xff < sVar5),
                                CONCAT16((0 < sVar4) * (sVar4 < 0x100) *
                                         (char)((ulonglong)uVar16 >> 0x20) - (0xff < sVar4),
                                         CONCAT15((0 < sVar3) * (sVar3 < 0x100) *
                                                  (char)((ulonglong)uVar16 >> 0x10) - (0xff < sVar3)
                                                  ,CONCAT14((0 < sVar2) * (sVar2 < 0x100) *
                                                            (char)uVar16 - (0xff < sVar2),
                                                            CONCAT13((0 < sVar15) * (sVar15 < 0x100)
                                                                     * (char)((ulonglong)uVar12 >>
                                                                             0x30) - (0xff < sVar15)
                                                                     ,CONCAT12((0 < sVar14) *
                                                                               (sVar14 < 0x100) *
                                                                               (char)((ulonglong)
                                                                                      uVar12 >> 0x20
                                                                                     ) - (0xff < 
                                                  sVar14),CONCAT11((0 < sVar13) * (sVar13 < 0x100) *
                                                                   (char)((ulonglong)uVar12 >> 0x10)
                                                                   - (0xff < sVar13),
                                                                   (0 < sVar11) * (sVar11 < 0x100) *
                                                                   (char)uVar12 - (0xff < sVar11))))
                                                  ))));
          pbVar7 = pbVar7 + 0x10;
          pbVar10 = pbVar10 + 8;
          pbVar8 = pbVar8 + 8;
          param_1 = param_1 + 8;
          local_10 = local_10 + 8;
        } while (local_10 < iVar9 + -7);
      }
      if (local_10 < iVar9) {
        local_10 = iVar9 - local_10;
        do {
          uVar12 = *(undefined8 *)(&DAT_10032b70 + (uint)*pbVar10 * 8);
          uVar16 = *(undefined8 *)(&DAT_10032370 + (uint)*pbVar8 * 8);
          sVar11 = (short)uVar12 + (short)uVar16;
          sVar13 = (short)((ulonglong)uVar12 >> 0x10) + (short)((ulonglong)uVar16 >> 0x10);
          sVar14 = (short)((ulonglong)uVar12 >> 0x20) + (short)((ulonglong)uVar16 >> 0x20);
          sVar15 = (short)((ulonglong)uVar12 >> 0x30) + (short)((ulonglong)uVar16 >> 0x30);
          uVar12 = *(undefined8 *)(&DAT_10033370 + (uint)*pbVar7 * 8);
          uVar16 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar7[1] * 8);
          uVar12 = psraw(CONCAT26(sVar15 + (short)((ulonglong)uVar12 >> 0x30),
                                  CONCAT24(sVar14 + (short)((ulonglong)uVar12 >> 0x20),
                                           CONCAT22(sVar13 + (short)((ulonglong)uVar12 >> 0x10),
                                                    sVar11 + (short)uVar12))),6);
          uVar16 = psraw(CONCAT26(sVar15 + (short)((ulonglong)uVar16 >> 0x30),
                                  CONCAT24(sVar14 + (short)((ulonglong)uVar16 >> 0x20),
                                           CONCAT22(sVar13 + (short)((ulonglong)uVar16 >> 0x10),
                                                    sVar11 + (short)uVar16))),6);
          sVar11 = (short)uVar12;
          sVar13 = (short)((ulonglong)uVar12 >> 0x10);
          sVar14 = (short)((ulonglong)uVar12 >> 0x20);
          sVar15 = (short)((ulonglong)uVar12 >> 0x30);
          sVar2 = (short)uVar16;
          sVar3 = (short)((ulonglong)uVar16 >> 0x10);
          sVar4 = (short)((ulonglong)uVar16 >> 0x20);
          sVar5 = (short)((ulonglong)uVar16 >> 0x30);
          *param_1 = CONCAT17((0 < sVar5) * (sVar5 < 0x100) * (char)((ulonglong)uVar16 >> 0x30) -
                              (0xff < sVar5),
                              CONCAT16((0 < sVar4) * (sVar4 < 0x100) *
                                       (char)((ulonglong)uVar16 >> 0x20) - (0xff < sVar4),
                                       CONCAT15((0 < sVar3) * (sVar3 < 0x100) *
                                                (char)((ulonglong)uVar16 >> 0x10) - (0xff < sVar3),
                                                CONCAT14((0 < sVar2) * (sVar2 < 0x100) *
                                                         (char)uVar16 - (0xff < sVar2),
                                                         CONCAT13((0 < sVar15) * (sVar15 < 0x100) *
                                                                  (char)((ulonglong)uVar12 >> 0x30)
                                                                  - (0xff < sVar15),
                                                                  CONCAT12((0 < sVar14) *
                                                                           (sVar14 < 0x100) *
                                                                           (char)((ulonglong)uVar12
                                                                                 >> 0x20) -
                                                                           (0xff < sVar14),
                                                                           CONCAT11((0 < sVar13) *
                                                                                    (sVar13 < 0x100)
                                                                                    * (char)((
                                                  ulonglong)uVar12 >> 0x10) - (0xff < sVar13),
                                                  (0 < sVar11) * (sVar11 < 0x100) * (char)uVar12 -
                                                  (0xff < sVar11))))))));
          pbVar7 = pbVar7 + 2;
          pbVar10 = pbVar10 + 1;
          pbVar8 = pbVar8 + 1;
          param_1 = param_1 + 1;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
      pbVar7 = pbVar7 + (param_3 - param_5);
      pbVar10 = pbVar10 + iVar1;
      pbVar8 = pbVar8 + iVar1;
      param_1 = (undefined8 *)((int)param_1 + param_2 + param_5 * -4);
    } while (iVar6 < param_6);
  }
  return;
}


