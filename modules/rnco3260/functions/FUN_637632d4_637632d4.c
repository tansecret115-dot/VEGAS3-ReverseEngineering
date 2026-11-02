/* Module: rnco3260.dll
   Function: FUN_637632d4
   Address: 637632d4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_637632d4(int param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int in_stack_0000001c;
  
  DAT_6379a424 = in_stack_0000001c;
  puVar12 = (undefined8 *)(param_1 + _DAT_6379a428);
  puVar9 = (undefined4 *)(param_2 + _DAT_6379a42c);
  if (0 < (int)DAT_6379a414) {
    DAT_6379a418 = DAT_6379a414;
    uVar11 = DAT_6379a410 >> 4;
    uVar7 = uVar11;
    puVar14 = param_3;
    puVar13 = puVar12;
    puVar10 = puVar9;
    if (uVar11 != 0) {
      while( true ) {
        do {
          DAT_6379a41c = uVar7;
          uVar3 = *puVar9;
          uVar4 = puVar9[0x5a];
          uVar1 = *puVar12;
          uVar5 = puVar9[1];
          uVar6 = puVar9[0x5b];
          uVar2 = puVar12[1];
          *param_3 = CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)((uint)uVar4 >> 8),
                                                                           (char)((ulonglong)uVar1
                                                                                 >> 0x18)),
                                                                  (char)((uint)uVar3 >> 8)),
                                                         (char)((ulonglong)uVar1 >> 0x10)),
                                                (char)uVar4),(char)((ulonglong)uVar1 >> 8)),
                              CONCAT11((char)uVar3,(char)uVar1));
          param_3[1] = CONCAT17((char)((uint)uVar4 >> 0x18),
                                CONCAT16((char)((ulonglong)uVar1 >> 0x38),
                                         CONCAT15((char)((uint)uVar3 >> 0x18),
                                                  CONCAT14((char)((ulonglong)uVar1 >> 0x30),
                                                           CONCAT13((char)((uint)uVar4 >> 0x10),
                                                                    CONCAT12((char)((ulonglong)uVar1
                                                                                   >> 0x28),
                                                                             CONCAT11((char)((uint)
                                                  uVar3 >> 0x10),(char)((ulonglong)uVar1 >> 0x20))))
                                                  ))));
          param_3[2] = CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)((uint)uVar6 >> 8
                                                                                   ),(char)((
                                                  ulonglong)uVar2 >> 0x18)),(char)((uint)uVar5 >> 8)
                                                  ),(char)((ulonglong)uVar2 >> 0x10)),(char)uVar6),
                                         (char)((ulonglong)uVar2 >> 8)),
                                CONCAT11((char)uVar5,(char)uVar2));
          param_3[3] = CONCAT17((char)((uint)uVar6 >> 0x18),
                                CONCAT16((char)((ulonglong)uVar2 >> 0x38),
                                         CONCAT15((char)((uint)uVar5 >> 0x18),
                                                  CONCAT14((char)((ulonglong)uVar2 >> 0x30),
                                                           CONCAT13((char)((uint)uVar6 >> 0x10),
                                                                    CONCAT12((char)((ulonglong)uVar2
                                                                                   >> 0x28),
                                                                             CONCAT11((char)((uint)
                                                  uVar5 >> 0x10),(char)((ulonglong)uVar2 >> 0x20))))
                                                  ))));
          param_3 = param_3 + 4;
          puVar12 = puVar12 + 2;
          uVar11 = uVar11 - 1;
          puVar9 = puVar9 + 2;
          uVar7 = DAT_6379a41c;
        } while (uVar11 != 0);
        puVar12 = puVar13 + 0x5a;
        param_3 = (undefined8 *)((int)puVar14 + DAT_6379a424);
        uVar8 = DAT_6379a418 - 1;
        if (uVar8 == 0) break;
        puVar9 = puVar10;
        uVar11 = DAT_6379a41c;
        DAT_6379a418 = uVar8;
        puVar14 = param_3;
        puVar13 = puVar12;
        if ((uVar8 & 1) == 0) {
          puVar9 = puVar10 + 0xb4;
          puVar10 = puVar9;
        }
      }
    }
  }
  return;
}


