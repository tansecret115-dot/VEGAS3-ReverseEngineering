/* Module: mcmpgdec.dll
   Function: FUN_10004bb4
   Address: 10004bb4
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_10004bb4(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            uint param_8,uint param_9,int param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  
  puVar6 = (undefined8 *)
           ((((int)param_9 >> 1) + param_7) * param_3 + param_1 + param_6 + ((int)param_8 >> 1));
  puVar7 = (undefined8 *)(param_6 + param_7 * param_3 + param_2);
  iVar8 = param_4 >> 4;
  if ((param_8 & 1) == 0) {
    if ((param_9 & 1) == 0) {
      if (param_10 == 0) {
        if (iVar8 == 0) {
          if (0 < param_5) {
            do {
              *puVar7 = *puVar6;
              puVar6 = (undefined8 *)((int)puVar6 + param_3);
              puVar7 = (undefined8 *)((int)puVar7 + param_3);
              param_5 = param_5 + -1;
            } while (param_5 != 0);
          }
        }
        else if (0 < param_5) {
          do {
            uVar1 = puVar6[1];
            *puVar7 = *puVar6;
            puVar7[1] = uVar1;
            puVar6 = (undefined8 *)((int)puVar6 + param_3);
            puVar7 = (undefined8 *)((int)puVar7 + param_3);
            param_5 = param_5 + -1;
          } while (param_5 != 0);
        }
      }
      else if (0 < param_5) {
        do {
          uVar1 = *puVar7;
          uVar2 = *puVar6;
          uVar12 = (ushort)(((uint7)(byte)((ulonglong)uVar1 >> 0x18) << 0x30) >> 0x28);
          uVar13 = (ushort)(((uint7)(byte)((ulonglong)uVar2 >> 0x18) << 0x30) >> 0x28);
          uVar9 = (ushort)((ushort)(byte)uVar1 + ((ushort)uVar2 & 0xff) + 1) >> 1;
          uVar10 = (ushort)((ushort)(byte)((ulonglong)uVar1 >> 8) +
                            (ushort)(byte)((ulonglong)uVar2 >> 8) + 1) >> 1;
          uVar11 = (ushort)((short)CONCAT21(uVar12,(char)((ulonglong)uVar1 >> 0x10)) +
                            (short)CONCAT21(uVar13,(char)((ulonglong)uVar2 >> 0x10)) + 1U) >> 1;
          uVar12 = (ushort)((uVar12 >> 8) + (uVar13 >> 8) + 1) >> 1;
          uVar13 = (ushort)((byte)((ulonglong)uVar1 >> 0x20) + 1 +
                           (ushort)(byte)((ulonglong)uVar2 >> 0x20)) >> 1;
          uVar14 = (ushort)((byte)((ulonglong)uVar1 >> 0x28) + 1 +
                           (ushort)(byte)((ulonglong)uVar2 >> 0x28)) >> 1;
          uVar15 = (ushort)((byte)((ulonglong)uVar1 >> 0x30) + 1 +
                           (ushort)(byte)((ulonglong)uVar2 >> 0x30)) >> 1;
          uVar16 = (ushort)((byte)((ulonglong)uVar1 >> 0x38) + 1 +
                           (ushort)(byte)((ulonglong)uVar2 >> 0x38)) >> 1;
          *puVar7 = CONCAT17((uVar16 != 0) * (uVar16 < 0x100) * (char)uVar16 - (0xff < uVar16),
                             CONCAT16((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 -
                                      (0xff < uVar15),
                                      CONCAT15((uVar14 != 0) * (uVar14 < 0x100) * (char)uVar14 -
                                               (0xff < uVar14),
                                               CONCAT14((uVar13 != 0) * (uVar13 < 0x100) *
                                                        (char)uVar13 - (0xff < uVar13),
                                                        CONCAT13((uVar12 != 0) * (uVar12 < 0x100) *
                                                                 (char)uVar12 - (0xff < uVar12),
                                                                 CONCAT12((uVar11 != 0) *
                                                                          (uVar11 < 0x100) *
                                                                          (char)uVar11 -
                                                                          (0xff < uVar11),
                                                                          CONCAT11((uVar10 != 0) *
                                                                                   (uVar10 < 0x100)
                                                                                   * (char)uVar10 -
                                                                                   (0xff < uVar10),
                                                                                   (uVar9 != 0) *
                                                                                   (uVar9 < 0x100) *
                                                                                   (char)uVar9 -
                                                                                   (0xff < uVar9))))
                                                       ))));
          if (iVar8 != 0) {
            uVar1 = puVar7[1];
            uVar2 = puVar6[1];
            uVar12 = (ushort)(((uint7)(byte)((ulonglong)uVar1 >> 0x18) << 0x30) >> 0x28);
            uVar13 = (ushort)(((uint7)(byte)((ulonglong)uVar2 >> 0x18) << 0x30) >> 0x28);
            uVar9 = (ushort)((ushort)(byte)uVar1 + (ushort)(byte)uVar2 + 1) >> 1;
            uVar10 = (ushort)((ushort)(byte)((ulonglong)uVar1 >> 8) +
                              (ushort)(byte)((ulonglong)uVar2 >> 8) + 1) >> 1;
            uVar11 = (ushort)((short)CONCAT21(uVar12,(char)((ulonglong)uVar1 >> 0x10)) +
                              (short)CONCAT21(uVar13,(char)((ulonglong)uVar2 >> 0x10)) + 1U) >> 1;
            uVar12 = (ushort)((uVar12 >> 8) + (uVar13 >> 8) + 1) >> 1;
            uVar13 = (ushort)((byte)((ulonglong)uVar1 >> 0x20) + 1 +
                             (ushort)(byte)((ulonglong)uVar2 >> 0x20)) >> 1;
            uVar14 = (ushort)((byte)((ulonglong)uVar1 >> 0x28) + 1 +
                             (ushort)(byte)((ulonglong)uVar2 >> 0x28)) >> 1;
            uVar15 = (ushort)((byte)((ulonglong)uVar1 >> 0x30) + 1 +
                             (ushort)(byte)((ulonglong)uVar2 >> 0x30)) >> 1;
            uVar16 = (ushort)((byte)((ulonglong)uVar1 >> 0x38) + 1 +
                             (ushort)(byte)((ulonglong)uVar2 >> 0x38)) >> 1;
            puVar7[1] = CONCAT17((uVar16 != 0) * (uVar16 < 0x100) * (char)uVar16 - (0xff < uVar16),
                                 CONCAT16((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 -
                                          (0xff < uVar15),
                                          CONCAT15((uVar14 != 0) * (uVar14 < 0x100) * (char)uVar14 -
                                                   (0xff < uVar14),
                                                   CONCAT14((uVar13 != 0) * (uVar13 < 0x100) *
                                                            (char)uVar13 - (0xff < uVar13),
                                                            CONCAT13((uVar12 != 0) *
                                                                     (uVar12 < 0x100) * (char)uVar12
                                                                     - (0xff < uVar12),
                                                                     CONCAT12((uVar11 != 0) *
                                                                              (uVar11 < 0x100) *
                                                                              (char)uVar11 -
                                                                              (0xff < uVar11),
                                                                              CONCAT11((uVar10 != 0)
                                                                                       * (uVar10 < 
                                                  0x100) * (char)uVar10 - (0xff < uVar10),
                                                  (uVar9 != 0) * (uVar9 < 0x100) * (char)uVar9 -
                                                  (0xff < uVar9))))))));
          }
          puVar6 = (undefined8 *)((int)puVar6 + param_3);
          puVar7 = (undefined8 *)((int)puVar7 + param_3);
          param_5 = param_5 + -1;
        } while (param_5 != 0);
      }
    }
    else if (param_10 == 0) {
      if (0 < param_5) {
        do {
          uVar1 = *puVar6;
          uVar2 = *(undefined8 *)(param_3 + (int)puVar6);
          uVar12 = (ushort)(((uint7)(byte)((ulonglong)uVar1 >> 0x18) << 0x30) >> 0x28);
          uVar13 = (ushort)(((uint7)(byte)((ulonglong)uVar2 >> 0x18) << 0x30) >> 0x28);
          uVar9 = (ushort)((ushort)(byte)uVar1 + (ushort)(byte)uVar2 + 1) >> 1;
          uVar10 = (ushort)((ushort)(byte)((ulonglong)uVar1 >> 8) +
                            (ushort)(byte)((ulonglong)uVar2 >> 8) + 1) >> 1;
          uVar11 = (ushort)((short)CONCAT21(uVar12,(char)((ulonglong)uVar1 >> 0x10)) +
                            (short)CONCAT21(uVar13,(char)((ulonglong)uVar2 >> 0x10)) + 1U) >> 1;
          uVar12 = (ushort)((uVar12 >> 8) + (uVar13 >> 8) + 1) >> 1;
          uVar13 = (ushort)((byte)((ulonglong)uVar1 >> 0x20) + 1 +
                           (ushort)(byte)((ulonglong)uVar2 >> 0x20)) >> 1;
          uVar14 = (ushort)((byte)((ulonglong)uVar1 >> 0x28) + 1 +
                           (ushort)(byte)((ulonglong)uVar2 >> 0x28)) >> 1;
          uVar15 = (ushort)((byte)((ulonglong)uVar1 >> 0x30) + 1 +
                           (ushort)(byte)((ulonglong)uVar2 >> 0x30)) >> 1;
          uVar16 = (ushort)((byte)((ulonglong)uVar1 >> 0x38) + 1 +
                           (ushort)(byte)((ulonglong)uVar2 >> 0x38)) >> 1;
          *puVar7 = CONCAT17((uVar16 != 0) * (uVar16 < 0x100) * (char)uVar16 - (0xff < uVar16),
                             CONCAT16((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 -
                                      (0xff < uVar15),
                                      CONCAT15((uVar14 != 0) * (uVar14 < 0x100) * (char)uVar14 -
                                               (0xff < uVar14),
                                               CONCAT14((uVar13 != 0) * (uVar13 < 0x100) *
                                                        (char)uVar13 - (0xff < uVar13),
                                                        CONCAT13((uVar12 != 0) * (uVar12 < 0x100) *
                                                                 (char)uVar12 - (0xff < uVar12),
                                                                 CONCAT12((uVar11 != 0) *
                                                                          (uVar11 < 0x100) *
                                                                          (char)uVar11 -
                                                                          (0xff < uVar11),
                                                                          CONCAT11((uVar10 != 0) *
                                                                                   (uVar10 < 0x100)
                                                                                   * (char)uVar10 -
                                                                                   (0xff < uVar10),
                                                                                   (uVar9 != 0) *
                                                                                   (uVar9 < 0x100) *
                                                                                   (char)uVar9 -
                                                                                   (0xff < uVar9))))
                                                       ))));
          if (iVar8 != 0) {
            uVar1 = puVar6[1];
            uVar2 = *(undefined8 *)((int)puVar6 + param_3 + 8);
            uVar12 = (ushort)(((uint7)(byte)((ulonglong)uVar1 >> 0x18) << 0x30) >> 0x28);
            uVar13 = (ushort)(((uint7)(byte)((ulonglong)uVar2 >> 0x18) << 0x30) >> 0x28);
            uVar9 = (ushort)((ushort)(byte)uVar1 + (ushort)(byte)uVar2 + 1) >> 1;
            uVar10 = (ushort)((ushort)(byte)((ulonglong)uVar1 >> 8) +
                              (ushort)(byte)((ulonglong)uVar2 >> 8) + 1) >> 1;
            uVar11 = (ushort)((short)CONCAT21(uVar12,(char)((ulonglong)uVar1 >> 0x10)) +
                              (short)CONCAT21(uVar13,(char)((ulonglong)uVar2 >> 0x10)) + 1U) >> 1;
            uVar12 = (ushort)((uVar12 >> 8) + (uVar13 >> 8) + 1) >> 1;
            uVar13 = (ushort)((byte)((ulonglong)uVar1 >> 0x20) + 1 +
                             (ushort)(byte)((ulonglong)uVar2 >> 0x20)) >> 1;
            uVar14 = (ushort)((byte)((ulonglong)uVar1 >> 0x28) + 1 +
                             (ushort)(byte)((ulonglong)uVar2 >> 0x28)) >> 1;
            uVar15 = (ushort)((byte)((ulonglong)uVar1 >> 0x30) + 1 +
                             (ushort)(byte)((ulonglong)uVar2 >> 0x30)) >> 1;
            uVar16 = (ushort)((byte)((ulonglong)uVar1 >> 0x38) + 1 +
                             (ushort)(byte)((ulonglong)uVar2 >> 0x38)) >> 1;
            puVar7[1] = CONCAT17((uVar16 != 0) * (uVar16 < 0x100) * (char)uVar16 - (0xff < uVar16),
                                 CONCAT16((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 -
                                          (0xff < uVar15),
                                          CONCAT15((uVar14 != 0) * (uVar14 < 0x100) * (char)uVar14 -
                                                   (0xff < uVar14),
                                                   CONCAT14((uVar13 != 0) * (uVar13 < 0x100) *
                                                            (char)uVar13 - (0xff < uVar13),
                                                            CONCAT13((uVar12 != 0) *
                                                                     (uVar12 < 0x100) * (char)uVar12
                                                                     - (0xff < uVar12),
                                                                     CONCAT12((uVar11 != 0) *
                                                                              (uVar11 < 0x100) *
                                                                              (char)uVar11 -
                                                                              (0xff < uVar11),
                                                                              CONCAT11((uVar10 != 0)
                                                                                       * (uVar10 < 
                                                  0x100) * (char)uVar10 - (0xff < uVar10),
                                                  (uVar9 != 0) * (uVar9 < 0x100) * (char)uVar9 -
                                                  (0xff < uVar9))))))));
          }
          puVar6 = (undefined8 *)((int)puVar6 + param_3);
          puVar7 = (undefined8 *)((int)puVar7 + param_3);
          param_5 = param_5 + -1;
        } while (param_5 != 0);
      }
    }
    else if (0 < param_5) {
      do {
        uVar1 = *puVar6;
        uVar2 = *(undefined8 *)(param_3 + (int)puVar6);
        uVar12 = (ushort)(((uint7)(byte)((ulonglong)uVar1 >> 0x18) << 0x30) >> 0x28);
        uVar13 = (ushort)(((uint7)(byte)((ulonglong)uVar2 >> 0x18) << 0x30) >> 0x28);
        uVar3 = *puVar7;
        uVar9 = (ushort)(((uint7)(byte)((ulonglong)uVar3 >> 0x18) << 0x30) >> 0x28);
        uVar10 = (ushort)(((ushort)((ushort)(byte)uVar1 + (ushort)(byte)uVar2 + 1) >> 1) +
                          (ushort)(byte)uVar3 + 1) >> 1;
        uVar11 = (ushort)(((ushort)((ushort)(byte)((ulonglong)uVar1 >> 8) +
                                    (ushort)(byte)((ulonglong)uVar2 >> 8) + 1) >> 1) +
                          (ushort)(byte)((ulonglong)uVar3 >> 8) + 1) >> 1;
        uVar14 = (ushort)(((ushort)((short)CONCAT21(uVar12,(char)((ulonglong)uVar1 >> 0x10)) +
                                    (short)CONCAT21(uVar13,(char)((ulonglong)uVar2 >> 0x10)) + 1U)
                          >> 1) + (short)CONCAT21(uVar9,(char)((ulonglong)uVar3 >> 0x10)) + 1) >> 1;
        uVar12 = (ushort)(((ushort)((uVar12 >> 8) + (uVar13 >> 8) + 1) >> 1) + (uVar9 >> 8) + 1) >>
                 1;
        uVar13 = (ushort)(((ushort)((ushort)(byte)((ulonglong)uVar1 >> 0x20) +
                                    (ushort)(byte)((ulonglong)uVar2 >> 0x20) + 1) >> 1) +
                          (ushort)(byte)((ulonglong)uVar3 >> 0x20) + 1) >> 1;
        uVar9 = (ushort)(((ushort)((ushort)(byte)((ulonglong)uVar1 >> 0x28) +
                                   (ushort)(byte)((ulonglong)uVar2 >> 0x28) + 1) >> 1) +
                         (ushort)(byte)((ulonglong)uVar3 >> 0x28) + 1) >> 1;
        uVar15 = (ushort)(((ushort)((ushort)(byte)((ulonglong)uVar1 >> 0x30) +
                                    (ushort)(byte)((ulonglong)uVar2 >> 0x30) + 1) >> 1) +
                          (ushort)(byte)((ulonglong)uVar3 >> 0x30) + 1) >> 1;
        uVar16 = (ushort)(((ushort)((ushort)(byte)((ulonglong)uVar1 >> 0x38) +
                                    (ushort)(byte)((ulonglong)uVar2 >> 0x38) + 1) >> 1) +
                          (ushort)(byte)((ulonglong)uVar3 >> 0x38) + 1) >> 1;
        *puVar7 = CONCAT17((uVar16 != 0) * (uVar16 < 0x100) * (char)uVar16 - (0xff < uVar16),
                           CONCAT16((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 -
                                    (0xff < uVar15),
                                    CONCAT15((uVar9 != 0) * (uVar9 < 0x100) * (char)uVar9 -
                                             (0xff < uVar9),
                                             CONCAT14((uVar13 != 0) * (uVar13 < 0x100) *
                                                      (char)uVar13 - (0xff < uVar13),
                                                      CONCAT13((uVar12 != 0) * (uVar12 < 0x100) *
                                                               (char)uVar12 - (0xff < uVar12),
                                                               CONCAT12((uVar14 != 0) *
                                                                        (uVar14 < 0x100) *
                                                                        (char)uVar14 -
                                                                        (0xff < uVar14),
                                                                        CONCAT11((uVar11 != 0) *
                                                                                 (uVar11 < 0x100) *
                                                                                 (char)uVar11 -
                                                                                 (0xff < uVar11),
                                                                                 (uVar10 != 0) *
                                                                                 (uVar10 < 0x100) *
                                                                                 (char)uVar10 -
                                                                                 (0xff < uVar10)))))
                                            )));
        if (iVar8 != 0) {
          uVar1 = puVar6[1];
          uVar2 = *(undefined8 *)((int)puVar6 + param_3 + 8);
          uVar12 = (ushort)(((uint7)(byte)((ulonglong)uVar1 >> 0x18) << 0x30) >> 0x28);
          uVar13 = (ushort)(((uint7)(byte)((ulonglong)uVar2 >> 0x18) << 0x30) >> 0x28);
          uVar3 = puVar7[1];
          uVar9 = (ushort)(((uint7)(byte)((ulonglong)uVar3 >> 0x18) << 0x30) >> 0x28);
          uVar10 = (ushort)(((ushort)((ushort)(byte)uVar1 + (ushort)(byte)uVar2 + 1) >> 1) +
                            (ushort)(byte)uVar3 + 1) >> 1;
          uVar11 = (ushort)(((ushort)((ushort)(byte)((ulonglong)uVar1 >> 8) +
                                      (ushort)(byte)((ulonglong)uVar2 >> 8) + 1) >> 1) +
                            (ushort)(byte)((ulonglong)uVar3 >> 8) + 1) >> 1;
          uVar14 = (ushort)(((ushort)((short)CONCAT21(uVar12,(char)((ulonglong)uVar1 >> 0x10)) +
                                      (short)CONCAT21(uVar13,(char)((ulonglong)uVar2 >> 0x10)) + 1U)
                            >> 1) + (short)CONCAT21(uVar9,(char)((ulonglong)uVar3 >> 0x10)) + 1) >>
                   1;
          uVar12 = (ushort)(((ushort)((uVar12 >> 8) + (uVar13 >> 8) + 1) >> 1) + (uVar9 >> 8) + 1)
                   >> 1;
          uVar13 = (ushort)(((ushort)((ushort)(byte)((ulonglong)uVar1 >> 0x20) +
                                      (ushort)(byte)((ulonglong)uVar2 >> 0x20) + 1) >> 1) +
                            (ushort)(byte)((ulonglong)uVar3 >> 0x20) + 1) >> 1;
          uVar9 = (ushort)(((ushort)((ushort)(byte)((ulonglong)uVar1 >> 0x28) +
                                     (ushort)(byte)((ulonglong)uVar2 >> 0x28) + 1) >> 1) +
                           (ushort)(byte)((ulonglong)uVar3 >> 0x28) + 1) >> 1;
          uVar15 = (ushort)(((ushort)((ushort)(byte)((ulonglong)uVar1 >> 0x30) +
                                      (ushort)(byte)((ulonglong)uVar2 >> 0x30) + 1) >> 1) +
                            (ushort)(byte)((ulonglong)uVar3 >> 0x30) + 1) >> 1;
          uVar16 = (ushort)(((ushort)((ushort)(byte)((ulonglong)uVar1 >> 0x38) +
                                      (ushort)(byte)((ulonglong)uVar2 >> 0x38) + 1) >> 1) +
                            (ushort)(byte)((ulonglong)uVar3 >> 0x38) + 1) >> 1;
          puVar7[1] = CONCAT17((uVar16 != 0) * (uVar16 < 0x100) * (char)uVar16 - (0xff < uVar16),
                               CONCAT16((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 -
                                        (0xff < uVar15),
                                        CONCAT15((uVar9 != 0) * (uVar9 < 0x100) * (char)uVar9 -
                                                 (0xff < uVar9),
                                                 CONCAT14((uVar13 != 0) * (uVar13 < 0x100) *
                                                          (char)uVar13 - (0xff < uVar13),
                                                          CONCAT13((uVar12 != 0) * (uVar12 < 0x100)
                                                                   * (char)uVar12 - (0xff < uVar12),
                                                                   CONCAT12((uVar14 != 0) *
                                                                            (uVar14 < 0x100) *
                                                                            (char)uVar14 -
                                                                            (0xff < uVar14),
                                                                            CONCAT11((uVar11 != 0) *
                                                                                     (uVar11 < 0x100
                                                                                     ) * (char)
                                                  uVar11 - (0xff < uVar11),
                                                  (uVar10 != 0) * (uVar10 < 0x100) * (char)uVar10 -
                                                  (0xff < uVar10))))))));
        }
        puVar6 = (undefined8 *)((int)puVar6 + param_3);
        puVar7 = (undefined8 *)((int)puVar7 + param_3);
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
  }
  else if ((param_9 & 1) == 0) {
    if (param_10 == 0) {
      if (0 < param_5) {
        do {
          uVar1 = *puVar6;
          uVar2 = *(undefined8 *)((int)puVar6 + 1);
          uVar12 = (ushort)(((uint7)(byte)((ulonglong)uVar1 >> 0x18) << 0x30) >> 0x28);
          uVar13 = (ushort)(((uint7)(byte)((ulonglong)uVar2 >> 0x18) << 0x30) >> 0x28);
          uVar9 = (ushort)((byte)uVar1 + 1 + (ushort)(byte)uVar2) >> 1;
          uVar10 = (ushort)((byte)((ulonglong)uVar1 >> 8) + 1 +
                           (ushort)(byte)((ulonglong)uVar2 >> 8)) >> 1;
          uVar11 = (ushort)((short)CONCAT21(uVar12,(char)((ulonglong)uVar1 >> 0x10)) + 1 +
                           (short)CONCAT21(uVar13,(char)((ulonglong)uVar2 >> 0x10))) >> 1;
          uVar12 = (ushort)((uVar12 >> 8) + 1 + (uVar13 >> 8)) >> 1;
          uVar13 = (ushort)((byte)((ulonglong)uVar1 >> 0x20) + 1 +
                           (ushort)(byte)((ulonglong)uVar2 >> 0x20)) >> 1;
          uVar14 = (ushort)((byte)((ulonglong)uVar1 >> 0x28) + 1 +
                           (ushort)(byte)((ulonglong)uVar2 >> 0x28)) >> 1;
          uVar15 = (ushort)((byte)((ulonglong)uVar1 >> 0x30) + 1 +
                           (ushort)(byte)((ulonglong)uVar2 >> 0x30)) >> 1;
          uVar16 = (ushort)((byte)((ulonglong)uVar1 >> 0x38) + 1 +
                           (ushort)(byte)((ulonglong)uVar2 >> 0x38)) >> 1;
          *puVar7 = CONCAT17((uVar16 != 0) * (uVar16 < 0x100) * (char)uVar16 - (0xff < uVar16),
                             CONCAT16((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 -
                                      (0xff < uVar15),
                                      CONCAT15((uVar14 != 0) * (uVar14 < 0x100) * (char)uVar14 -
                                               (0xff < uVar14),
                                               CONCAT14((uVar13 != 0) * (uVar13 < 0x100) *
                                                        (char)uVar13 - (0xff < uVar13),
                                                        CONCAT13((uVar12 != 0) * (uVar12 < 0x100) *
                                                                 (char)uVar12 - (0xff < uVar12),
                                                                 CONCAT12((uVar11 != 0) *
                                                                          (uVar11 < 0x100) *
                                                                          (char)uVar11 -
                                                                          (0xff < uVar11),
                                                                          CONCAT11((uVar10 != 0) *
                                                                                   (uVar10 < 0x100)
                                                                                   * (char)uVar10 -
                                                                                   (0xff < uVar10),
                                                                                   (uVar9 != 0) *
                                                                                   (uVar9 < 0x100) *
                                                                                   (char)uVar9 -
                                                                                   (0xff < uVar9))))
                                                       ))));
          if (iVar8 != 0) {
            uVar1 = puVar6[1];
            uVar2 = *(undefined8 *)((int)puVar6 + 9);
            uVar12 = (ushort)(((uint7)(byte)((ulonglong)uVar1 >> 0x18) << 0x30) >> 0x28);
            uVar13 = (ushort)(((uint7)(byte)((ulonglong)uVar2 >> 0x18) << 0x30) >> 0x28);
            uVar9 = (ushort)((byte)uVar1 + 1 + (ushort)(byte)uVar2) >> 1;
            uVar10 = (ushort)((byte)((ulonglong)uVar1 >> 8) + 1 +
                             (ushort)(byte)((ulonglong)uVar2 >> 8)) >> 1;
            uVar11 = (ushort)((short)CONCAT21(uVar12,(char)((ulonglong)uVar1 >> 0x10)) + 1 +
                             (short)CONCAT21(uVar13,(char)((ulonglong)uVar2 >> 0x10))) >> 1;
            uVar12 = (ushort)((uVar12 >> 8) + 1 + (uVar13 >> 8)) >> 1;
            uVar13 = (ushort)((byte)((ulonglong)uVar1 >> 0x20) + 1 +
                             (ushort)(byte)((ulonglong)uVar2 >> 0x20)) >> 1;
            uVar14 = (ushort)((byte)((ulonglong)uVar1 >> 0x28) + 1 +
                             (ushort)(byte)((ulonglong)uVar2 >> 0x28)) >> 1;
            uVar15 = (ushort)((byte)((ulonglong)uVar1 >> 0x30) + 1 +
                             (ushort)(byte)((ulonglong)uVar2 >> 0x30)) >> 1;
            uVar16 = (ushort)((byte)((ulonglong)uVar1 >> 0x38) + 1 +
                             (ushort)(byte)((ulonglong)uVar2 >> 0x38)) >> 1;
            puVar7[1] = CONCAT17((uVar16 != 0) * (uVar16 < 0x100) * (char)uVar16 - (0xff < uVar16),
                                 CONCAT16((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 -
                                          (0xff < uVar15),
                                          CONCAT15((uVar14 != 0) * (uVar14 < 0x100) * (char)uVar14 -
                                                   (0xff < uVar14),
                                                   CONCAT14((uVar13 != 0) * (uVar13 < 0x100) *
                                                            (char)uVar13 - (0xff < uVar13),
                                                            CONCAT13((uVar12 != 0) *
                                                                     (uVar12 < 0x100) * (char)uVar12
                                                                     - (0xff < uVar12),
                                                                     CONCAT12((uVar11 != 0) *
                                                                              (uVar11 < 0x100) *
                                                                              (char)uVar11 -
                                                                              (0xff < uVar11),
                                                                              CONCAT11((uVar10 != 0)
                                                                                       * (uVar10 < 
                                                  0x100) * (char)uVar10 - (0xff < uVar10),
                                                  (uVar9 != 0) * (uVar9 < 0x100) * (char)uVar9 -
                                                  (0xff < uVar9))))))));
          }
          puVar6 = (undefined8 *)((int)puVar6 + param_3);
          puVar7 = (undefined8 *)((int)puVar7 + param_3);
          param_5 = param_5 + -1;
        } while (param_5 != 0);
      }
    }
    else if (0 < param_5) {
      do {
        uVar1 = *puVar6;
        uVar2 = *(undefined8 *)((int)puVar6 + 1);
        uVar12 = (ushort)(((uint7)(byte)((ulonglong)uVar1 >> 0x18) << 0x30) >> 0x28);
        uVar13 = (ushort)(((uint7)(byte)((ulonglong)uVar2 >> 0x18) << 0x30) >> 0x28);
        uVar3 = *puVar7;
        uVar9 = (ushort)(((uint7)(byte)((ulonglong)uVar3 >> 0x18) << 0x30) >> 0x28);
        uVar10 = (ushort)(((ushort)((ushort)(byte)uVar1 + (ushort)(byte)uVar2 + 1) >> 1) +
                          (ushort)(byte)uVar3 + 1) >> 1;
        uVar11 = (ushort)(((ushort)((ushort)(byte)((ulonglong)uVar1 >> 8) +
                                    (ushort)(byte)((ulonglong)uVar2 >> 8) + 1) >> 1) +
                          (ushort)(byte)((ulonglong)uVar3 >> 8) + 1) >> 1;
        uVar14 = (ushort)(((ushort)((short)CONCAT21(uVar12,(char)((ulonglong)uVar1 >> 0x10)) +
                                    (short)CONCAT21(uVar13,(char)((ulonglong)uVar2 >> 0x10)) + 1U)
                          >> 1) + (short)CONCAT21(uVar9,(char)((ulonglong)uVar3 >> 0x10)) + 1) >> 1;
        uVar12 = (ushort)(((ushort)((uVar12 >> 8) + (uVar13 >> 8) + 1) >> 1) + (uVar9 >> 8) + 1) >>
                 1;
        uVar13 = (ushort)(((ushort)((byte)((ulonglong)uVar1 >> 0x20) + 1 +
                                   (ushort)(byte)((ulonglong)uVar2 >> 0x20)) >> 1) +
                          (ushort)(byte)((ulonglong)uVar3 >> 0x20) + 1) >> 1;
        uVar9 = (ushort)(((ushort)((byte)((ulonglong)uVar1 >> 0x28) + 1 +
                                  (ushort)(byte)((ulonglong)uVar2 >> 0x28)) >> 1) +
                         (ushort)(byte)((ulonglong)uVar3 >> 0x28) + 1) >> 1;
        uVar15 = (ushort)(((ushort)((byte)((ulonglong)uVar1 >> 0x30) + 1 +
                                   (ushort)(byte)((ulonglong)uVar2 >> 0x30)) >> 1) +
                          (ushort)(byte)((ulonglong)uVar3 >> 0x30) + 1) >> 1;
        uVar16 = (ushort)(((ushort)((byte)((ulonglong)uVar1 >> 0x38) + 1 +
                                   (ushort)(byte)((ulonglong)uVar2 >> 0x38)) >> 1) +
                          (ushort)(byte)((ulonglong)uVar3 >> 0x38) + 1) >> 1;
        *puVar7 = CONCAT17((uVar16 != 0) * (uVar16 < 0x100) * (char)uVar16 - (0xff < uVar16),
                           CONCAT16((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 -
                                    (0xff < uVar15),
                                    CONCAT15((uVar9 != 0) * (uVar9 < 0x100) * (char)uVar9 -
                                             (0xff < uVar9),
                                             CONCAT14((uVar13 != 0) * (uVar13 < 0x100) *
                                                      (char)uVar13 - (0xff < uVar13),
                                                      CONCAT13((uVar12 != 0) * (uVar12 < 0x100) *
                                                               (char)uVar12 - (0xff < uVar12),
                                                               CONCAT12((uVar14 != 0) *
                                                                        (uVar14 < 0x100) *
                                                                        (char)uVar14 -
                                                                        (0xff < uVar14),
                                                                        CONCAT11((uVar11 != 0) *
                                                                                 (uVar11 < 0x100) *
                                                                                 (char)uVar11 -
                                                                                 (0xff < uVar11),
                                                                                 (uVar10 != 0) *
                                                                                 (uVar10 < 0x100) *
                                                                                 (char)uVar10 -
                                                                                 (0xff < uVar10)))))
                                            )));
        if (iVar8 != 0) {
          uVar1 = puVar6[1];
          uVar2 = *(undefined8 *)((int)puVar6 + 9);
          uVar12 = (ushort)(((uint7)(byte)((ulonglong)uVar1 >> 0x18) << 0x30) >> 0x28);
          uVar13 = (ushort)(((uint7)(byte)((ulonglong)uVar2 >> 0x18) << 0x30) >> 0x28);
          uVar3 = puVar7[1];
          uVar9 = (ushort)(((uint7)(byte)((ulonglong)uVar3 >> 0x18) << 0x30) >> 0x28);
          uVar10 = (ushort)(((ushort)((ushort)(byte)uVar1 + (ushort)(byte)uVar2 + 1) >> 1) +
                            (ushort)(byte)uVar3 + 1) >> 1;
          uVar11 = (ushort)(((ushort)((ushort)(byte)((ulonglong)uVar1 >> 8) +
                                      (ushort)(byte)((ulonglong)uVar2 >> 8) + 1) >> 1) +
                            (ushort)(byte)((ulonglong)uVar3 >> 8) + 1) >> 1;
          uVar14 = (ushort)(((ushort)((short)CONCAT21(uVar12,(char)((ulonglong)uVar1 >> 0x10)) +
                                      (short)CONCAT21(uVar13,(char)((ulonglong)uVar2 >> 0x10)) + 1U)
                            >> 1) + (short)CONCAT21(uVar9,(char)((ulonglong)uVar3 >> 0x10)) + 1) >>
                   1;
          uVar12 = (ushort)(((ushort)((uVar12 >> 8) + (uVar13 >> 8) + 1) >> 1) + (uVar9 >> 8) + 1)
                   >> 1;
          uVar13 = (ushort)(((ushort)((byte)((ulonglong)uVar1 >> 0x20) + 1 +
                                     (ushort)(byte)((ulonglong)uVar2 >> 0x20)) >> 1) +
                            (ushort)(byte)((ulonglong)uVar3 >> 0x20) + 1) >> 1;
          uVar9 = (ushort)(((ushort)((byte)((ulonglong)uVar1 >> 0x28) + 1 +
                                    (ushort)(byte)((ulonglong)uVar2 >> 0x28)) >> 1) +
                           (ushort)(byte)((ulonglong)uVar3 >> 0x28) + 1) >> 1;
          uVar15 = (ushort)(((ushort)((byte)((ulonglong)uVar1 >> 0x30) + 1 +
                                     (ushort)(byte)((ulonglong)uVar2 >> 0x30)) >> 1) +
                            (ushort)(byte)((ulonglong)uVar3 >> 0x30) + 1) >> 1;
          uVar16 = (ushort)(((ushort)((byte)((ulonglong)uVar1 >> 0x38) + 1 +
                                     (ushort)(byte)((ulonglong)uVar2 >> 0x38)) >> 1) +
                            (ushort)(byte)((ulonglong)uVar3 >> 0x38) + 1) >> 1;
          puVar7[1] = CONCAT17((uVar16 != 0) * (uVar16 < 0x100) * (char)uVar16 - (0xff < uVar16),
                               CONCAT16((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 -
                                        (0xff < uVar15),
                                        CONCAT15((uVar9 != 0) * (uVar9 < 0x100) * (char)uVar9 -
                                                 (0xff < uVar9),
                                                 CONCAT14((uVar13 != 0) * (uVar13 < 0x100) *
                                                          (char)uVar13 - (0xff < uVar13),
                                                          CONCAT13((uVar12 != 0) * (uVar12 < 0x100)
                                                                   * (char)uVar12 - (0xff < uVar12),
                                                                   CONCAT12((uVar14 != 0) *
                                                                            (uVar14 < 0x100) *
                                                                            (char)uVar14 -
                                                                            (0xff < uVar14),
                                                                            CONCAT11((uVar11 != 0) *
                                                                                     (uVar11 < 0x100
                                                                                     ) * (char)
                                                  uVar11 - (0xff < uVar11),
                                                  (uVar10 != 0) * (uVar10 < 0x100) * (char)uVar10 -
                                                  (0xff < uVar10))))))));
        }
        puVar6 = (undefined8 *)((int)puVar6 + param_3);
        puVar7 = (undefined8 *)((int)puVar7 + param_3);
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
  }
  else if (param_10 == 0) {
    if (0 < param_5) {
      do {
        uVar1 = *puVar6;
        uVar2 = *(undefined8 *)(param_3 + (int)puVar6);
        uVar12 = (ushort)(((uint7)(byte)((ulonglong)uVar1 >> 0x18) << 0x30) >> 0x28);
        uVar13 = (ushort)(((uint7)(byte)((ulonglong)uVar2 >> 0x18) << 0x30) >> 0x28);
        uVar3 = *(undefined8 *)((int)puVar6 + 1);
        uVar9 = (ushort)(((uint7)(byte)((ulonglong)uVar3 >> 0x18) << 0x30) >> 0x28);
        uVar4 = *(undefined8 *)((int)puVar6 + param_3 + 1);
        uVar10 = (ushort)(((uint7)(byte)((ulonglong)uVar4 >> 0x18) << 0x30) >> 0x28);
        uVar11 = (ushort)(((ushort)uVar1 & 0xff) + ((ushort)uVar2 & 0xff) + 2 +
                          ((ushort)uVar3 & 0xff) + ((ushort)uVar4 & 0xff)) >> 2;
        uVar14 = (ushort)((ushort)(byte)((ulonglong)uVar1 >> 8) +
                          (ushort)(byte)((ulonglong)uVar2 >> 8) + 2 +
                          (ushort)(byte)((ulonglong)uVar3 >> 8) +
                         (ushort)(byte)((ulonglong)uVar4 >> 8)) >> 2;
        uVar15 = (ushort)((short)CONCAT21(uVar12,(char)((ulonglong)uVar1 >> 0x10)) +
                          (short)CONCAT21(uVar13,(char)((ulonglong)uVar2 >> 0x10)) + 2 +
                          (short)CONCAT21(uVar9,(char)((ulonglong)uVar3 >> 0x10)) +
                         (short)CONCAT21(uVar10,(char)((ulonglong)uVar4 >> 0x10))) >> 2;
        uVar12 = (ushort)((uVar12 >> 8) + (uVar13 >> 8) + 2 + (uVar9 >> 8) + (uVar10 >> 8)) >> 2;
        uVar13 = (ushort)((ushort)(byte)((ulonglong)uVar1 >> 0x20) +
                          (ushort)(byte)((ulonglong)uVar2 >> 0x20) +
                          (ushort)(byte)((ulonglong)uVar3 >> 0x20) + 2 +
                         (ushort)(byte)((ulonglong)uVar4 >> 0x20)) >> 2;
        uVar9 = (ushort)((ushort)(byte)((ulonglong)uVar1 >> 0x28) +
                         (ushort)(byte)((ulonglong)uVar2 >> 0x28) +
                         (ushort)(byte)((ulonglong)uVar3 >> 0x28) + 2 +
                        (ushort)(byte)((ulonglong)uVar4 >> 0x28)) >> 2;
        uVar10 = (ushort)((ushort)(byte)((ulonglong)uVar1 >> 0x30) +
                          (ushort)(byte)((ulonglong)uVar2 >> 0x30) +
                          (ushort)(byte)((ulonglong)uVar3 >> 0x30) + 2 +
                         (ushort)(byte)((ulonglong)uVar4 >> 0x30)) >> 2;
        uVar16 = (ushort)((ushort)(byte)((ulonglong)uVar1 >> 0x38) +
                          (ushort)(byte)((ulonglong)uVar2 >> 0x38) +
                          (ushort)(byte)((ulonglong)uVar3 >> 0x38) + 2 +
                         (ushort)(byte)((ulonglong)uVar4 >> 0x38)) >> 2;
        *puVar7 = CONCAT17((uVar16 != 0) * (uVar16 < 0x100) * (char)uVar16 - (0xff < uVar16),
                           CONCAT16((uVar10 != 0) * (uVar10 < 0x100) * (char)uVar10 -
                                    (0xff < uVar10),
                                    CONCAT15((uVar9 != 0) * (uVar9 < 0x100) * (char)uVar9 -
                                             (0xff < uVar9),
                                             CONCAT14((uVar13 != 0) * (uVar13 < 0x100) *
                                                      (char)uVar13 - (0xff < uVar13),
                                                      CONCAT13((uVar12 != 0) * (uVar12 < 0x100) *
                                                               (char)uVar12 - (0xff < uVar12),
                                                               CONCAT12((uVar15 != 0) *
                                                                        (uVar15 < 0x100) *
                                                                        (char)uVar15 -
                                                                        (0xff < uVar15),
                                                                        CONCAT11((uVar14 != 0) *
                                                                                 (uVar14 < 0x100) *
                                                                                 (char)uVar14 -
                                                                                 (0xff < uVar14),
                                                                                 (uVar11 != 0) *
                                                                                 (uVar11 < 0x100) *
                                                                                 (char)uVar11 -
                                                                                 (0xff < uVar11)))))
                                            )));
        if (iVar8 != 0) {
          uVar1 = puVar6[1];
          uVar2 = *(undefined8 *)((int)puVar6 + param_3 + 8);
          uVar12 = (ushort)(((uint7)(byte)((ulonglong)uVar1 >> 0x18) << 0x30) >> 0x28);
          uVar13 = (ushort)(((uint7)(byte)((ulonglong)uVar2 >> 0x18) << 0x30) >> 0x28);
          uVar3 = *(undefined8 *)((int)puVar6 + 9);
          uVar9 = (ushort)(((uint7)(byte)((ulonglong)uVar3 >> 0x18) << 0x30) >> 0x28);
          uVar4 = *(undefined8 *)((int)puVar6 + param_3 + 9);
          uVar10 = (ushort)(((uint7)(byte)((ulonglong)uVar4 >> 0x18) << 0x30) >> 0x28);
          uVar11 = (ushort)(((ushort)uVar1 & 0xff) + ((ushort)uVar2 & 0xff) + 2 +
                            ((ushort)uVar3 & 0xff) + ((ushort)uVar4 & 0xff)) >> 2;
          uVar14 = (ushort)((ushort)(byte)((ulonglong)uVar1 >> 8) +
                            (ushort)(byte)((ulonglong)uVar2 >> 8) + 2 +
                            (ushort)(byte)((ulonglong)uVar3 >> 8) +
                           (ushort)(byte)((ulonglong)uVar4 >> 8)) >> 2;
          uVar15 = (ushort)((short)CONCAT21(uVar12,(char)((ulonglong)uVar1 >> 0x10)) +
                            (short)CONCAT21(uVar13,(char)((ulonglong)uVar2 >> 0x10)) + 2 +
                            (short)CONCAT21(uVar9,(char)((ulonglong)uVar3 >> 0x10)) +
                           (short)CONCAT21(uVar10,(char)((ulonglong)uVar4 >> 0x10))) >> 2;
          uVar12 = (ushort)((uVar12 >> 8) + (uVar13 >> 8) + 2 + (uVar9 >> 8) + (uVar10 >> 8)) >> 2;
          uVar13 = (ushort)((ushort)(byte)((ulonglong)uVar1 >> 0x20) +
                            (ushort)(byte)((ulonglong)uVar2 >> 0x20) +
                            (ushort)(byte)((ulonglong)uVar3 >> 0x20) + 2 +
                           (ushort)(byte)((ulonglong)uVar4 >> 0x20)) >> 2;
          uVar9 = (ushort)((ushort)(byte)((ulonglong)uVar1 >> 0x28) +
                           (ushort)(byte)((ulonglong)uVar2 >> 0x28) +
                           (ushort)(byte)((ulonglong)uVar3 >> 0x28) + 2 +
                          (ushort)(byte)((ulonglong)uVar4 >> 0x28)) >> 2;
          uVar10 = (ushort)((ushort)(byte)((ulonglong)uVar1 >> 0x30) +
                            (ushort)(byte)((ulonglong)uVar2 >> 0x30) +
                            (ushort)(byte)((ulonglong)uVar3 >> 0x30) + 2 +
                           (ushort)(byte)((ulonglong)uVar4 >> 0x30)) >> 2;
          uVar16 = (ushort)((ushort)(byte)((ulonglong)uVar1 >> 0x38) +
                            (ushort)(byte)((ulonglong)uVar2 >> 0x38) +
                            (ushort)(byte)((ulonglong)uVar3 >> 0x38) + 2 +
                           (ushort)(byte)((ulonglong)uVar4 >> 0x38)) >> 2;
          puVar7[1] = CONCAT17((uVar16 != 0) * (uVar16 < 0x100) * (char)uVar16 - (0xff < uVar16),
                               CONCAT16((uVar10 != 0) * (uVar10 < 0x100) * (char)uVar10 -
                                        (0xff < uVar10),
                                        CONCAT15((uVar9 != 0) * (uVar9 < 0x100) * (char)uVar9 -
                                                 (0xff < uVar9),
                                                 CONCAT14((uVar13 != 0) * (uVar13 < 0x100) *
                                                          (char)uVar13 - (0xff < uVar13),
                                                          CONCAT13((uVar12 != 0) * (uVar12 < 0x100)
                                                                   * (char)uVar12 - (0xff < uVar12),
                                                                   CONCAT12((uVar15 != 0) *
                                                                            (uVar15 < 0x100) *
                                                                            (char)uVar15 -
                                                                            (0xff < uVar15),
                                                                            CONCAT11((uVar14 != 0) *
                                                                                     (uVar14 < 0x100
                                                                                     ) * (char)
                                                  uVar14 - (0xff < uVar14),
                                                  (uVar11 != 0) * (uVar11 < 0x100) * (char)uVar11 -
                                                  (0xff < uVar11))))))));
        }
        puVar6 = (undefined8 *)((int)puVar6 + param_3);
        puVar7 = (undefined8 *)((int)puVar7 + param_3);
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
  }
  else if (0 < param_5) {
    do {
      uVar1 = *puVar6;
      uVar2 = *(undefined8 *)(param_3 + (int)puVar6);
      uVar12 = (ushort)(((uint7)(byte)((ulonglong)uVar1 >> 0x18) << 0x30) >> 0x28);
      uVar13 = (ushort)(((uint7)(byte)((ulonglong)uVar2 >> 0x18) << 0x30) >> 0x28);
      uVar3 = *(undefined8 *)((int)puVar6 + 1);
      uVar9 = (ushort)(((uint7)(byte)((ulonglong)uVar3 >> 0x18) << 0x30) >> 0x28);
      uVar4 = *(undefined8 *)((int)puVar6 + param_3 + 1);
      uVar10 = (ushort)(((uint7)(byte)((ulonglong)uVar4 >> 0x18) << 0x30) >> 0x28);
      uVar5 = *puVar7;
      uVar11 = (ushort)(((uint7)(byte)((ulonglong)uVar5 >> 0x18) << 0x30) >> 0x28);
      uVar14 = (ushort)(((ushort)(((ushort)uVar1 & 0xff) + ((ushort)uVar2 & 0xff) +
                                  ((ushort)uVar3 & 0xff) + ((ushort)uVar4 & 0xff) + 2) >> 2) + 1 +
                       ((ushort)uVar5 & 0xff)) >> 1;
      uVar15 = (ushort)(((ushort)((ushort)(byte)((ulonglong)uVar1 >> 8) +
                                  (ushort)(byte)((ulonglong)uVar2 >> 8) +
                                  (ushort)(byte)((ulonglong)uVar3 >> 8) +
                                  (ushort)(byte)((ulonglong)uVar4 >> 8) + 2) >> 2) + 1 +
                       (ushort)(byte)((ulonglong)uVar5 >> 8)) >> 1;
      uVar16 = (ushort)(((ushort)((short)CONCAT21(uVar12,(char)((ulonglong)uVar1 >> 0x10)) +
                                  (short)CONCAT21(uVar13,(char)((ulonglong)uVar2 >> 0x10)) +
                                  (short)CONCAT21(uVar9,(char)((ulonglong)uVar3 >> 0x10)) +
                                  (short)CONCAT21(uVar10,(char)((ulonglong)uVar4 >> 0x10)) + 2U) >>
                        2) + 1 + (short)CONCAT21(uVar11,(char)((ulonglong)uVar5 >> 0x10))) >> 1;
      uVar12 = (ushort)(((ushort)((uVar12 >> 8) + (uVar13 >> 8) + (uVar9 >> 8) + (uVar10 >> 8) + 2)
                        >> 2) + 1 + (uVar11 >> 8)) >> 1;
      uVar13 = (ushort)(((ushort)((ushort)(byte)((ulonglong)uVar1 >> 0x20) +
                                  (ushort)(byte)((ulonglong)uVar2 >> 0x20) +
                                  (ushort)(byte)((ulonglong)uVar3 >> 0x20) +
                                  (ushort)(byte)((ulonglong)uVar4 >> 0x20) + 2) >> 2) +
                        (ushort)(byte)((ulonglong)uVar5 >> 0x20) + 1) >> 1;
      uVar9 = (ushort)(((ushort)((ushort)(byte)((ulonglong)uVar1 >> 0x28) +
                                 (ushort)(byte)((ulonglong)uVar2 >> 0x28) +
                                 (ushort)(byte)((ulonglong)uVar3 >> 0x28) +
                                 (ushort)(byte)((ulonglong)uVar4 >> 0x28) + 2) >> 2) +
                       (ushort)(byte)((ulonglong)uVar5 >> 0x28) + 1) >> 1;
      uVar10 = (ushort)(((ushort)((ushort)(byte)((ulonglong)uVar1 >> 0x30) +
                                  (ushort)(byte)((ulonglong)uVar2 >> 0x30) +
                                  (ushort)(byte)((ulonglong)uVar3 >> 0x30) +
                                  (ushort)(byte)((ulonglong)uVar4 >> 0x30) + 2) >> 2) +
                        (ushort)(byte)((ulonglong)uVar5 >> 0x30) + 1) >> 1;
      uVar11 = (ushort)(((ushort)((ushort)(byte)((ulonglong)uVar1 >> 0x38) +
                                  (ushort)(byte)((ulonglong)uVar2 >> 0x38) +
                                  (ushort)(byte)((ulonglong)uVar3 >> 0x38) +
                                  (ushort)(byte)((ulonglong)uVar4 >> 0x38) + 2) >> 2) +
                        (ushort)(byte)((ulonglong)uVar5 >> 0x38) + 1) >> 1;
      *puVar7 = CONCAT17((uVar11 != 0) * (uVar11 < 0x100) * (char)uVar11 - (0xff < uVar11),
                         CONCAT16((uVar10 != 0) * (uVar10 < 0x100) * (char)uVar10 - (0xff < uVar10),
                                  CONCAT15((uVar9 != 0) * (uVar9 < 0x100) * (char)uVar9 -
                                           (0xff < uVar9),
                                           CONCAT14((uVar13 != 0) * (uVar13 < 0x100) * (char)uVar13
                                                    - (0xff < uVar13),
                                                    CONCAT13((uVar12 != 0) * (uVar12 < 0x100) *
                                                             (char)uVar12 - (0xff < uVar12),
                                                             CONCAT12((uVar16 != 0) *
                                                                      (uVar16 < 0x100) *
                                                                      (char)uVar16 - (0xff < uVar16)
                                                                      ,CONCAT11((uVar15 != 0) *
                                                                                (uVar15 < 0x100) *
                                                                                (char)uVar15 -
                                                                                (0xff < uVar15),
                                                                                (uVar14 != 0) *
                                                                                (uVar14 < 0x100) *
                                                                                (char)uVar14 -
                                                                                (0xff < uVar14))))))
                                 ));
      if (iVar8 != 0) {
        uVar1 = puVar6[1];
        uVar2 = *(undefined8 *)((int)puVar6 + param_3 + 8);
        uVar12 = (ushort)(((uint7)(byte)((ulonglong)uVar1 >> 0x18) << 0x30) >> 0x28);
        uVar13 = (ushort)(((uint7)(byte)((ulonglong)uVar2 >> 0x18) << 0x30) >> 0x28);
        uVar3 = *(undefined8 *)((int)puVar6 + 9);
        uVar9 = (ushort)(((uint7)(byte)((ulonglong)uVar3 >> 0x18) << 0x30) >> 0x28);
        uVar4 = *(undefined8 *)((int)puVar6 + param_3 + 9);
        uVar10 = (ushort)(((uint7)(byte)((ulonglong)uVar4 >> 0x18) << 0x30) >> 0x28);
        uVar5 = puVar7[1];
        uVar11 = (ushort)(((uint7)(byte)((ulonglong)uVar5 >> 0x18) << 0x30) >> 0x28);
        uVar14 = (ushort)(((ushort)(((ushort)uVar1 & 0xff) + ((ushort)uVar2 & 0xff) +
                                    ((ushort)uVar3 & 0xff) + (ushort)(byte)uVar4 + 2) >> 2) + 1 +
                         (ushort)(byte)uVar5) >> 1;
        uVar15 = (ushort)(((ushort)((ushort)(byte)((ulonglong)uVar1 >> 8) +
                                    (ushort)(byte)((ulonglong)uVar2 >> 8) +
                                    (ushort)(byte)((ulonglong)uVar3 >> 8) +
                                    (ushort)(byte)((ulonglong)uVar4 >> 8) + 2) >> 2) + 1 +
                         (ushort)(byte)((ulonglong)uVar5 >> 8)) >> 1;
        uVar16 = (ushort)(((ushort)((short)CONCAT21(uVar12,(char)((ulonglong)uVar1 >> 0x10)) +
                                    (short)CONCAT21(uVar13,(char)((ulonglong)uVar2 >> 0x10)) +
                                    (short)CONCAT21(uVar9,(char)((ulonglong)uVar3 >> 0x10)) +
                                    (short)CONCAT21(uVar10,(char)((ulonglong)uVar4 >> 0x10)) + 2U)
                          >> 2) + 1 + (short)CONCAT21(uVar11,(char)((ulonglong)uVar5 >> 0x10))) >> 1
        ;
        uVar12 = (ushort)(((ushort)((uVar12 >> 8) + (uVar13 >> 8) + (uVar9 >> 8) + (uVar10 >> 8) + 2
                                   ) >> 2) + 1 + (uVar11 >> 8)) >> 1;
        uVar13 = (ushort)(((ushort)((ushort)(byte)((ulonglong)uVar1 >> 0x20) +
                                    (ushort)(byte)((ulonglong)uVar2 >> 0x20) +
                                    (ushort)(byte)((ulonglong)uVar3 >> 0x20) +
                                    (ushort)(byte)((ulonglong)uVar4 >> 0x20) + 2) >> 2) +
                          (ushort)(byte)((ulonglong)uVar5 >> 0x20) + 1) >> 1;
        uVar9 = (ushort)(((ushort)((ushort)(byte)((ulonglong)uVar1 >> 0x28) +
                                   (ushort)(byte)((ulonglong)uVar2 >> 0x28) +
                                   (ushort)(byte)((ulonglong)uVar3 >> 0x28) +
                                   (ushort)(byte)((ulonglong)uVar4 >> 0x28) + 2) >> 2) +
                         (ushort)(byte)((ulonglong)uVar5 >> 0x28) + 1) >> 1;
        uVar10 = (ushort)(((ushort)((ushort)(byte)((ulonglong)uVar1 >> 0x30) +
                                    (ushort)(byte)((ulonglong)uVar2 >> 0x30) +
                                    (ushort)(byte)((ulonglong)uVar3 >> 0x30) +
                                    (ushort)(byte)((ulonglong)uVar4 >> 0x30) + 2) >> 2) +
                          (ushort)(byte)((ulonglong)uVar5 >> 0x30) + 1) >> 1;
        uVar11 = (ushort)(((ushort)((ushort)(byte)((ulonglong)uVar1 >> 0x38) +
                                    (ushort)(byte)((ulonglong)uVar2 >> 0x38) +
                                    (ushort)(byte)((ulonglong)uVar3 >> 0x38) +
                                    (ushort)(byte)((ulonglong)uVar4 >> 0x38) + 2) >> 2) +
                          (ushort)(byte)((ulonglong)uVar5 >> 0x38) + 1) >> 1;
        puVar7[1] = CONCAT17((uVar11 != 0) * (uVar11 < 0x100) * (char)uVar11 - (0xff < uVar11),
                             CONCAT16((uVar10 != 0) * (uVar10 < 0x100) * (char)uVar10 -
                                      (0xff < uVar10),
                                      CONCAT15((uVar9 != 0) * (uVar9 < 0x100) * (char)uVar9 -
                                               (0xff < uVar9),
                                               CONCAT14((uVar13 != 0) * (uVar13 < 0x100) *
                                                        (char)uVar13 - (0xff < uVar13),
                                                        CONCAT13((uVar12 != 0) * (uVar12 < 0x100) *
                                                                 (char)uVar12 - (0xff < uVar12),
                                                                 CONCAT12((uVar16 != 0) *
                                                                          (uVar16 < 0x100) *
                                                                          (char)uVar16 -
                                                                          (0xff < uVar16),
                                                                          CONCAT11((uVar15 != 0) *
                                                                                   (uVar15 < 0x100)
                                                                                   * (char)uVar15 -
                                                                                   (0xff < uVar15),
                                                                                   (uVar14 != 0) *
                                                                                   (uVar14 < 0x100)
                                                                                   * (char)uVar14 -
                                                                                   (0xff < uVar14)))
                                                                )))));
      }
      puVar6 = (undefined8 *)((int)puVar6 + param_3);
      puVar7 = (undefined8 *)((int)puVar7 + param_3);
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}


