/* Module: mpgvout.003
   Function: FUN_100020d4
   Address: 100020d4
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_100020d4(undefined8 *param_1,undefined8 *param_2,int param_3,int param_4,int param_5,int param_6
            ,int param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  ushort uVar6;
  ushort uVar9;
  ushort uVar10;
  ulonglong uVar7;
  undefined8 uVar8;
  ushort uVar11;
  ushort uVar12;
  ushort uVar14;
  ushort uVar15;
  ulonglong uVar13;
  ushort uVar16;
  ulonglong uVar17;
  
  iVar5 = 0;
  if (param_6 != 0) {
    if (param_4 == 0) {
      if (param_5 == 0) {
        iVar5 = 0;
        do {
          uVar7 = psubusb(*param_1,*param_2);
          uVar13 = psubusb(*param_2,*param_1);
          uVar7 = uVar7 | uVar13;
          uVar13 = psubusb(param_1[1],param_2[1]);
          uVar17 = psubusb(param_2[1],param_1[1]);
          uVar11 = (ushort)(((uint7)(byte)(uVar7 >> 0x18) << 0x30) >> 0x28);
          uVar13 = uVar13 | uVar17;
          uVar12 = (ushort)(((uint7)(byte)(uVar13 >> 0x18) << 0x30) >> 0x28);
          iVar5 = iVar5 + (uint)(ushort)((ushort)(byte)uVar7 + (ushort)(byte)(uVar7 >> 0x20) +
                                         ((ushort)uVar13 & 0xff) + (ushort)(byte)(uVar13 >> 0x20)) +
                          (uint)(ushort)((short)CONCAT21(uVar11,(char)(uVar7 >> 0x10)) +
                                         (ushort)(byte)(uVar7 >> 0x30) +
                                         (short)CONCAT21(uVar12,(char)(uVar13 >> 0x10)) +
                                        (ushort)(byte)(uVar13 >> 0x30)) +
                  (uint)(ushort)((ushort)(byte)(uVar7 >> 8) + (ushort)(byte)(uVar7 >> 0x28) +
                                 (ushort)(byte)(uVar13 >> 8) + (ushort)(byte)(uVar13 >> 0x28)) +
                  (uint)(ushort)((uVar11 >> 8) + (ushort)(byte)(uVar7 >> 0x38) + (uVar12 >> 8) +
                                (ushort)(byte)(uVar13 >> 0x38));
          if (param_7 <= iVar5) {
            return;
          }
          param_1 = (undefined8 *)((int)param_1 + param_3);
          param_2 = (undefined8 *)((int)param_2 + param_3);
          param_6 = param_6 + -1;
        } while (param_6 != 0);
      }
      else {
        iVar5 = 0;
        do {
          puVar1 = (undefined8 *)(param_3 + (int)param_1);
          uVar8 = *param_1;
          uVar2 = *puVar1;
          uVar11 = (ushort)(((uint7)(byte)((ulonglong)uVar8 >> 0x18) << 0x30) >> 0x28);
          uVar12 = (ushort)(((uint7)(byte)((ulonglong)uVar2 >> 0x18) << 0x30) >> 0x28);
          uVar6 = (ushort)((ushort)(byte)uVar8 + (ushort)(byte)uVar2 + 1) >> 1;
          uVar9 = (ushort)((ushort)(byte)((ulonglong)uVar8 >> 8) +
                           (ushort)(byte)((ulonglong)uVar2 >> 8) + 1) >> 1;
          uVar10 = (ushort)((short)CONCAT21(uVar11,(char)((ulonglong)uVar8 >> 0x10)) +
                            (short)CONCAT21(uVar12,(char)((ulonglong)uVar2 >> 0x10)) + 1U) >> 1;
          uVar11 = (ushort)((uVar11 >> 8) + (uVar12 >> 8) + 1) >> 1;
          uVar12 = (ushort)((byte)((ulonglong)uVar8 >> 0x20) + 1 +
                           (ushort)(byte)((ulonglong)uVar2 >> 0x20)) >> 1;
          uVar14 = (ushort)((byte)((ulonglong)uVar8 >> 0x28) + 1 +
                           (ushort)(byte)((ulonglong)uVar2 >> 0x28)) >> 1;
          uVar15 = (ushort)((byte)((ulonglong)uVar8 >> 0x30) + 1 +
                           (ushort)(byte)((ulonglong)uVar2 >> 0x30)) >> 1;
          uVar16 = (ushort)((byte)((ulonglong)uVar8 >> 0x38) + 1 +
                           (ushort)(byte)((ulonglong)uVar2 >> 0x38)) >> 1;
          uVar8 = CONCAT17((uVar16 != 0) * (uVar16 < 0x100) * (char)uVar16 - (0xff < uVar16),
                           CONCAT16((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 -
                                    (0xff < uVar15),
                                    CONCAT15((uVar14 != 0) * (uVar14 < 0x100) * (char)uVar14 -
                                             (0xff < uVar14),
                                             CONCAT14((uVar12 != 0) * (uVar12 < 0x100) *
                                                      (char)uVar12 - (0xff < uVar12),
                                                      CONCAT13((uVar11 != 0) * (uVar11 < 0x100) *
                                                               (char)uVar11 - (0xff < uVar11),
                                                               CONCAT12((uVar10 != 0) *
                                                                        (uVar10 < 0x100) *
                                                                        (char)uVar10 -
                                                                        (0xff < uVar10),
                                                                        CONCAT11((uVar9 != 0) *
                                                                                 (uVar9 < 0x100) *
                                                                                 (char)uVar9 -
                                                                                 (0xff < uVar9),
                                                                                 (uVar6 != 0) *
                                                                                 (uVar6 < 0x100) *
                                                                                 (char)uVar6 -
                                                                                 (0xff < uVar6))))))
                                   ));
          uVar7 = psubusb(uVar8,*param_2);
          uVar13 = psubusb(*param_2,uVar8);
          uVar7 = uVar7 | uVar13;
          uVar8 = param_1[1];
          uVar2 = puVar1[1];
          uVar11 = (ushort)(((uint7)(byte)((ulonglong)uVar8 >> 0x18) << 0x30) >> 0x28);
          uVar12 = (ushort)(((uint7)(byte)((ulonglong)uVar2 >> 0x18) << 0x30) >> 0x28);
          uVar6 = (ushort)((ushort)(byte)uVar8 + (ushort)(byte)uVar2 + 1) >> 1;
          uVar9 = (ushort)((ushort)(byte)((ulonglong)uVar8 >> 8) +
                           (ushort)(byte)((ulonglong)uVar2 >> 8) + 1) >> 1;
          uVar10 = (ushort)((short)CONCAT21(uVar11,(char)((ulonglong)uVar8 >> 0x10)) +
                            (short)CONCAT21(uVar12,(char)((ulonglong)uVar2 >> 0x10)) + 1U) >> 1;
          uVar11 = (ushort)((uVar11 >> 8) + (uVar12 >> 8) + 1) >> 1;
          uVar12 = (ushort)((byte)((ulonglong)uVar8 >> 0x20) + 1 +
                           (ushort)(byte)((ulonglong)uVar2 >> 0x20)) >> 1;
          uVar14 = (ushort)((byte)((ulonglong)uVar8 >> 0x28) + 1 +
                           (ushort)(byte)((ulonglong)uVar2 >> 0x28)) >> 1;
          uVar15 = (ushort)((byte)((ulonglong)uVar8 >> 0x30) + 1 +
                           (ushort)(byte)((ulonglong)uVar2 >> 0x30)) >> 1;
          uVar16 = (ushort)((byte)((ulonglong)uVar8 >> 0x38) + 1 +
                           (ushort)(byte)((ulonglong)uVar2 >> 0x38)) >> 1;
          uVar8 = CONCAT17((uVar16 != 0) * (uVar16 < 0x100) * (char)uVar16 - (0xff < uVar16),
                           CONCAT16((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 -
                                    (0xff < uVar15),
                                    CONCAT15((uVar14 != 0) * (uVar14 < 0x100) * (char)uVar14 -
                                             (0xff < uVar14),
                                             CONCAT14((uVar12 != 0) * (uVar12 < 0x100) *
                                                      (char)uVar12 - (0xff < uVar12),
                                                      CONCAT13((uVar11 != 0) * (uVar11 < 0x100) *
                                                               (char)uVar11 - (0xff < uVar11),
                                                               CONCAT12((uVar10 != 0) *
                                                                        (uVar10 < 0x100) *
                                                                        (char)uVar10 -
                                                                        (0xff < uVar10),
                                                                        CONCAT11((uVar9 != 0) *
                                                                                 (uVar9 < 0x100) *
                                                                                 (char)uVar9 -
                                                                                 (0xff < uVar9),
                                                                                 (uVar6 != 0) *
                                                                                 (uVar6 < 0x100) *
                                                                                 (char)uVar6 -
                                                                                 (0xff < uVar6))))))
                                   ));
          uVar13 = psubusb(uVar8,param_2[1]);
          uVar17 = psubusb(param_2[1],uVar8);
          uVar13 = uVar13 | uVar17;
          uVar11 = (ushort)(((uint7)(byte)(uVar7 >> 0x18) << 0x30) >> 0x28);
          uVar12 = (ushort)(((uint7)(byte)(uVar13 >> 0x18) << 0x30) >> 0x28);
          iVar5 = iVar5 + (uint)(ushort)((ushort)(byte)uVar7 + (ushort)(byte)uVar13 +
                                         (ushort)(byte)(uVar7 >> 0x20) +
                                        (ushort)(byte)(uVar13 >> 0x20)) +
                          (uint)(ushort)((short)CONCAT21(uVar11,(char)(uVar7 >> 0x10)) +
                                         (short)CONCAT21(uVar12,(char)(uVar13 >> 0x10)) +
                                         (ushort)(byte)(uVar7 >> 0x30) +
                                        (ushort)(byte)(uVar13 >> 0x30)) +
                  (uint)(ushort)((ushort)(byte)(uVar7 >> 8) + (ushort)(byte)(uVar13 >> 8) +
                                 (ushort)(byte)(uVar7 >> 0x28) + (ushort)(byte)(uVar13 >> 0x28)) +
                  (uint)(ushort)((uVar11 >> 8) + (uVar12 >> 8) + (ushort)(byte)(uVar7 >> 0x38) +
                                (ushort)(byte)(uVar13 >> 0x38));
          if (param_7 <= iVar5) {
            return;
          }
          param_2 = (undefined8 *)((int)param_2 + param_3);
          param_6 = param_6 + -1;
          param_1 = puVar1;
        } while (param_6 != 0);
      }
    }
    else if (param_5 == 0) {
      iVar5 = 0;
      do {
        uVar8 = *param_1;
        uVar2 = *(undefined8 *)((int)param_1 + 1);
        uVar11 = (ushort)(((uint7)(byte)((ulonglong)uVar8 >> 0x18) << 0x30) >> 0x28);
        uVar12 = (ushort)(((uint7)(byte)((ulonglong)uVar2 >> 0x18) << 0x30) >> 0x28);
        uVar6 = (ushort)((ushort)(byte)uVar8 + (ushort)(byte)uVar2 + 1) >> 1;
        uVar9 = (ushort)((ushort)(byte)((ulonglong)uVar8 >> 8) +
                         (ushort)(byte)((ulonglong)uVar2 >> 8) + 1) >> 1;
        uVar10 = (ushort)((short)CONCAT21(uVar11,(char)((ulonglong)uVar8 >> 0x10)) +
                          (short)CONCAT21(uVar12,(char)((ulonglong)uVar2 >> 0x10)) + 1U) >> 1;
        uVar11 = (ushort)((uVar11 >> 8) + (uVar12 >> 8) + 1) >> 1;
        uVar12 = (ushort)((byte)((ulonglong)uVar8 >> 0x20) + 1 +
                         (ushort)(byte)((ulonglong)uVar2 >> 0x20)) >> 1;
        uVar14 = (ushort)((byte)((ulonglong)uVar8 >> 0x28) + 1 +
                         (ushort)(byte)((ulonglong)uVar2 >> 0x28)) >> 1;
        uVar15 = (ushort)((byte)((ulonglong)uVar8 >> 0x30) + 1 +
                         (ushort)(byte)((ulonglong)uVar2 >> 0x30)) >> 1;
        uVar16 = (ushort)((byte)((ulonglong)uVar8 >> 0x38) + 1 +
                         (ushort)(byte)((ulonglong)uVar2 >> 0x38)) >> 1;
        uVar8 = CONCAT17((uVar16 != 0) * (uVar16 < 0x100) * (char)uVar16 - (0xff < uVar16),
                         CONCAT16((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 - (0xff < uVar15),
                                  CONCAT15((uVar14 != 0) * (uVar14 < 0x100) * (char)uVar14 -
                                           (0xff < uVar14),
                                           CONCAT14((uVar12 != 0) * (uVar12 < 0x100) * (char)uVar12
                                                    - (0xff < uVar12),
                                                    CONCAT13((uVar11 != 0) * (uVar11 < 0x100) *
                                                             (char)uVar11 - (0xff < uVar11),
                                                             CONCAT12((uVar10 != 0) *
                                                                      (uVar10 < 0x100) *
                                                                      (char)uVar10 - (0xff < uVar10)
                                                                      ,CONCAT11((uVar9 != 0) *
                                                                                (uVar9 < 0x100) *
                                                                                (char)uVar9 -
                                                                                (0xff < uVar9),
                                                                                (uVar6 != 0) *
                                                                                (uVar6 < 0x100) *
                                                                                (char)uVar6 -
                                                                                (0xff < uVar6)))))))
                        );
        uVar7 = psubusb(uVar8,*param_2);
        uVar13 = psubusb(*param_2,uVar8);
        uVar7 = uVar7 | uVar13;
        uVar8 = param_1[1];
        uVar2 = *(undefined8 *)((int)param_1 + 9);
        uVar11 = (ushort)(((uint7)(byte)((ulonglong)uVar8 >> 0x18) << 0x30) >> 0x28);
        uVar12 = (ushort)(((uint7)(byte)((ulonglong)uVar2 >> 0x18) << 0x30) >> 0x28);
        uVar6 = (ushort)((ushort)(byte)uVar8 + (ushort)(byte)uVar2 + 1) >> 1;
        uVar9 = (ushort)((ushort)(byte)((ulonglong)uVar8 >> 8) +
                         (ushort)(byte)((ulonglong)uVar2 >> 8) + 1) >> 1;
        uVar10 = (ushort)((short)CONCAT21(uVar11,(char)((ulonglong)uVar8 >> 0x10)) +
                          (short)CONCAT21(uVar12,(char)((ulonglong)uVar2 >> 0x10)) + 1U) >> 1;
        uVar11 = (ushort)((uVar11 >> 8) + (uVar12 >> 8) + 1) >> 1;
        uVar12 = (ushort)((byte)((ulonglong)uVar8 >> 0x20) + 1 +
                         (ushort)(byte)((ulonglong)uVar2 >> 0x20)) >> 1;
        uVar14 = (ushort)((byte)((ulonglong)uVar8 >> 0x28) + 1 +
                         (ushort)(byte)((ulonglong)uVar2 >> 0x28)) >> 1;
        uVar15 = (ushort)((byte)((ulonglong)uVar8 >> 0x30) + 1 +
                         (ushort)(byte)((ulonglong)uVar2 >> 0x30)) >> 1;
        uVar16 = (ushort)((byte)((ulonglong)uVar8 >> 0x38) + 1 +
                         (ushort)(byte)((ulonglong)uVar2 >> 0x38)) >> 1;
        uVar8 = CONCAT17((uVar16 != 0) * (uVar16 < 0x100) * (char)uVar16 - (0xff < uVar16),
                         CONCAT16((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 - (0xff < uVar15),
                                  CONCAT15((uVar14 != 0) * (uVar14 < 0x100) * (char)uVar14 -
                                           (0xff < uVar14),
                                           CONCAT14((uVar12 != 0) * (uVar12 < 0x100) * (char)uVar12
                                                    - (0xff < uVar12),
                                                    CONCAT13((uVar11 != 0) * (uVar11 < 0x100) *
                                                             (char)uVar11 - (0xff < uVar11),
                                                             CONCAT12((uVar10 != 0) *
                                                                      (uVar10 < 0x100) *
                                                                      (char)uVar10 - (0xff < uVar10)
                                                                      ,CONCAT11((uVar9 != 0) *
                                                                                (uVar9 < 0x100) *
                                                                                (char)uVar9 -
                                                                                (0xff < uVar9),
                                                                                (uVar6 != 0) *
                                                                                (uVar6 < 0x100) *
                                                                                (char)uVar6 -
                                                                                (0xff < uVar6)))))))
                        );
        uVar13 = psubusb(uVar8,param_2[1]);
        uVar17 = psubusb(param_2[1],uVar8);
        uVar13 = uVar13 | uVar17;
        uVar11 = (ushort)(((uint7)(byte)(uVar7 >> 0x18) << 0x30) >> 0x28);
        uVar12 = (ushort)(((uint7)(byte)(uVar13 >> 0x18) << 0x30) >> 0x28);
        iVar5 = iVar5 + (uint)(ushort)((ushort)(byte)uVar7 + (ushort)(byte)uVar13 +
                                       (ushort)(byte)(uVar7 >> 0x20) +
                                      (ushort)(byte)(uVar13 >> 0x20)) +
                        (uint)(ushort)((short)CONCAT21(uVar11,(char)(uVar7 >> 0x10)) +
                                       (short)CONCAT21(uVar12,(char)(uVar13 >> 0x10)) +
                                       (ushort)(byte)(uVar7 >> 0x30) +
                                      (ushort)(byte)(uVar13 >> 0x30)) +
                (uint)(ushort)((ushort)(byte)(uVar7 >> 8) + (ushort)(byte)(uVar13 >> 8) +
                               (ushort)(byte)(uVar7 >> 0x28) + (ushort)(byte)(uVar13 >> 0x28)) +
                (uint)(ushort)((uVar11 >> 8) + (uVar12 >> 8) + (ushort)(byte)(uVar7 >> 0x38) +
                              (ushort)(byte)(uVar13 >> 0x38));
        if (param_7 <= iVar5) {
          return;
        }
        param_1 = (undefined8 *)((int)param_1 + param_3);
        param_2 = (undefined8 *)((int)param_2 + param_3);
        param_6 = param_6 + -1;
      } while (param_6 != 0);
    }
    else {
      do {
        puVar1 = (undefined8 *)(param_3 + (int)param_1);
        uVar8 = *param_1;
        uVar11 = (ushort)(((uint7)(byte)((ulonglong)uVar8 >> 0x18) << 0x30) >> 0x28);
        uVar2 = *(undefined8 *)((int)param_1 + 1);
        uVar12 = (ushort)(((uint7)(byte)((ulonglong)uVar2 >> 0x18) << 0x30) >> 0x28);
        uVar3 = *puVar1;
        uVar6 = (ushort)(((uint7)(byte)((ulonglong)uVar3 >> 0x18) << 0x30) >> 0x28);
        uVar4 = *(undefined8 *)((int)puVar1 + 1);
        uVar9 = (ushort)(((uint7)(byte)((ulonglong)uVar4 >> 0x18) << 0x30) >> 0x28);
        uVar10 = (ushort)((ushort)(byte)uVar8 + (ushort)(byte)uVar2 +
                          (ushort)(byte)uVar3 + (ushort)(byte)uVar4 + 2) >> 2;
        uVar14 = (ushort)((ushort)(byte)((ulonglong)uVar8 >> 8) +
                          (ushort)(byte)((ulonglong)uVar2 >> 8) +
                          (ushort)(byte)((ulonglong)uVar3 >> 8) +
                          (ushort)(byte)((ulonglong)uVar4 >> 8) + 2) >> 2;
        uVar15 = (ushort)((short)CONCAT21(uVar11,(char)((ulonglong)uVar8 >> 0x10)) +
                          (short)CONCAT21(uVar12,(char)((ulonglong)uVar2 >> 0x10)) +
                          (short)CONCAT21(uVar6,(char)((ulonglong)uVar3 >> 0x10)) +
                          (short)CONCAT21(uVar9,(char)((ulonglong)uVar4 >> 0x10)) + 2U) >> 2;
        uVar11 = (ushort)((uVar11 >> 8) + (uVar12 >> 8) + (uVar6 >> 8) + (uVar9 >> 8) + 2) >> 2;
        uVar12 = (ushort)((ushort)(byte)((ulonglong)uVar8 >> 0x20) +
                          (ushort)(byte)((ulonglong)uVar2 >> 0x20) +
                          (ushort)(byte)((ulonglong)uVar3 >> 0x20) +
                          (ushort)(byte)((ulonglong)uVar4 >> 0x20) + 2) >> 2;
        uVar6 = (ushort)((ushort)(byte)((ulonglong)uVar8 >> 0x28) +
                         (ushort)(byte)((ulonglong)uVar2 >> 0x28) +
                         (ushort)(byte)((ulonglong)uVar3 >> 0x28) +
                         (ushort)(byte)((ulonglong)uVar4 >> 0x28) + 2) >> 2;
        uVar9 = (ushort)((ushort)(byte)((ulonglong)uVar8 >> 0x30) +
                         (ushort)(byte)((ulonglong)uVar2 >> 0x30) +
                         (ushort)(byte)((ulonglong)uVar3 >> 0x30) +
                         (ushort)(byte)((ulonglong)uVar4 >> 0x30) + 2) >> 2;
        uVar16 = (ushort)((ushort)(byte)((ulonglong)uVar8 >> 0x38) +
                          (ushort)(byte)((ulonglong)uVar2 >> 0x38) +
                          (ushort)(byte)((ulonglong)uVar3 >> 0x38) +
                          (ushort)(byte)((ulonglong)uVar4 >> 0x38) + 2) >> 2;
        uVar8 = CONCAT17((uVar16 != 0) * (uVar16 < 0x100) * (char)uVar16 - (0xff < uVar16),
                         CONCAT16((uVar9 != 0) * (uVar9 < 0x100) * (char)uVar9 - (0xff < uVar9),
                                  CONCAT15((uVar6 != 0) * (uVar6 < 0x100) * (char)uVar6 -
                                           (0xff < uVar6),
                                           CONCAT14((uVar12 != 0) * (uVar12 < 0x100) * (char)uVar12
                                                    - (0xff < uVar12),
                                                    CONCAT13((uVar11 != 0) * (uVar11 < 0x100) *
                                                             (char)uVar11 - (0xff < uVar11),
                                                             CONCAT12((uVar15 != 0) *
                                                                      (uVar15 < 0x100) *
                                                                      (char)uVar15 - (0xff < uVar15)
                                                                      ,CONCAT11((uVar14 != 0) *
                                                                                (uVar14 < 0x100) *
                                                                                (char)uVar14 -
                                                                                (0xff < uVar14),
                                                                                (uVar10 != 0) *
                                                                                (uVar10 < 0x100) *
                                                                                (char)uVar10 -
                                                                                (0xff < uVar10))))))
                                 ));
        uVar7 = psubusb(uVar8,*param_2);
        uVar13 = psubusb(*param_2,uVar8);
        uVar7 = uVar7 | uVar13;
        uVar8 = param_1[1];
        uVar11 = (ushort)(((uint7)(byte)((ulonglong)uVar8 >> 0x18) << 0x30) >> 0x28);
        uVar2 = *(undefined8 *)((int)param_1 + 9);
        uVar12 = (ushort)(((uint7)(byte)((ulonglong)uVar2 >> 0x18) << 0x30) >> 0x28);
        uVar3 = puVar1[1];
        uVar6 = (ushort)(((uint7)(byte)((ulonglong)uVar3 >> 0x18) << 0x30) >> 0x28);
        uVar4 = *(undefined8 *)((int)puVar1 + 9);
        uVar9 = (ushort)(((uint7)(byte)((ulonglong)uVar4 >> 0x18) << 0x30) >> 0x28);
        uVar10 = (ushort)((ushort)(byte)uVar8 + (ushort)(byte)uVar2 +
                          (ushort)(byte)uVar3 + (ushort)(byte)uVar4 + 2) >> 2;
        uVar14 = (ushort)((ushort)(byte)((ulonglong)uVar8 >> 8) +
                          (ushort)(byte)((ulonglong)uVar2 >> 8) +
                          (ushort)(byte)((ulonglong)uVar3 >> 8) +
                          (ushort)(byte)((ulonglong)uVar4 >> 8) + 2) >> 2;
        uVar15 = (ushort)((short)CONCAT21(uVar11,(char)((ulonglong)uVar8 >> 0x10)) +
                          (short)CONCAT21(uVar12,(char)((ulonglong)uVar2 >> 0x10)) +
                          (short)CONCAT21(uVar6,(char)((ulonglong)uVar3 >> 0x10)) +
                          (short)CONCAT21(uVar9,(char)((ulonglong)uVar4 >> 0x10)) + 2U) >> 2;
        uVar11 = (ushort)((uVar11 >> 8) + (uVar12 >> 8) + (uVar6 >> 8) + (uVar9 >> 8) + 2) >> 2;
        uVar12 = (ushort)((ushort)(byte)((ulonglong)uVar8 >> 0x20) +
                          (ushort)(byte)((ulonglong)uVar2 >> 0x20) +
                          (ushort)(byte)((ulonglong)uVar3 >> 0x20) +
                          (ushort)(byte)((ulonglong)uVar4 >> 0x20) + 2) >> 2;
        uVar6 = (ushort)((ushort)(byte)((ulonglong)uVar8 >> 0x28) +
                         (ushort)(byte)((ulonglong)uVar2 >> 0x28) +
                         (ushort)(byte)((ulonglong)uVar3 >> 0x28) +
                         (ushort)(byte)((ulonglong)uVar4 >> 0x28) + 2) >> 2;
        uVar9 = (ushort)((ushort)(byte)((ulonglong)uVar8 >> 0x30) +
                         (ushort)(byte)((ulonglong)uVar2 >> 0x30) +
                         (ushort)(byte)((ulonglong)uVar3 >> 0x30) +
                         (ushort)(byte)((ulonglong)uVar4 >> 0x30) + 2) >> 2;
        uVar16 = (ushort)((ushort)(byte)((ulonglong)uVar8 >> 0x38) +
                          (ushort)(byte)((ulonglong)uVar2 >> 0x38) +
                          (ushort)(byte)((ulonglong)uVar3 >> 0x38) +
                          (ushort)(byte)((ulonglong)uVar4 >> 0x38) + 2) >> 2;
        uVar8 = CONCAT17((uVar16 != 0) * (uVar16 < 0x100) * (char)uVar16 - (0xff < uVar16),
                         CONCAT16((uVar9 != 0) * (uVar9 < 0x100) * (char)uVar9 - (0xff < uVar9),
                                  CONCAT15((uVar6 != 0) * (uVar6 < 0x100) * (char)uVar6 -
                                           (0xff < uVar6),
                                           CONCAT14((uVar12 != 0) * (uVar12 < 0x100) * (char)uVar12
                                                    - (0xff < uVar12),
                                                    CONCAT13((uVar11 != 0) * (uVar11 < 0x100) *
                                                             (char)uVar11 - (0xff < uVar11),
                                                             CONCAT12((uVar15 != 0) *
                                                                      (uVar15 < 0x100) *
                                                                      (char)uVar15 - (0xff < uVar15)
                                                                      ,CONCAT11((uVar14 != 0) *
                                                                                (uVar14 < 0x100) *
                                                                                (char)uVar14 -
                                                                                (0xff < uVar14),
                                                                                (uVar10 != 0) *
                                                                                (uVar10 < 0x100) *
                                                                                (char)uVar10 -
                                                                                (0xff < uVar10))))))
                                 ));
        uVar13 = psubusb(uVar8,param_2[1]);
        uVar17 = psubusb(param_2[1],uVar8);
        uVar13 = uVar13 | uVar17;
        uVar11 = (ushort)(((uint7)(byte)(uVar7 >> 0x18) << 0x30) >> 0x28);
        uVar12 = (ushort)(((uint7)(byte)(uVar13 >> 0x18) << 0x30) >> 0x28);
        iVar5 = iVar5 + (uint)(ushort)((ushort)(byte)uVar7 + (ushort)(byte)uVar13 +
                                       (ushort)(byte)(uVar7 >> 0x20) +
                                      (ushort)(byte)(uVar13 >> 0x20)) +
                        (uint)(ushort)((short)CONCAT21(uVar11,(char)(uVar7 >> 0x10)) +
                                       (short)CONCAT21(uVar12,(char)(uVar13 >> 0x10)) +
                                       (ushort)(byte)(uVar7 >> 0x30) +
                                      (ushort)(byte)(uVar13 >> 0x30)) +
                (uint)(ushort)((ushort)(byte)(uVar7 >> 8) + (ushort)(byte)(uVar13 >> 8) +
                               (ushort)(byte)(uVar7 >> 0x28) + (ushort)(byte)(uVar13 >> 0x28)) +
                (uint)(ushort)((uVar11 >> 8) + (uVar12 >> 8) + (ushort)(byte)(uVar7 >> 0x38) +
                              (ushort)(byte)(uVar13 >> 0x38));
        if (param_7 <= iVar5) {
          return;
        }
        param_2 = (undefined8 *)((int)param_2 + param_3);
        param_6 = param_6 + -1;
        param_1 = puVar1;
      } while (param_6 != 0);
    }
  }
  return;
}


